// -------------------------------------------------------------------------
//    @FileName         :    NFProtocolDefine.hpp
//    @Author           :    NFrame Studio
//    @Module           :    NFProtocolDefine
// -------------------------------------------------------------------------

#ifndef NF_PR_NAME_HPP
#define NF_PR_NAME_HPP

#include <string>
namespace NFrame
{
	class GM
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "GM"; return x; };		// IObject
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Property
		static const std::string& Level(){ static std::string x = "Level"; return x; };// int
		// Record

	};
	class GameTable
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "GameTable"; return x; };		// IObject
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Property
		static const std::string& Amount(){ static std::string x = "Amount"; return x; };// int
		static const std::string& BetMax(){ static std::string x = "BetMax"; return x; };// int
		static const std::string& BetMin(){ static std::string x = "BetMin"; return x; };// int
		static const std::string& BetTime(){ static std::string x = "BetTime"; return x; };// int
		static const std::string& CanBet(){ static std::string x = "CanBet"; return x; };// int
		static const std::string& EndTime(){ static std::string x = "EndTime"; return x; };// int
		static const std::string& GameID(){ static std::string x = "GameID"; return x; };// int
		static const std::string& GameName(){ static std::string x = "GameName"; return x; };// string
		static const std::string& GameRound(){ static std::string x = "GameRound"; return x; };// int
		static const std::string& GameState(){ static std::string x = "GameState"; return x; };// int
		static const std::string& IsOpen(){ static std::string x = "IsOpen"; return x; };// int
		static const std::string& PlayTimes(){ static std::string x = "PlayTimes"; return x; };// int
		static const std::string& PlayerCount(){ static std::string x = "PlayerCount"; return x; };// int
		static const std::string& StartTime(){ static std::string x = "StartTime"; return x; };// int
		static const std::string& TableID(){ static std::string x = "TableID"; return x; };// int
		// Record
		class Bet
		{
		public:
			//Class name
			static const std::string& ThisName(){ static std::string x = "Bet"; return x; };
			static const int GUID = 0;//object
			static const int Index = 1;//int
			static const int Chip = 2;//int

		};
		class BetLimit
		{
		public:
			//Class name
			static const std::string& ThisName(){ static std::string x = "BetLimit"; return x; };
			static const int GUID = 0;//object
			static const int BetIndex = 1;//int
			static const int MaxBet = 2;//int
			static const int MinBet = 3;//int
			static const int MaxPay = 4;//int
			static const int Odds = 5;//int
			static const int MaxTotalBet = 6;//int

		};
		class ChipIn
		{
		public:
			//Class name
			static const std::string& ThisName(){ static std::string x = "ChipIn"; return x; };
			static const int GUID = 0;//object
			static const int Odds = 1;//int
			static const int Chip = 2;//int
			static const int IsWin = 3;//int
			static const int PrePay = 4;//int

		};
		class History
		{
		public:
			//Class name
			static const std::string& ThisName(){ static std::string x = "History"; return x; };
			static const int GUID = 0;//object
			static const int Result = 1;//int

		};
		class Poke
		{
		public:
			//Class name
			static const std::string& ThisName(){ static std::string x = "Poke"; return x; };
			static const int GUID = 0;//object
			static const int Index = 1;//int
			static const int Play = 2;//int

		};

	};
	class Group
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "Group"; return x; };		// IObject
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Property
		static const std::string& MatchID(){ static std::string x = "MatchID"; return x; };// object
		static const std::string& MatchStar(){ static std::string x = "MatchStar"; return x; };// int
		static const std::string& MatchTeamID(){ static std::string x = "MatchTeamID"; return x; };// object
		// Record
		class MatchMember
		{
		public:
			//Class name
			static const std::string& ThisName(){ static std::string x = "MatchMember"; return x; };
			static const int GUID = 0;//object
			static const int Name = 1;//string
			static const int K = 2;//int
			static const int D = 3;//int
			static const int A = 4;//int

		};

	};
	class IObject
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "IObject"; return x; };		// Property
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Record

	};
	class Language
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "Language"; return x; };		// IObject
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Property
		static const std::string& Chinese(){ static std::string x = "Chinese"; return x; };// string
		static const std::string& English(){ static std::string x = "English"; return x; };// string
		static const std::string& French(){ static std::string x = "French"; return x; };// string
		static const std::string& Spanish(){ static std::string x = "Spanish"; return x; };// string
		// Record

	};
	class NoSqlServer
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "NoSqlServer"; return x; };		// IObject
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Property
		static const std::string& Auth(){ static std::string x = "Auth"; return x; };// string
		static const std::string& IP(){ static std::string x = "IP"; return x; };// string
		static const std::string& Port(){ static std::string x = "Port"; return x; };// int
		static const std::string& ServerID(){ static std::string x = "ServerID"; return x; };// int
		// Record

	};
	class Player
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "Player"; return x; };		// IObject
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Property
		static const std::string& Account(){ static std::string x = "Account"; return x; };// string
		static const std::string& ConnectKey(){ static std::string x = "ConnectKey"; return x; };// string
		static const std::string& FirstTarget(){ static std::string x = "FirstTarget"; return x; };// object
		static const std::string& GameID(){ static std::string x = "GameID"; return x; };// int
		static const std::string& GateID(){ static std::string x = "GateID"; return x; };// int
		static const std::string& Gold(){ static std::string x = "Gold"; return x; };// int
		static const std::string& Head(){ static std::string x = "Head"; return x; };// string
		static const std::string& HomeSceneID(){ static std::string x = "HomeSceneID"; return x; };// int
		static const std::string& LastOfflineTime(){ static std::string x = "LastOfflineTime"; return x; };// object
		static const std::string& Name(){ static std::string x = "Name"; return x; };// string
		static const std::string& OnlineCount(){ static std::string x = "OnlineCount"; return x; };// int
		static const std::string& OnlineTime(){ static std::string x = "OnlineTime"; return x; };// object
		static const std::string& TotalLineTime(){ static std::string x = "TotalLineTime"; return x; };// object
		static const std::string& TotalTime(){ static std::string x = "TotalTime"; return x; };// int
		// Record
		class MyBet
		{
		public:
			//Class name
			static const std::string& ThisName(){ static std::string x = "MyBet"; return x; };
			static const int GUID = 0;//object
			static const int Chip = 1;//int

		};

	};
	class Scene
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "Scene"; return x; };		// IObject
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Property
		static const std::string& MaxGroup(){ static std::string x = "MaxGroup"; return x; };// int
		static const std::string& MaxGroupPlayers(){ static std::string x = "MaxGroupPlayers"; return x; };// int
		static const std::string& SceneName(){ static std::string x = "SceneName"; return x; };// string
		static const std::string& SceneShowName(){ static std::string x = "SceneShowName"; return x; };// string
		static const std::string& Type(){ static std::string x = "Type"; return x; };// int
		// Record

	};
	class Security
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "Security"; return x; };		// IObject
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Property
		static const std::string& SecurityData(){ static std::string x = "SecurityData"; return x; };// string
		// Record

	};
	class Server
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "Server"; return x; };		// IObject
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Property
		static const std::string& Area(){ static std::string x = "Area"; return x; };// int
		static const std::string& Cell(){ static std::string x = "Cell"; return x; };// int
		static const std::string& CpuCount(){ static std::string x = "CpuCount"; return x; };// int
		static const std::string& IP(){ static std::string x = "IP"; return x; };// string
		static const std::string& MaxOnline(){ static std::string x = "MaxOnline"; return x; };// int
		static const std::string& Name(){ static std::string x = "Name"; return x; };// string
		static const std::string& Port(){ static std::string x = "Port"; return x; };// int
		static const std::string& ServerID(){ static std::string x = "ServerID"; return x; };// int
		static const std::string& Type(){ static std::string x = "Type"; return x; };// int
		static const std::string& WSPort(){ static std::string x = "WSPort"; return x; };// int
		static const std::string& WebPort(){ static std::string x = "WebPort"; return x; };// int
		// Record

	};
	class SqlServer
	{
	public:
		//Class name
		static const std::string& ThisName(){ static std::string x = "SqlServer"; return x; };		// IObject
		static const std::string& ClassName(){ static std::string x = "ClassName"; return x; };// string
		static const std::string& ConfigID(){ static std::string x = "ConfigID"; return x; };// string
		static const std::string& GroupID(){ static std::string x = "GroupID"; return x; };// int
		static const std::string& ID(){ static std::string x = "ID"; return x; };// string
		static const std::string& MoveTo(){ static std::string x = "MoveTo"; return x; };// vector3
		static const std::string& Position(){ static std::string x = "Position"; return x; };// vector3
		static const std::string& SceneID(){ static std::string x = "SceneID"; return x; };// int
		// Property
		static const std::string& IP(){ static std::string x = "IP"; return x; };// string
		static const std::string& Port(){ static std::string x = "Port"; return x; };// int
		static const std::string& ServerID(){ static std::string x = "ServerID"; return x; };// int
		static const std::string& SqlIP(){ static std::string x = "SqlIP"; return x; };// string
		static const std::string& SqlName(){ static std::string x = "SqlName"; return x; };// string
		static const std::string& SqlPort(){ static std::string x = "SqlPort"; return x; };// int
		static const std::string& SqlPwd(){ static std::string x = "SqlPwd"; return x; };// string
		static const std::string& SqlUser(){ static std::string x = "SqlUser"; return x; };// string
		// Record

	};

}
#endif