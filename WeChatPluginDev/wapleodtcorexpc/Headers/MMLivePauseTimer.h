//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer;

@interface MMLivePauseTimer : NSObject
{
    long long _accumulatedTime;
    long long _startTime;
    CDUnknownBlockType _progressBlock;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long accumulatedTime; // @synthesize accumulatedTime=_accumulatedTime;
- (void)notifyProgress;
- (void)adjustAccumulatedTimeIfNeeded:(long long)arg1 adjustedMin:(long long)arg2 adjustedMax:(long long)arg3;
- (void)adjustAccumulatedTimeIfNeeded:(long long)arg1;
- (void)adjustAccumulatedTime:(long long)arg1;
- (void)_adjustAccumulatedTimeForResume;
- (void)_adjustStartTimeWithAccumulatedTime:(long long)arg1;
- (void)countup;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (id)initWithAccumulatedTime:(long long)arg1;
- (id)init;

@end

