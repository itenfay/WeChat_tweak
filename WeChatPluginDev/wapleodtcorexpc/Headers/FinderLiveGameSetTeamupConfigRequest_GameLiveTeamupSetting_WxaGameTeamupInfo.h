//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderGameLiveWeappJumpInfo, NSString;

@interface FinderLiveGameSetTeamupConfigRequest_GameLiveTeamupSetting_WxaGameTeamupInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *gameDesc; // @dynamic gameDesc;
@property(retain, nonatomic) NSString *memberDesc; // @dynamic memberDesc;
@property(retain, nonatomic) NSString *teamupDesc; // @dynamic teamupDesc;
@property(retain, nonatomic) NSString *teamupExtraData; // @dynamic teamupExtraData;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) FinderGameLiveWeappJumpInfo *wxaJumpInfo; // @dynamic wxaJumpInfo;

@end

