//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderLiveDiscoverPreloadConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) float clientPredictScoreThreshold; // @dynamic clientPredictScoreThreshold;
@property(nonatomic) unsigned int noReddotPreloadRetryInterval; // @dynamic noReddotPreloadRetryInterval;
@property(nonatomic) unsigned int noReddotPreloadSwitch; // @dynamic noReddotPreloadSwitch;
@property(retain, nonatomic) NSData *noReddotRequestPreloadBuff; // @dynamic noReddotRequestPreloadBuff;
@property(nonatomic) unsigned long long preloadConfigEffectiveUnixTime; // @dynamic preloadConfigEffectiveUnixTime;
@property(nonatomic) unsigned long long preloadControlFlag; // @dynamic preloadControlFlag;
@property(nonatomic) unsigned int preloadFeedEffectiveTime; // @dynamic preloadFeedEffectiveTime;
@property(nonatomic) unsigned int preloadFreqLimitRetryDelayTime; // @dynamic preloadFreqLimitRetryDelayTime;
@property(nonatomic) _Bool refreshPreloadConfig; // @dynamic refreshPreloadConfig;
@property(retain, nonatomic) NSData *requestPreloadBuff; // @dynamic requestPreloadBuff;

@end

