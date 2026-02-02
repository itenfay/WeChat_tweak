//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameJoinTeamSetting, LiveLotterySetting, MicSetting;

@interface LiveAnchorStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GameJoinTeamSetting *gameJoinTeamSetting; // @dynamic gameJoinTeamSetting;
@property(retain, nonatomic) LiveLotterySetting *lotterySetting; // @dynamic lotterySetting;
@property(retain, nonatomic) MicSetting *micSetting; // @dynamic micSetting;
@property(nonatomic) unsigned long long statusFlag; // @dynamic statusFlag;
@property(nonatomic) unsigned long long timeMs; // @dynamic timeMs;
@property(nonatomic) unsigned long long version; // @dynamic version;

@end

