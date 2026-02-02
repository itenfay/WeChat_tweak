//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AdTimerHelper;

@interface AdExposureTimerHelper : NSObject
{
    _Bool _isStart;
    AdTimerHelper *_timerHelper;
    unsigned long long _totalExposureTime;
    unsigned long long _disappearTime;
    unsigned long long _disappearDuration;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long disappearDuration; // @synthesize disappearDuration=_disappearDuration;
@property(nonatomic) unsigned long long disappearTime; // @synthesize disappearTime=_disappearTime;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(nonatomic) unsigned long long totalExposureTime; // @synthesize totalExposureTime=_totalExposureTime;
@property(retain, nonatomic) AdTimerHelper *timerHelper; // @synthesize timerHelper=_timerHelper;
- (void)reset;
- (unsigned long long)fetchExposureTime;
- (void)endDisappear;
- (void)beginDisappear;
- (void)stop;
- (void)start;
- (id)init;

@end

