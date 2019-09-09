// -------------------------------------------------------------------------
//    @FileName         :    NFProtocolDefine.java
//    @Author           :    NFrame Studio
//    @Module           :    NFProtocolDefine
// -------------------------------------------------------------------------

package nframe;
	public class GM
	{
		//Class name
		public static final String ThisName = "GM";
		// IObject
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Property
		public static final String Level = "Level";// int
		// Record

	}
	public class Group
	{
		//Class name
		public static final String ThisName = "Group";
		// IObject
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Property
		public static final String MatchGambleDiamond = "MatchGambleDiamond";// int
		public static final String MatchID = "MatchID";// object
		public static final String MatchOpponentCup = "MatchOpponentCup";// int
		public static final String MatchOpponentD = "MatchOpponentD";// int
		public static final String MatchOpponentDiamond = "MatchOpponentDiamond";// int
		public static final String MatchOpponentGold = "MatchOpponentGold";// int
		public static final String MatchOpponentHead = "MatchOpponentHead";// string
		public static final String MatchOpponentHeroCnf1 = "MatchOpponentHeroCnf1";// string
		public static final String MatchOpponentHeroCnf2 = "MatchOpponentHeroCnf2";// string
		public static final String MatchOpponentHeroCnf3 = "MatchOpponentHeroCnf3";// string
		public static final String MatchOpponentHeroHP1 = "MatchOpponentHeroHP1";// int
		public static final String MatchOpponentHeroHP2 = "MatchOpponentHeroHP2";// int
		public static final String MatchOpponentHeroHP3 = "MatchOpponentHeroHP3";// int
		public static final String MatchOpponentHeroID1 = "MatchOpponentHeroID1";// object
		public static final String MatchOpponentHeroID2 = "MatchOpponentHeroID2";// object
		public static final String MatchOpponentHeroID3 = "MatchOpponentHeroID3";// object
		public static final String MatchOpponentHeroStar1 = "MatchOpponentHeroStar1";// int
		public static final String MatchOpponentHeroStar2 = "MatchOpponentHeroStar2";// int
		public static final String MatchOpponentHeroStar3 = "MatchOpponentHeroStar3";// int
		public static final String MatchOpponentID = "MatchOpponentID";// object
		public static final String MatchOpponentK = "MatchOpponentK";// int
		public static final String MatchOpponentLevel = "MatchOpponentLevel";// int
		public static final String MatchOpponentName = "MatchOpponentName";// string
		public static final String MatchStar = "MatchStar";// int
		public static final String MatchTeamID = "MatchTeamID";// object
		// Record
		public class MatchMember
		{
			//Class name
			public static final String ThisName = "MatchMember";
			public static final int GUID = 0;//object
			public static final int Name = 1;//string
			public static final int K = 2;//int
			public static final int D = 3;//int
			public static final int A = 4;//int
			public static final int Diamond = 5;//int
			public static final int Cup = 6;//int
			public static final int MVP = 7;//int
			public static final int Streak = 8;//int
			public static final int HeroCnf1 = 9;//string
			public static final int HeroCnf2 = 10;//string
			public static final int HeroCnf3 = 11;//string
			public static final int HeroStar1 = 12;//int
			public static final int HeroStar2 = 13;//int
			public static final int HeroStar3 = 14;//int
			public static final int HP1 = 15;//int
			public static final int HP2 = 16;//int
			public static final int HP3 = 17;//int

		}

	}
	public class IObject
	{
		//Class name
		public static final String ThisName = "IObject";
		// Property
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Record

	}
	public class Language
	{
		//Class name
		public static final String ThisName = "Language";
		// IObject
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Property
		public static final String Chinese = "Chinese";// string
		public static final String English = "English";// string
		public static final String French = "French";// string
		public static final String Spanish = "Spanish";// string
		// Record

	}
	public class NoSqlServer
	{
		//Class name
		public static final String ThisName = "NoSqlServer";
		// IObject
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Property
		public static final String Auth = "Auth";// string
		public static final String IP = "IP";// string
		public static final String Port = "Port";// int
		public static final String ServerID = "ServerID";// int
		// Record

	}
	public class Player
	{
		//Class name
		public static final String ThisName = "Player";
		// IObject
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Property
		public static final String Account = "Account";// string
		public static final String ConnectKey = "ConnectKey";// string
		public static final String FirstTarget = "FirstTarget";// object
		public static final String GameID = "GameID";// int
		public static final String GateID = "GateID";// int
		public static final String Gold = "Gold";// int
		public static final String Head = "Head";// string
		public static final String HomeSceneID = "HomeSceneID";// int
		public static final String LastOfflineTime = "LastOfflineTime";// object
		public static final String Name = "Name";// string
		public static final String OnlineCount = "OnlineCount";// int
		public static final String OnlineTime = "OnlineTime";// object
		public static final String TotalLineTime = "TotalLineTime";// object
		public static final String TotalTime = "TotalTime";// int
		// Record
		public class MyBet
		{
			//Class name
			public static final String ThisName = "MyBet";
			public static final int GUID = 0;//object
			public static final int Chip = 1;//int

		}

	}
	public class Scene
	{
		//Class name
		public static final String ThisName = "Scene";
		// IObject
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Property
		public static final String ActorID = "ActorID";// int
		public static final String FilePath = "FilePath";// string
		public static final String LoadingUI = "LoadingUI";// string
		public static final String MaxGroup = "MaxGroup";// int
		public static final String MaxGroupPlayers = "MaxGroupPlayers";// int
		public static final String NavigationResPath = "NavigationResPath";// string
		public static final String RelivePos = "RelivePos";// string
		public static final String ResPath = "ResPath";// string
		public static final String SceneName = "SceneName";// string
		public static final String SceneShowName = "SceneShowName";// string
		public static final String SoundList = "SoundList";// string
		public static final String Type = "Type";// int
		public static final String Width = "Width";// int
		// Record

	}
	public class Security
	{
		//Class name
		public static final String ThisName = "Security";
		// IObject
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Property
		public static final String SecurityData = "SecurityData";// string
		// Record

	}
	public class Server
	{
		//Class name
		public static final String ThisName = "Server";
		// IObject
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Property
		public static final String Area = "Area";// int
		public static final String Cell = "Cell";// int
		public static final String CpuCount = "CpuCount";// int
		public static final String IP = "IP";// string
		public static final String MaxOnline = "MaxOnline";// int
		public static final String Name = "Name";// string
		public static final String Port = "Port";// int
		public static final String ServerID = "ServerID";// int
		public static final String Type = "Type";// int
		public static final String WSPort = "WSPort";// int
		public static final String WebPort = "WebPort";// int
		// Record

	}
	public class SqlServer
	{
		//Class name
		public static final String ThisName = "SqlServer";
		// IObject
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Property
		public static final String IP = "IP";// string
		public static final String Port = "Port";// int
		public static final String ServerID = "ServerID";// int
		public static final String SqlIP = "SqlIP";// string
		public static final String SqlName = "SqlName";// string
		public static final String SqlPort = "SqlPort";// int
		public static final String SqlPwd = "SqlPwd";// string
		public static final String SqlUser = "SqlUser";// string
		// Record

	}
