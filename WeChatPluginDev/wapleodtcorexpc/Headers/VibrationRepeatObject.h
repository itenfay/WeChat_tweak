//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSString, NSTimer, NotMainQueueTimer;

@interface VibrationRepeatObject : NSObject
{
    _Bool _m_hasHoldBackgroundTask;
    int _m_outAppVibrationCount;
    NSTimer *_m_inAppTimer;
    NotMainQueueTimer *_m_outAppTimer;
    NSLock *_m_backgroundTaskLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *m_backgroundTaskLock; // @synthesize m_backgroundTaskLock=_m_backgroundTaskLock;
@property(nonatomic) _Bool m_hasHoldBackgroundTask; // @synthesize m_hasHoldBackgroundTask=_m_hasHoldBackgroundTask;
@property(nonatomic) int m_outAppVibrationCount; // @synthesize m_outAppVibrationCount=_m_outAppVibrationCount;
@property(retain, nonatomic) NotMainQueueTimer *m_outAppTimer; // @synthesize m_outAppTimer=_m_outAppTimer;
@property(retain, nonatomic) NSTimer *m_inAppTimer; // @synthesize m_inAppTimer=_m_inAppTimer;
- (void)releaseBackgroundTask;
- (void)holdBackgroundTask;
- (void)onNotMainQueueTimerCallback;
- (void)callOutAppVibration;
- (void)callInAppVibration;
- (void)dealloc;
- (void)stopOutAppVibration;
- (void)stopInAppVibration;
- (void)repeatOutAppVibration;
- (void)repeatInAppVibration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

