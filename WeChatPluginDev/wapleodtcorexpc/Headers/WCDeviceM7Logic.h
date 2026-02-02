//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMPedometer, HKHealthStore, HKObserverQuery, NSMutableArray, WCDeviceStepObject;
@protocol WCDeviceM7LogicDelegate;

@interface WCDeviceM7Logic
{
    id <WCDeviceM7LogicDelegate> _delegate;
    _Bool m_bStepGetting;
    _Bool m_bHadGetHKStep;
    _Bool m_bHadGetM7Step;
    WCDeviceStepObject *m_oStepObject;
    _Bool m_bHadObserverQuery;
    _Bool m_bForceUploadSteps;
    int m_lastGetStepTime;
    _Bool m_bHKAuthorized;
    _Bool m_bDataChanged;
    NSMutableArray *m_aryWhiteList;
    double _reportRandom;
    CMPedometer *_cmPedometer;
    HKHealthStore *_healthStore;
    HKObserverQuery *_observerQuery;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKObserverQuery *observerQuery; // @synthesize observerQuery=_observerQuery;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) CMPedometer *cmPedometer; // @synthesize cmPedometer=_cmPedometer;
@property(nonatomic) double reportRandom; // @synthesize reportRandom=_reportRandom;
@property(nonatomic) _Bool m_bDataChanged; // @synthesize m_bDataChanged;
@property(retain, nonatomic) NSMutableArray *m_aryWhiteList; // @synthesize m_aryWhiteList;
@property(nonatomic) __weak id <WCDeviceM7LogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkCallDelegate;
- (void)setHealthKitAuthorized:(_Bool)arg1;
- (_Bool)getHKAuthorizationStatus;
- (int)getCurrM7StepCount;
- (void)getStepCount:(id)arg1;
- (_Bool)isInWhiteList:(id)arg1;
- (id)hkSource2ClientSource:(id)arg1;
- (int)getStepFromHealthKit;
- (void)tryDoObserverStepQuery;
- (void)updateHealthStoreData;
- (_Bool)canUploadM7StepCount;
- (_Bool)getM7OrHealthKitStepCount:(_Bool)arg1;
- (_Bool)p_canTryUploadStepCount;
- (void)retryUploadYesterdayStep;
- (void)uploadYesterdayStep;
- (void)updateSampleSourceList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

