//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveMagicRewardResourceCheckCallbackObj : NSObject
{
    CDUnknownBlockType _callback;
    double _maxWaitTime;
    CDUnknownBlockType _timeOverLimitBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType timeOverLimitBlock; // @synthesize timeOverLimitBlock=_timeOverLimitBlock;
@property(nonatomic) double maxWaitTime; // @synthesize maxWaitTime=_maxWaitTime;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)timerOverLimit;
- (void)invokeTimeOverLimitAutoCheckIfNeed;

@end

