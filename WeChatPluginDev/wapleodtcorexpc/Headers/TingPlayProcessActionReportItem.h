//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface TingPlayProcessActionReportItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int action; // @dynamic action;
@property(nonatomic) unsigned int audioDuration; // @dynamic audioDuration;
@property(retain, nonatomic) NSString *audioName; // @dynamic audioName;
@property(retain, nonatomic) NSString *audioUrl; // @dynamic audioUrl;
@property(nonatomic) unsigned int clientTimestampMs; // @dynamic clientTimestampMs;
@property(nonatomic) unsigned int exptIdentification; // @dynamic exptIdentification;
@property(nonatomic) unsigned int hasPlayEnd; // @dynamic hasPlayEnd;
@property(nonatomic) unsigned int hasPlayError; // @dynamic hasPlayError;
@property(nonatomic) unsigned int hasPlayStart; // @dynamic hasPlayStart;
@property(nonatomic) unsigned int initNetworkType; // @dynamic initNetworkType;
@property(nonatomic) _Bool isEnablePreloadNext; // @dynamic isEnablePreloadNext;
@property(nonatomic) unsigned int isHitPreloadNext; // @dynamic isHitPreloadNext;
@property(nonatomic) unsigned int isPaused; // @dynamic isPaused;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) unsigned int listenType; // @dynamic listenType;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) unsigned int operatePosition; // @dynamic operatePosition;
@property(retain, nonatomic) NSString *playSessionId; // @dynamic playSessionId;
@property(nonatomic) unsigned int playTaskstopReason; // @dynamic playTaskstopReason;
@property(retain, nonatomic) NSString *playerId; // @dynamic playerId;
@property(nonatomic) unsigned int playerKernelType; // @dynamic playerKernelType;
@property(nonatomic) unsigned int playerStartTimeCost; // @dynamic playerStartTimeCost;
@property(nonatomic) unsigned int playerStopReason; // @dynamic playerStopReason;
@property(nonatomic) unsigned int qualityType; // @dynamic qualityType;
@property(nonatomic) unsigned int startScene; // @dynamic startScene;
@property(nonatomic) unsigned int stuckTimes; // @dynamic stuckTimes;
@property(nonatomic) unsigned int subAction; // @dynamic subAction;
@property(nonatomic) unsigned int timeFlag; // @dynamic timeFlag;

@end

