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
	public class GameTable
	{
		//Class name
		public static readonly String ThisName = "GameTable";
		// IObject
		public static readonly String ClassName = "ClassName";// string
		public static readonly String ConfigID = "ConfigID";// string
		public static readonly String GroupID = "GroupID";// int
		public static readonly String ID = "ID";// string
		public static readonly String MoveTo = "MoveTo";// vector3
		public static readonly String Position = "Position";// vector3
		public static readonly String SceneID = "SceneID";// int
		// Property
		public static readonly String Amount = "Amount";// int
		public static readonly String BetMax = "BetMax";// int
		public static readonly String BetMin = "BetMin";// int
		public static readonly String BetTime = "BetTime";// int
		public static readonly String CanBet = "CanBet";// int
		public static readonly String EndTime = "EndTime";// int
		public static readonly String GameID = "GameID";// int
		public static readonly String GameName = "GameName";// string
		public static readonly String GameRound = "GameRound";// int
		public static readonly String GameState = "GameState";// int
		public static readonly String IsOpen = "IsOpen";// int
		public static readonly String PlayTimes = "PlayTimes";// int
		public static readonly String PlayerCount = "PlayerCount";// int
		public static readonly String StartTime = "StartTime";// int
		public static readonly String TableID = "TableID";// int
		// Record
		public class Bet
		{
			//Class name
			public static readonly String ThisName = "Bet";
			public const int GUID = 0;//object
			public const int Index = 1;//int
			public const int Chip = 2;//int

		}
		public class BetLimit
		{
			//Class name
			public static readonly String ThisName = "BetLimit";
			public const int GUID = 0;//object
			public const int BetIndex = 1;//int
			public const int MaxBet = 2;//int
			public const int MinBet = 3;//int
			public const int MaxPay = 4;//int
			public const int Odds = 5;//int
			public const int MaxTotalBet = 6;//int

		}
		public class ChipIn
		{
			//Class name
			public static readonly String ThisName = "ChipIn";
			public const int GUID = 0;//object
			public const int Odds = 1;//int
			public const int Chip = 2;//int
			public const int IsWin = 3;//int
			public const int PrePay = 4;//int

		}
		public class History
		{
			//Class name
			public static readonly String ThisName = "History";
			public const int GUID = 0;//object
			public const int Result = 1;//int

		}
		public class Poke
		{
			//Class name
			public static readonly String ThisName = "Poke";
			public const int GUID = 0;//object
			public const int Index = 1;//int
			public const int Play = 2;//int

		}

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
		public static readonly String MatchID = "MatchID";// object
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
		public static readonly String MaxGroup = "MaxGroup";// int
		public static readonly String MaxGroupPlayers = "MaxGroupPlayers";// int
		public static readonly String SceneName = "SceneName";// string
		public static readonly String SceneShowName = "SceneShowName";// string
		public static readonly String Type = "Type";// int
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