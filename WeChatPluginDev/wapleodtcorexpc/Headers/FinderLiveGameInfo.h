//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameLiveJoinTeamSettingInfo, NSString;

@interface FinderLiveGameInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *gameAppid; // @dynamic gameAppid;
@property(retain, nonatomic) NSString *gameDownloadUrl; // @dynamic gameDownloadUrl;
@property(retain, nonatomic) NSString *gameName; // @dynamic gameName;
@property(retain, nonatomic) GameLiveJoinTeamSettingInfo *joinTeamUpSettingInfo; // @dynamic joinTeamUpSettingInfo;
@property(nonatomic) unsigned int lastJoinTeamUpSetting; // @dynamic lastJoinTeamUpSetting;
@property(retain, nonatomic) NSString *packageName; // @dynamic packageName;
@property(nonatomic) unsigned int showTeamupButton; // @dynamic showTeamupButton;

@end

