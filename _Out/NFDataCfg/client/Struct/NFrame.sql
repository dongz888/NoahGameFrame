################################################################################
CREATE TABLE IF NOT EXISTS GM  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `GM` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
################################################################################
CREATE TABLE IF NOT EXISTS GameTable  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `GameTable` ADD `GameID` bigint(11) DEFAULT '0' COMMENT '游戏id'; 
ALTER TABLE `GameTable` ADD `GameName` text  COMMENT '游戏名'; 
ALTER TABLE `GameTable` ADD `IsOpen` bigint(11) DEFAULT '0' COMMENT '是否开机'; 
ALTER TABLE `GameTable` ADD `TableID` bigint(11) DEFAULT '0' COMMENT '牌桌号'; 
ALTER TABLE `GameTable` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
CREATE TABLE IF NOT EXISTS GameTable_BetLimit  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `GameTable_BetLimit` ADD `GameTableID` text  COMMENT ''; 
ALTER TABLE `GameTable_BetLimit` ADD `Row` INT DEFAULT '0' COMMENT ''; 
ALTER TABLE `GameTable_BetLimit` ADD `BetIndex` bigint(11) DEFAULT '0' COMMENT ''; 
ALTER TABLE `GameTable_BetLimit` ADD `GUID` varchar(64) COLLATE utf8mb4_unicode_ci DEFAULT '' COMMENT ''; 
ALTER TABLE `GameTable_BetLimit` ADD `MaxBet` bigint(11) DEFAULT '0' COMMENT ''; 
ALTER TABLE `GameTable_BetLimit` ADD `MaxPay` bigint(11) DEFAULT '0' COMMENT ''; 
ALTER TABLE `GameTable_BetLimit` ADD `MaxTotalBet` bigint(11) DEFAULT '0' COMMENT ''; 
ALTER TABLE `GameTable_BetLimit` ADD `MinBet` bigint(11) DEFAULT '0' COMMENT ''; 
ALTER TABLE `GameTable_BetLimit` ADD `Odds` bigint(11) DEFAULT '0' COMMENT ''; 
ALTER TABLE `GameTable_BetLimit` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
################################################################################
CREATE TABLE IF NOT EXISTS Group  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `Group` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
################################################################################
CREATE TABLE IF NOT EXISTS IObject  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `IObject` ADD `ConfigID` text  COMMENT ''; 
ALTER TABLE `IObject` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
################################################################################
CREATE TABLE IF NOT EXISTS Language  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `Language` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
################################################################################
CREATE TABLE IF NOT EXISTS NoSqlServer  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `NoSqlServer` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
################################################################################
CREATE TABLE IF NOT EXISTS Player  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `Player` ADD `Account` text  COMMENT '玩家的帐号'; 
ALTER TABLE `Player` ADD `ConnectKey` text  COMMENT '玩家连接服务器的KEY'; 
ALTER TABLE `Player` ADD `FirstTarget` varchar(64) COLLATE utf8mb4_unicode_ci DEFAULT '' COMMENT '首要目标'; 
ALTER TABLE `Player` ADD `Gold` bigint(11) DEFAULT '0' COMMENT '玩家游戏金币'; 
ALTER TABLE `Player` ADD `Head` text  COMMENT 'headicon--guild'; 
ALTER TABLE `Player` ADD `HomeSceneID` bigint(11) DEFAULT '0' COMMENT '玩家下线的时候需要保存上次在线的场景'; 
ALTER TABLE `Player` ADD `LastOfflineTime` varchar(64) COLLATE utf8mb4_unicode_ci DEFAULT '' COMMENT '上次下线时间'; 
ALTER TABLE `Player` ADD `Name` text  COMMENT '角色名'; 
ALTER TABLE `Player` ADD `OnlineCount` bigint(11) DEFAULT '0' COMMENT '上线次数'; 
ALTER TABLE `Player` ADD `OnlineTime` varchar(64) COLLATE utf8mb4_unicode_ci DEFAULT '' COMMENT '本次上线时间'; 
ALTER TABLE `Player` ADD `TotalLineTime` varchar(64) COLLATE utf8mb4_unicode_ci DEFAULT '' COMMENT '今日在线时长{截至至本次上线时间}'; 
ALTER TABLE `Player` ADD `TotalTime` bigint(11) DEFAULT '0' COMMENT '在线时间'; 
ALTER TABLE `Player` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
CREATE TABLE IF NOT EXISTS Player_MyBet  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `Player_MyBet` ADD `PlayerID` text  COMMENT ''; 
ALTER TABLE `Player_MyBet` ADD `Row` INT DEFAULT '0' COMMENT ''; 
ALTER TABLE `Player_MyBet` ADD `Chip` bigint(11) DEFAULT '0' COMMENT ''; 
ALTER TABLE `Player_MyBet` ADD `GUID` varchar(64) COLLATE utf8mb4_unicode_ci DEFAULT '' COMMENT ''; 
ALTER TABLE `Player_MyBet` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
################################################################################
CREATE TABLE IF NOT EXISTS Scene  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `Scene` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
################################################################################
CREATE TABLE IF NOT EXISTS Security  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `Security` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
################################################################################
CREATE TABLE IF NOT EXISTS Server  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `Server` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
################################################################################
CREATE TABLE IF NOT EXISTS SqlServer  ( `ID` varchar(128) NOT NULL, PRIMARY KEY (`ID`) ) ENGINE=InnoDB DEFAULT CHARSET=utf8; 
ALTER TABLE `SqlServer` ADD `CreateTime` datetime NULL DEFAULT CURRENT_TIMESTAMP COMMENT '创建时间' ; 
