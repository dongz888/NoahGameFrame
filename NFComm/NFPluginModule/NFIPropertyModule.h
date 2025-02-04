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


#ifndef NFI_PROPERTY_MODULE_H
#define NFI_PROPERTY_MODULE_H

#include <iostream>
#include "NFIModule.h"

class NFIPropertyModule
    : public NFIModule
{
public:
    enum NFPropertyGroup
    {
		NPG_JOBLEVEL,
		NPG_FIGHTING_HERO,
		NPG_EFFECTVALUE,
		NPG_REBIRTH_ADD,
		NPG_EQUIP,
		NPG_EQUIP_AWARD,
		NPG_STATIC_BUFF,
		NPG_RUNTIME_BUFF,
        NPG_ALL ,
    };


    virtual int RefreshBaseProperty(const NFGUID& self) = 0;
    virtual int64_t GetPropertyValue(const NFGUID& self, const std::string& strPropertyName, const NFPropertyGroup eGroupType) = 0;
    virtual int SetPropertyValue(const NFGUID& self, const std::string& strPropertyName, const NFPropertyGroup eGroupType, const int64_t nValue) = 0;
    virtual bool CalculatePropertyValue(const NFGUID& self, const std::string& strPropertyName, const NFPropertyGroup eGroupType, const int64_t nValue, const bool bPositive = false) = 0;

    
    virtual bool AddGold(const NFGUID& self, const int64_t nValue) = 0;
    virtual bool ConsumeGold(const NFGUID& self, const int64_t nValue) = 0;
    virtual bool EnoughGold(const NFGUID& self, const int64_t nValue) = 0;

};

#endif