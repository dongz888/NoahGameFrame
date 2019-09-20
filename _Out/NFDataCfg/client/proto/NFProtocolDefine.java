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
	public class GameTable
	{
		//Class name
		public static final String ThisName = "GameTable";
		// IObject
		public static final String ClassName = "ClassName";// string
		public static final String ConfigID = "ConfigID";// string
		public static final String GroupID = "GroupID";// int
		public static final String ID = "ID";// string
		public static final String MoveTo = "MoveTo";// vector3
		public static final String Position = "Position";// vector3
		public static final String SceneID = "SceneID";// int
		// Property
		public static final String Amount = "Amount";// int
		public static final String BetMax = "BetMax";// int
		public static final String BetMin = "BetMin";// int
		public static final String BetTime = "BetTime";// int
		public static final String CanBet = "CanBet";// int
		public static final String EndTime = "EndTime";// int
		public static final String GameID = "GameID";// int
		public static final String GameName = "GameName";// string
		public static final String GameRound = "GameRound";// int
		public static final String GameState = "GameState";// int
		public static final String IsOpen = "IsOpen";// int
		public static final String PlayTimes = "PlayTimes";// int
		public static final String PlayerCount = "PlayerCount";// int
		public static final String StartTime = "StartTime";// int
		public static final String TableID = "TableID";// int
		// Record
		public class Bet
		{
			//Class name
			public static final String ThisName = "Bet";
			public static final int GUID = 0;//object
			public static final int Index = 1;//int
			public static final int Chip = 2;//int

		}
		public class BetLimit
		{
			//Class name
			public static final String ThisName = "BetLimit";
			public static final int GUID = 0;//object
			public static final int BetIndex = 1;//int
			public static final int MaxBet = 2;//int
			public static final int MinBet = 3;//int
			public static final int MaxPay = 4;//int
			public static final int Odds = 5;//int
			public static final int MaxTotalBet = 6;//int

		}
		public class ChipIn
		{
			//Class name
			public static final String ThisName = "ChipIn";
			public static final int GUID = 0;//object
			public static final int Odds = 1;//int
			public static final int Chip = 2;//int
			public static final int IsWin = 3;//int
			public static final int PrePay = 4;//int

		}
		public class History
		{
			//Class name
			public static final String ThisName = "History";
			public static final int GUID = 0;//object
			public static final int Result = 1;//int

		}
		public class Poke
		{
			//Class name
			public static final String ThisName = "Poke";
			public static final int GUID = 0;//object
			public static final int Index = 1;//int
			public static final int Play = 2;//int

		}

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
		public static final String MatchID = "MatchID";// object
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
		public static final String MaxGroup = "MaxGroup";// int
		public static final String MaxGroupPlayers = "MaxGroupPlayers";// int
		public static final String SceneName = "SceneName";// string
		public static final String SceneShowName = "SceneShowName";// string
		public static final String Type = "Type";// int
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
