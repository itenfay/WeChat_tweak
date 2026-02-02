//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCVTExternalConfig : NSObject
{
    Optional_509529bd _realtimeFlag;
    Optional_509529bd _openGopFlag;
    Optional_509529bd _maxFrameDelayCountFlag;
    Optional_509529bd _frameDurationFlag;
    Optional_509529bd _dataRateLimitsFlag;
    Optional_509529bd _enableRestartStrategyFlag;
    Optional_509529bd _lowerLimitBitrateHealth;
    Optional_509529bd _upperLimitBitrateHealth;
}

- (id).cxx_construct;
@property Optional_509529bd upperLimitBitrateHealth; // @synthesize upperLimitBitrateHealth=_upperLimitBitrateHealth;
@property Optional_509529bd lowerLimitBitrateHealth; // @synthesize lowerLimitBitrateHealth=_lowerLimitBitrateHealth;
@property Optional_509529bd enableRestartStrategyFlag; // @synthesize enableRestartStrategyFlag=_enableRestartStrategyFlag;
@property Optional_509529bd dataRateLimitsFlag; // @synthesize dataRateLimitsFlag=_dataRateLimitsFlag;
@property Optional_509529bd frameDurationFlag; // @synthesize frameDurationFlag=_frameDurationFlag;
@property Optional_509529bd maxFrameDelayCountFlag; // @synthesize maxFrameDelayCountFlag=_maxFrameDelayCountFlag;
@property Optional_509529bd openGopFlag; // @synthesize openGopFlag=_openGopFlag;
@property Optional_509529bd realtimeFlag; // @synthesize realtimeFlag=_realtimeFlag;

@end

