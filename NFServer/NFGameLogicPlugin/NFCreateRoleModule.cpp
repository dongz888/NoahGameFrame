/*
            This file is part of: 
                NoahFrame
            https://github.com/ketoo/NoahGameFrame

   Copyright 2009 - 2019 NoahFrame(NoahGameFrame)

   File creator: lvsheng.huang
   
   NoahFrame is open-source software and you can redistribute it and/or modify
   it under the terms of the License; besides, anyone who use this file/software must include this copyright announcement.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include "NFCreateRoleModule.h"
#include "NFComm/NFMessageDefine/NFProtocolDefine.hpp"

bool NFCreateRoleModule::Init()
{
	m_pElementModule = pPluginManager->FindModule<NFIElementModule>();
	m_pClassModule = pPluginManager->FindModule<NFIClassModule>();
	m_pNetModule = pPluginManager->FindModule<NFINetModule>();
	m_pKernelModule = pPluginManager->FindModule<NFIKernelModule>();
	m_pGameToDBModule = pPluginManager->FindModule<NFIGameServerToDBModule>();
	m_pSceneProcessModule = pPluginManager->FindModule<NFISceneProcessModule>();
	m_pGameServerNet_ServerModule = pPluginManager->FindModule<NFIGameServerNet_ServerModule>();
	m_pNetClientModule = pPluginManager->FindModule<NFINetClientModule>();
	m_pScheduleModule = pPluginManager->FindModule<NFIScheduleModule>();
	m_pDataTailModule = pPluginManager->FindModule<NFIDataTailModule>();
	m_pSceneModule = pPluginManager->FindModule<NFISceneModule>();
	m_pCreateObjectModule = pPluginManager->FindModule<NFICreateObjectModule>();
    return true;
}

bool NFCreateRoleModule::AfterInit()
{
	m_pKernelModule->AddClassCallBack(NFrame::Player::ThisName(), this, &NFCreateRoleModule::OnObjectPlayerEvent);

	return true;
}

bool NFCreateRoleModule::ReadyExecute()
{
	m_pNetModule->RemoveReceiveCallBack(NFMsg::EGMI_REQ_ENTER_GAME);


	m_pNetModule->AddReceiveCallBack(NFMsg::EGMI_REQ_ENTER_GAME, this, &NFCreateRoleModule::OnClienEnterGameProcess);

	m_pNetClientModule->AddReceiveCallBack(NF_SERVER_TYPES::NF_ST_DB, NFMsg::EGMI_ACK_LOAD_ROLE_DATA, this, &NFCreateRoleModule::OnDBLoadRoleDataProcess);

	return true;
}

bool NFCreateRoleModule::Shut()
{
	return true;
}

bool NFCreateRoleModule::Execute()
{
	return true;
}

void NFCreateRoleModule::OnClienEnterGameProcess(const NFSOCK nSockIndex, const int nMsgID, const char * msg, const uint32_t nLen)
{
	NFGUID nClientID;
	NFMsg::ReqEnterGameServer xMsg;
	if (!m_pNetModule->ReceivePB( nMsgID, msg, nLen, xMsg, nClientID))
	{
		return;
	}

	NFGUID nRoleID = NFINetModule::PBToNF(xMsg.id());

	if (m_pKernelModule->GetObject(nRoleID))
	{
		//it should be rebind with proxy's netobject
		m_pScheduleModule->RemoveSchedule(nRoleID, "DestroyPlayerOnTime");

		const int sceneID = m_pKernelModule->GetPropertyInt(nRoleID, NFrame::Player::SceneID());
		const int groupID = m_pKernelModule->GetPropertyInt(nRoleID, NFrame::Player::GroupID());
		const NFGUID matchID = m_pSceneModule->GetPropertyObject(sceneID, groupID, NFrame::Group::MatchID());
		if (!matchID.IsNull())
		{
			//reconnect to the match
		}
		else
		{
			m_pKernelModule->DestroyObject(nRoleID);
		}
	}

	//////////////////////////////////////////////////////////////////////////

	NF_SHARE_PTR<NFIGameServerNet_ServerModule::GateBaseInfo>  pGateInfo = m_pGameServerNet_ServerModule->GetPlayerGateInfo(nRoleID);
	if (nullptr != pGateInfo)
	{
		if (pGateInfo->eStatus == NFIGameServerNet_ServerModule::GateBaseInfo::E_LOADING)
		{
			return;
		}

		m_pGameServerNet_ServerModule->RemovePlayerGateInfo(nRoleID);
	}

	NF_SHARE_PTR<NFIGameServerNet_ServerModule::GateServerInfo> pGateServerinfo = m_pGameServerNet_ServerModule->GetGateServerInfoBySockIndex(nSockIndex);
	if (nullptr == pGateServerinfo)
	{
		return;
	}

	int nGateID = -1;
	if (pGateServerinfo->xServerData.pData)
	{
		nGateID = pGateServerinfo->xServerData.pData->server_id();
	}

	if (nGateID < 0)
	{
		return;
	}

	if (!m_pGameServerNet_ServerModule->AddPlayerGateInfo(nRoleID, nClientID, nGateID))
	{
		return;
	}

	m_pNetClientModule->SendBySuitWithOutHead(NF_SERVER_TYPES::NF_ST_DB, nSockIndex, NFMsg::EGMI_REQ_LOAD_ROLE_DATA, std::string(msg, nLen));

}

void NFCreateRoleModule::OnDBLoadRoleDataProcess(const NFSOCK nSockIndex, const int nMsgID, const char * msg, const uint32_t nLen)
{
	NFGUID nClientID;
	NFMsg::RoleDataPack xMsg;
	if (!m_pNetModule->ReceivePB(nMsgID, msg, nLen, xMsg, nClientID))
	{
		//releasing all the resource that allow when the user login, then kick off the user
		// TODO

		//m_pGameServerNet_ServerModule->RemovePlayerGateInfo();

		//Avtually, the developer may not know the user id in this situation, therefore the developer must record the login-time when the user coming
		//and check the time per min to kick off the user who are not active.

		return;
	}

	NFGUID nRoleID = NFINetModule::PBToNF(xMsg.id());
	if (m_pKernelModule->GetObject(nRoleID))
	{
		//it should be rebind with proxy's netobject
		m_pKernelModule->DestroyObject(nRoleID);
	}

	mxObjectDataCache[nRoleID] = xMsg;

	NF_SHARE_PTR<NFIGameServerNet_ServerModule::GateBaseInfo>  pGateInfo = m_pGameServerNet_ServerModule->GetPlayerGateInfo(nRoleID);
	if (nullptr != pGateInfo)
	{
		if (pGateInfo->eStatus == NFIGameServerNet_ServerModule::GateBaseInfo::E_LOADING)
		{
			pGateInfo->eStatus = NFIGameServerNet_ServerModule::GateBaseInfo::E_LOADED;
		}
	}

	NFDataList var;

	var.AddString(NFrame::Player::GateID());
	var.AddInt(pGateInfo->nGateID);

	var.AddString(NFrame::Player::GameID());
	var.AddInt(pPluginManager->GetAppID());

	/*
	var.AddString(NFrame::Player::HomeSceneID());
	var.AddInt(1);

	var.AddString(NFrame::Player::SceneID());
	var.AddInt(1);
	*/

	NF_SHARE_PTR<NFIObject> pObject = m_pKernelModule->CreateObject(nRoleID, 1, 0, NFrame::Player::ThisName(), "", var);
	if (nullptr == pObject)
	{
		//mRoleBaseData
		//mRoleFDData
		mxObjectDataCache.erase(nRoleID);
		return;
	}

	//get data first then create player
	const int nHomeSceneID = pObject->GetPropertyInt(NFrame::Player::HomeSceneID());
	const NFVector3& pos = m_pSceneModule->GetRelivePosition(nHomeSceneID, 0);
	m_pSceneProcessModule->RequestEnterScene(pObject->Self(), nHomeSceneID, -1, 0, pos, NFDataList());
}

int NFCreateRoleModule::OnObjectPlayerEvent(const NFGUID & self, const std::string & strClassName, const CLASS_OBJECT_EVENT eClassEvent, const NFDataList & var)
{
	if (CLASS_OBJECT_EVENT::COE_DESTROY == eClassEvent)
	{
		//m_pDataTailModule->LogObjectData(self);

		m_pCreateObjectModule->SaveData(self);
	}
	else if (CLASS_OBJECT_EVENT::COE_CREATE_LOADDATA == eClassEvent)
	{
		//m_pDataTailModule->StartTrail(self);
		//m_pDataTailModule->LogObjectData(self);

		m_pCreateObjectModule->AttachData(self);
	}
	else if (CLASS_OBJECT_EVENT::COE_CREATE_FINISH == eClassEvent)
	{
		auto it = mxObjectDataCache.find(self);
		if (it != mxObjectDataCache.end())
		{
			mxObjectDataCache.erase(it);
		}


		m_pScheduleModule->AddSchedule(self, "SaveDataOnTime", this, &NFCreateRoleModule::SaveDataOnTime, 180.0f, -1);
	}

	return 0;
}


int NFCreateRoleModule::SaveDataOnTime(const NFGUID & self, const std::string & name, const float fIntervalTime, const int nCount)
{
	m_pCreateObjectModule->SaveData(self);
	return 0;
}

