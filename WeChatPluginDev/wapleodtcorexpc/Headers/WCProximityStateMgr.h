//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMotionManager, NSHashTable, NSRecursiveLock, NSString;

@interface WCProximityStateMgr
{
    _Bool _isInProximityState;
    _Bool _startProximityState;
    _Bool _isUnReliableStartState;
    _Bool _isProximityStateRecogning;
    _Bool _shouldFixScreenOff;
    _Bool _shouldChangeBrightness;
    float _gFactor;
    int _touchCountWhenProximityState;
    NSHashTable *_objectsTable;
    CMMotionManager *_motionManager;
    NSRecursiveLock *_lock;
    long long _proximityStateErrorCountExpt;
}

- (void).cxx_destruct;
@property(nonatomic) long long proximityStateErrorCountExpt; // @synthesize proximityStateErrorCountExpt=_proximityStateErrorCountExpt;
@property(nonatomic) int touchCountWhenProximityState; // @synthesize touchCountWhenProximityState=_touchCountWhenProximityState;
@property(nonatomic) _Bool shouldChangeBrightness; // @synthesize shouldChangeBrightness=_shouldChangeBrightness;
@property(nonatomic) _Bool shouldFixScreenOff; // @synthesize shouldFixScreenOff=_shouldFixScreenOff;
@property(nonatomic) _Bool isProximityStateRecogning; // @synthesize isProximityStateRecogning=_isProximityStateRecogning;
@property(nonatomic) _Bool isUnReliableStartState; // @synthesize isUnReliableStartState=_isUnReliableStartState;
@property(nonatomic) _Bool startProximityState; // @synthesize startProximityState=_startProximityState;
@property(nonatomic) _Bool isInProximityState; // @synthesize isInProximityState=_isInProximityState;
@property(nonatomic) float gFactor; // @synthesize gFactor=_gFactor;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) NSHashTable *objectsTable; // @synthesize objectsTable=_objectsTable;
- (void)didEnterBackground;
- (void)onReceivedTouchEvent;
- (void)onProximityStateChange:(id)arg1;
- (void)notifyAwayFromEar;
- (void)notifyCloseEar;
- (void)stopObserveProximityChangeNotify;
- (void)startObserveProximityChangeNotify;
- (void)stopProximityMonitoring;
- (void)startProximityMonitoring;
- (void)closeToEarRecognByX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (void)stopRecognizering;
- (void)startRecognizering;
- (void)checkDelegateTable;
- (_Bool)IsProximityStateRecogning;
- (_Bool)IsInProximityState;
- (void)StopAllMonitoringProximityWithScene:(int)arg1;
- (void)StopAllMonitoringProximity;
- (void)StopProximityMonitorWithObject:(id)arg1;
- (void)StartProximityMonitorWithObject:(id)arg1 scene:(int)arg2;
- (void)StartProximityMonitorWithObject:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

