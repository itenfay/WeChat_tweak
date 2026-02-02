//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTask, MMLiveTaskId, MMLiveUIPerfMonitorLogic, WCLoopMetrics;

@interface MMLiveMetricsBusinessMonitorLogic : NSObject
{
    MMLiveUIPerfMonitorLogic *_uiPerfMonitorLogic;
    MMLiveTaskId *_taskId;
    unsigned long long _metricsTriggerCnt;
    double _lastCollectTime;
    WCLoopMetrics *_lastCaptureEffectMetrics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCLoopMetrics *lastCaptureEffectMetrics; // @synthesize lastCaptureEffectMetrics=_lastCaptureEffectMetrics;
@property(nonatomic) double lastCollectTime; // @synthesize lastCollectTime=_lastCollectTime;
@property(nonatomic) unsigned long long metricsTriggerCnt; // @synthesize metricsTriggerCnt=_metricsTriggerCnt;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveUIPerfMonitorLogic *uiPerfMonitorLogic; // @synthesize uiPerfMonitorLogic=_uiPerfMonitorLogic;
@property(readonly, nonatomic) MMLiveTask *liveTask;
@property(readonly, nonatomic) unsigned long long scheduleCollectIntervalCnt;
- (void)collectCaptureAndEffectPerfStatisticResult:(id)arg1 inPeriod:(double)arg2;
- (void)updateCaptureAndEffectMetrics:(id)arg1;
- (void)collectUIPerfStatisticResult:(id)arg1 inPeriod:(double)arg2;
- (void)createUIPerfMonitorLogic;
- (void)scheduleCollectMetricsBusiness;
- (_Bool)checkTimeToScheduleCollectMetricsBusiness;
- (void)onLiveCaptureAndEffectMetricsUpdate:(id)arg1;
- (void)onLiveMetricsMonitorScheduleCollect;
- (void)initDefaultDatas;
- (id)initWithTaskId:(id)arg1;

@end

