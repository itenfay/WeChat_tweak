//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, MMVoidCallback, NSString;

@interface KindaTimerService : NSObject
{
    _Bool _needThrottle;
    double _m_interval;
    MMVoidCallback *_m_timeCheckCallback;
    MMTimer *_m_timer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needThrottle; // @synthesize needThrottle=_needThrottle;
@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer=_m_timer;
@property(retain, nonatomic) MMVoidCallback *m_timeCheckCallback; // @synthesize m_timeCheckCallback=_m_timeCheckCallback;
@property(nonatomic) double m_interval; // @synthesize m_interval=_m_interval;
- (void)dispatchAsyncInMainThreadImpl:(id)arg1;
- (void)dispatchAsyncInBgThreadImpl:(id)arg1;
- (double)now;
- (void)dispatchAfterImpl:(float)arg1 handle:(id)arg2;
- (void)throttleImpl:(float)arg1 handler:(id)arg2;
- (void)timeCheckCallback;
- (void)stopTimeCheck;
- (void)startTimeCheck;
- (void)initIntervalAndCheckedCallbackImpl:(float)arg1 timeCheckCallback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

