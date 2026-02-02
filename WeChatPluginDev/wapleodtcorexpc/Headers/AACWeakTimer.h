//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMContext;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AACWeakTimer : NSObject
{
    struct {
        unsigned int timerIsInvalidated;
    } _timerFlags;
    MMContext *m_context;
    _Bool _repeats;
    double _tolerance;
    double _timeInterval;
    id _target;
    SEL _selector;
    id _userInfo;
    NSObject<OS_dispatch_queue> *_privateSerialQueue;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5 dispatchQueue:(id)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateSerialQueue; // @synthesize privateSerialQueue=_privateSerialQueue;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)timerFired;
- (void)invalidate;
- (void)fire;
- (void)schedule;
- (void)resetTimerProperties;
@property double tolerance; // @synthesize tolerance=_tolerance;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5 dispatchQueue:(id)arg6;

@end

