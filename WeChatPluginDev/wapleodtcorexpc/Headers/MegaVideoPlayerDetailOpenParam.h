//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MegaVideoChannel, MegaVideoFeed, MegaVideoFeedLite, MegaVideoPlayerDetailAnimationParams, NSString;

@interface MegaVideoPlayerDetailOpenParam : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool autoPlay; // @dynamic autoPlay;
@property(retain, nonatomic) MegaVideoChannel *channel; // @dynamic channel;
@property(nonatomic) int channelPlayerDetailEnterType; // @dynamic channelPlayerDetailEnterType;
@property(nonatomic) unsigned int commentScene; // @dynamic commentScene;
@property(retain, nonatomic) MegaVideoPlayerDetailAnimationParams *enterAnimationParams; // @dynamic enterAnimationParams;
@property(nonatomic) _Bool enterFromMinimize; // @dynamic enterFromMinimize;
@property(retain, nonatomic) MegaVideoFeed *feed; // @dynamic feed;
@property(retain, nonatomic) MegaVideoFeedLite *feedLite; // @dynamic feedLite;
@property(nonatomic) _Bool forceLandscape; // @dynamic forceLandscape;
@property(retain, nonatomic) NSString *listModelTicket; // @dynamic listModelTicket;
@property(nonatomic) int listType; // @dynamic listType;
@property(retain, nonatomic) NSString *playSessionId; // @dynamic playSessionId;
@property(nonatomic) long long playerId; // @dynamic playerId;
@property(nonatomic) int playerLevel; // @dynamic playerLevel;
@property(nonatomic) _Bool showEnterAnimation; // @dynamic showEnterAnimation;
@property(nonatomic) int startPlayPosition; // @dynamic startPlayPosition;

@end

