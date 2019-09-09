// -------------------------------------------------------------------------
//    @FileName         :    NFProtocolDefine.cs
//    @Author           :    NFrame Studio
//    @Module           :    NFProtocolDefine
// -------------------------------------------------------------------------

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
namespace NFrame
{
	public class GM
	{
		//Class name
		public static readonly String ThisName = "GM";
		// IObject
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Property
		public static readonly String Level = "Level";// int
		// Record

	}
	public class Group
	{
		//Class name
		public static readonly String ThisName = "Group";
		// IObject
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Property
		public static readonly String MatchGambleDiamond = "MatchGambleDiamond";// int
		public static readonly String MatchID = "MatchID";// object
		public static readonly String MatchOpponentCup = "MatchOpponentCup";// int
		public static readonly String MatchOpponentD = "MatchOpponentD";// int
		public static readonly String MatchOpponentDiamond = "MatchOpponentDiamond";// int
		public static readonly String MatchOpponentGold = "MatchOpponentGold";// int
		public static readonly String MatchOpponentHead = "MatchOpponentHead";// string
		public static readonly String MatchOpponentHeroCnf1 = "MatchOpponentHeroCnf1";// string
		public static readonly String MatchOpponentHeroCnf2 = "MatchOpponentHeroCnf2";// string
		public static readonly String MatchOpponentHeroCnf3 = "MatchOpponentHeroCnf3";// string
		public static readonly String MatchOpponentHeroHP1 = "MatchOpponentHeroHP1";// int
		public static readonly String MatchOpponentHeroHP2 = "MatchOpponentHeroHP2";// int
		public static readonly String MatchOpponentHeroHP3 = "MatchOpponentHeroHP3";// int
		public static readonly String MatchOpponentHeroID1 = "MatchOpponentHeroID1";// object
		public static readonly String MatchOpponentHeroID2 = "MatchOpponentHeroID2";// object
		public static readonly String MatchOpponentHeroID3 = "MatchOpponentHeroID3";// object
		public static readonly String MatchOpponentHeroStar1 = "MatchOpponentHeroStar1";// int
		public static readonly String MatchOpponentHeroStar2 = "MatchOpponentHeroStar2";// int
		public static readonly String MatchOpponentHeroStar3 = "MatchOpponentHeroStar3";// int
		public static readonly String MatchOpponentID = "MatchOpponentID";// object
		public static readonly String MatchOpponentK = "MatchOpponentK";// int
		public static readonly String MatchOpponentLevel = "MatchOpponentLevel";// int
		public static readonly String MatchOpponentName = "MatchOpponentName";// string
		public static readonly String MatchStar = "MatchStar";// int
		public static readonly String MatchTeamID = "MatchTeamID";// object
		// Record
		public class MatchMember
		{
			//Class name
			public static readonly String ThisName = "MatchMember";
			public const int GUID = 0;//object
			public const int Name = 1;//string
			public const int K = 2;//int
			public const int D = 3;//int
			public const int A = 4;//int
			public const int Diamond = 5;//int
			public const int Cup = 6;//int
			public const int MVP = 7;//int
			public const int Streak = 8;//int
			public const int HeroCnf1 = 9;//string
			public const int HeroCnf2 = 10;//string
			public const int HeroCnf3 = 11;//string
			public const int HeroStar1 = 12;//int
			public const int HeroStar2 = 13;//int
			public const int HeroStar3 = 14;//int
			public const int HP1 = 15;//int
			public const int HP2 = 16;//int
			public const int HP3 = 17;//int

		}

	}
	public class IObject
	{
		//Class name
		public static readonly String ThisName = "IObject";
		// Property
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Record

	}
	public class Language
	{
		//Class name
		public static readonly String ThisName = "Language";
		// IObject
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Property
		public static readonly String Chinese = "Chinese";// string
		public static readonly String English = "English";// string
		public static readonly String French = "French";// string
		public static readonly String Spanish = "Spanish";// string
		// Record

	}
	public class NoSqlServer
	{
		//Class name
		public static readonly String ThisName = "NoSqlServer";
		// IObject
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Property
		public static readonly String Auth = "Auth";// string
		public static readonly String IP = "IP";// string
		public static readonly String Port = "Port";// int
		public static readonly String ServerID = "ServerID";// int
		// Record

	}
	public class Player
	{
		//Class name
		public static readonly String ThisName = "Player";
		// IObject
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Property
		public static readonly String Account = "Account";// string
		public static readonly String ConnectKey = "ConnectKey";// string
		public static readonly String FirstTarget = "FirstTarget";// object
		public static readonly String GameID = "GameID";// int
		public static readonly String GateID = "GateID";// int
		public static readonly String Gold = "Gold";// int
		public static readonly String Head = "Head";// string
		public static readonly String HomeSceneID = "HomeSceneID";// int
		public static readonly String LastOfflineTime = "LastOfflineTime";// object
		public static readonly String Name = "Name";// string
		public static readonly String OnlineCount = "OnlineCount";// int
		public static readonly String OnlineTime = "OnlineTime";// object
		public static readonly String TotalLineTime = "TotalLineTime";// object
		public static readonly String TotalTime = "TotalTime";// int
		// Record
		public class MyBet
		{
			//Class name
			public static readonly String ThisName = "MyBet";
			public const int GUID = 0;//object
			public const int Chip = 1;//int

		}

	}
	public class Scene
	{
		//Class name
		public static readonly String ThisName = "Scene";
		// IObject
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Property
		public static readonly String ActorID = "ActorID";// int
		public static readonly String FilePath = "FilePath";// string
		public static readonly String LoadingUI = "LoadingUI";// string
		public static readonly String MaxGroup = "MaxGroup";// int
		public static readonly String MaxGroupPlayers = "MaxGroupPlayers";// int
		public static readonly String NavigationResPath = "NavigationResPath";// string
		public static readonly String RelivePos = "RelivePos";// string
		public static readonly String ResPath = "ResPath";// string
		public static readonly String SceneName = "SceneName";// string
		public static readonly String SceneShowName = "SceneShowName";// string
		public static readonly String SoundList = "SoundList";// string
		public static readonly String Type = "Type";// int
		public static readonly String Width = "Width";// int
		// Record

	}
	public class Security
	{
		//Class name
		public static readonly String ThisName = "Security";
		// IObject
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Property
		public static readonly String SecurityData = "SecurityData";// string
		// Record

	}
	public class Server
	{
		//Class name
		public static readonly String ThisName = "Server";
		// IObject
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Property
		public static readonly String Area = "Area";// int
		public static readonly String Cell = "Cell";// int
		public static readonly String CpuCount = "CpuCount";// int
		public static readonly String IP = "IP";// string
		public static readonly String MaxOnline = "MaxOnline";// int
		public static readonly String Name = "Name";// string
		public static readonly String Port = "Port";// int
		public static readonly String ServerID = "ServerID";// int
		public static readonly String Type = "Type";// int
		public static readonly String WSPort = "WSPort";// int
		public static readonly String WebPort = "WebPort";// int
		// Record

	}
	public class SqlServer
	{
		//Class name
		public static readonly String ThisName = "SqlServer";
		// IObject
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Property
		public static readonly String IP = "IP";// string
		public static readonly String Port = "Port";// int
		public static readonly String ServerID = "ServerID";// int
		public static readonly String SqlIP = "SqlIP";// string
		public static readonly String SqlName = "SqlName";// string
		public static readonly String SqlPort = "SqlPort";// int
		public static readonly String SqlPwd = "SqlPwd";// string
		public static readonly String SqlUser = "SqlUser";// string
		// Record

	}

}