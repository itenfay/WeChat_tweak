//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSTimer;

@interface QMapRepeatTimer : NSObject
{
    _Bool _addedInToRunloop;
    unsigned long long _repeatCount;
    unsigned long long _firedCount;
    NSTimer *_timer;
    double _timeInterval;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) _Bool addedInToRunloop; // @synthesize addedInToRunloop=_addedInToRunloop;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long firedCount; // @synthesize firedCount=_firedCount;
@property(nonatomic) unsigned long long repeatCount; // @synthesize repeatCount=_repeatCount;
- (id)initWithTimeInterval:(double)arg1 repeatCount:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)setupTimer;
- (void)run;
- (void)runImmediately;
- (void)invalidate;
- (void)startTimerImmediately:(_Bool)arg1;
- (void)handleTimerFire;
- (_Bool)isOutOfMaxRetry;

@end

