//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameLiveJumpInfo_FinderLiveFineGameInfo, GameLiveJumpInfo_FinderLiveWxaGameInfo, NSString;

@interface GameLiveJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GameLiveJumpInfo_FinderLiveFineGameInfo *fineGameInfo; // @dynamic fineGameInfo;
@property(retain, nonatomic) NSString *gameName; // @dynamic gameName;
@property(nonatomic) unsigned int gameType; // @dynamic gameType;
@property(nonatomic) _Bool isShowEntrance; // @dynamic isShowEntrance;
@property(retain, nonatomic) NSString *reportInfo; // @dynamic reportInfo;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;
@property(retain, nonatomic) GameLiveJumpInfo_FinderLiveWxaGameInfo *wxaGameInfo; // @dynamic wxaGameInfo;

@end

