//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveTask, MMMetricsInfo, MMPowerABTest, NSString;

@interface MMBatteryPowerMonitor
{
    _Bool _isMonitoring;
    _Bool _isLive;
    _Bool _isFinder;
    _Bool _batteryIsCharging;
    _Bool _callerMonitoring;
    float _currentBatteryLevel;
    float _lastBatteryLevel;
    MMLiveTask *_liveTask;
    MMPowerABTest *_abTest;
    long long _lastThermalState;
    unsigned long long _type;
    unsigned long long _scene;
    double _lastBatteryChangeTime;
    double _lastThermalStateChangedTime;
    unsigned long long _liveRenderViewType;
    unsigned long long _liveRenderViewFrameCnt;
    double _liveRenderViewTotalFrameTime;
    MMMetricsInfo *_lastReportedMetricsInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMetricsInfo *lastReportedMetricsInfo; // @synthesize lastReportedMetricsInfo=_lastReportedMetricsInfo;
@property(nonatomic) double liveRenderViewTotalFrameTime; // @synthesize liveRenderViewTotalFrameTime=_liveRenderViewTotalFrameTime;
@property(nonatomic) unsigned long long liveRenderViewFrameCnt; // @synthesize liveRenderViewFrameCnt=_liveRenderViewFrameCnt;
@property(nonatomic) unsigned long long liveRenderViewType; // @synthesize liveRenderViewType=_liveRenderViewType;
@property(nonatomic) double lastThermalStateChangedTime; // @synthesize lastThermalStateChangedTime=_lastThermalStateChangedTime;
@property(nonatomic) double lastBatteryChangeTime; // @synthesize lastBatteryChangeTime=_lastBatteryChangeTime;
@property(nonatomic) float lastBatteryLevel; // @synthesize lastBatteryLevel=_lastBatteryLevel;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool callerMonitoring; // @synthesize callerMonitoring=_callerMonitoring;
@property(nonatomic) long long lastThermalState; // @synthesize lastThermalState=_lastThermalState;
@property(nonatomic) _Bool batteryIsCharging; // @synthesize batteryIsCharging=_batteryIsCharging;
@property(nonatomic) float currentBatteryLevel; // @synthesize currentBatteryLevel=_currentBatteryLevel;
@property(nonatomic) _Bool isFinder; // @synthesize isFinder=_isFinder;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) MMPowerABTest *abTest; // @synthesize abTest=_abTest;
@property(nonatomic) __weak MMLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(nonatomic) _Bool isMonitoring; // @synthesize isMonitoring=_isMonitoring;
- (void)liveDataItemUpdated:(id)arg1;
- (void)reportFinder:(id)arg1;
- (_Bool)isNewDevice;
- (void)statisticsRenderView;
- (_Bool)rejectHighCPUTaskScene:(unsigned long long)arg1;
- (void)liveTypeChanged:(id)arg1;
- (void)finderTypeChanged:(id)arg1;
- (unsigned long long)typeWithLastThermalState:(long long)arg1 currentThermalState:(long long)arg2;
- (void)startReportWithMetricsInfo:(id)arg1;
- (void)reportMetricsDataForThermalStateChangedIfNeed:(unsigned long long)arg1 lastDuration:(double)arg2;
- (void)startReportForThermalStateChanged:(unsigned long long)arg1;
- (void)thermalStateDidChange;
- (void)stopReportThermalStateDuration;
- (void)startThermalStateDurationReport;
- (float)estimateVoltage;
- (float)devicemAh;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)stopPowerReport;
- (void)batteryStateDidChange;
- (id)logWithReport:(id)arg1;
- (_Bool)isKTVListener;
- (_Bool)isKTVSinger;
- (_Bool)isRecentUseFaceDecode;
- (_Bool)isRecentUseFaceDetect;
- (unsigned int)extraSceneInfo;
- (void)onLiveTask:(id)arg1 statistics:(id)arg2;
- (void)attachSceneInfo:(id)arg1;
- (void)batteryLevelDidChange;
- (void)startPowerReport;
- (void)stopALLMonitor;
- (void)stopAllMonitorScene:(unsigned long long)arg1;
- (void)startMonitorType:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (void)reportMetricsInfo:(id)arg1;
- (void)metricsMonitor:(id)arg1 didCollectMetricsInfo:(id)arg2;
@property(readonly, nonatomic) double reportTimeInterval;
- (void)onExptItemListChange;
- (void)onServiceClearData;
- (void)setup;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

