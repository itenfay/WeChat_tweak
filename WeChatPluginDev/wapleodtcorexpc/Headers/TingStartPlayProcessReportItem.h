//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface TingStartPlayProcessReportItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long audioDuration; // @dynamic audioDuration;
@property(retain, nonatomic) NSString *audioName; // @dynamic audioName;
@property(nonatomic) unsigned int categoryStartScene; // @dynamic categoryStartScene;
@property(nonatomic) unsigned int checkSpamCostMills; // @dynamic checkSpamCostMills;
@property(nonatomic) unsigned int exptIdentification; // @dynamic exptIdentification;
@property(nonatomic) unsigned int getLinkCostMills; // @dynamic getLinkCostMills;
@property(nonatomic) unsigned int initNetworkType; // @dynamic initNetworkType;
@property(nonatomic) _Bool isCheckSpamFromCache; // @dynamic isCheckSpamFromCache;
@property(nonatomic) _Bool isEnablePrefetch; // @dynamic isEnablePrefetch;
@property(nonatomic) _Bool isEnablePreloadNext; // @dynamic isEnablePreloadNext;
@property(nonatomic) _Bool isGetLinkFromCache; // @dynamic isGetLinkFromCache;
@property(nonatomic) _Bool isHitPreloadNext; // @dynamic isHitPreloadNext;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) unsigned int listenType; // @dynamic listenType;
@property(nonatomic) unsigned int playCheckCostMills; // @dynamic playCheckCostMills;
@property(retain, nonatomic) NSString *playerId; // @dynamic playerId;
@property(nonatomic) unsigned int playerKernelType; // @dynamic playerKernelType;
@property(nonatomic) unsigned int playerStartCostMills; // @dynamic playerStartCostMills;
@property(nonatomic) unsigned int prepareCostMills; // @dynamic prepareCostMills;
@property(nonatomic) unsigned int qualityType; // @dynamic qualityType;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int totalCostMills; // @dynamic totalCostMills;

@end

