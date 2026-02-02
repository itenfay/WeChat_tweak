//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureDevice, MMAppRunningInfo, MMAudioMonitor, MMAudioMonitorConfig, MMCPUTimeProfiler, MMCPUTimeProfilerConfig, MMGPUMonitor, MMGPUMonitorConfig, MMLocationMonitor, MMLocationMonitorConfig, MMMetricsDB, MMMetricsInfo, MMMetricsMonitorConfig, MMNetworkMonitor, MMNetworkMonitorConfig, MMStackReportConnection, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, NSThread;

@interface MMMetricsMonitor
{
    MMAppRunningInfo *m_runningInfo;
    unsigned int m_checkCountMax;
    unsigned int m_checkCountDefault;
    unsigned int m_monitorTicks;
    NSMutableArray *m_metricsInfos;
    NSMutableArray *m_metricsInfosToInsert;
    NSArray *m_threadInfos;
    NSMutableArray *m_threadInfosToInsert;
    NSMutableArray *m_businessDatasToInsert;
    MMMetricsInfo *m_lastMetricsInfo;
    MMMetricsInfo *m_lastRunMetricsInfo;
    MMMetricsInfo *m_firstMetricsInfoForMemoryRising;
    MMMetricsInfo *m_lastMetricsInfoForMemoryRising;
    unsigned long long m_memoryPressureFlag;
    unsigned long long m_memoryPressureFlagForReport;
    unsigned long long m_userType;
    unsigned long long m_maxUserType;
    NSDictionary *m_baseInfo;
    NSMutableDictionary *m_customInfo;
    NSMutableDictionary *m_customInfoForUser;
    NSRecursiveLock *m_dataLock;
    NSRecursiveLock *m_dbLock;
    AVCaptureDevice *m_backCaptureDevice;
    long long m_applicationState;
    MMCPUTimeProfiler *m_cpuTimeProfiler;
    MMGPUMonitor *m_gpuMonitor;
    MMLocationMonitor *m_locationMonitor;
    MMNetworkMonitor *m_networkMonitor;
    MMAudioMonitor *m_audioMonitor;
    NSThread *m_workingThread;
    NSString *m_metricsDataPath;
    NSString *m_configPath;
    MMMetricsDB *m_metricsDB;
    MMMetricsMonitorConfig *m_config;
    MMCPUTimeProfilerConfig *m_cpuTimeProfilerConfig;
    MMGPUMonitorConfig *m_gpuMonitorConfig;
    MMLocationMonitorConfig *m_locationMonitorConfig;
    MMNetworkMonitorConfig *m_networkMonitorConfig;
    MMAudioMonitorConfig *m_audioMonitorConfig;
    _Bool m_shouldSaveDyldImage;
    _Bool m_isUploadingFullData;
    MMStackReportConnection *m_reportConnection;
    struct MMMetricsUploadFileObserver *m_uploadFileObserver;
    struct shared_ptr<MMMetricsUploadFileObserver2> m_uploadFileObserver2;
    NSString *_scene;
    NSString *_weAppScene;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) NSString *weAppScene; // @synthesize weAppScene=_weAppScene;
@property(retain) NSString *scene; // @synthesize scene=_scene;
- (void)onStackReportCompleted:(_Bool)arg1;
- (id)imageInfosToSave;
- (void)onDyldImageChanged;
- (void)setupStrategyFromXLab;
- (void)onExptItemListChange;
- (void)onAuthOK;
- (void)saveMonitorConfig;
- (void)loadMonitorConfig;
- (void)deviceMayResignOverheating:(id)arg1;
- (void)deviceMayBecomeOverheating:(id)arg1;
- (id)getMetricsInfosFrom:(double)arg1 to:(double)arg2;
- (unsigned int)_checkCountByDuration:(unsigned int)arg1;
- (void)_updateMetricsInfoForMemoryRising:(id)arg1;
- (id)collectMetricsInfoWithNotify:(_Bool)arg1 customizeBlock:(CDUnknownBlockType)arg2;
- (id)genMetricsInfoInternal:(_Bool)arg1;
- (id)genMetricsInfo;
- (id)lastRunMetricsInfo;
- (id)lastMetricsInfo;
- (id)currUsrName;
- (void)uploadCPUDataFrom:(double)arg1 to:(double)arg2 eventTag:(unsigned long long)arg3 eventSubTag:(unsigned long long)arg4 customInfo:(id)arg5;
- (void)uploadMetricsDataFrom:(double)arg1 to:(double)arg2 eventTag:(unsigned long long)arg3 eventSubTag:(unsigned long long)arg4 customInfo:(id)arg5;
- (void)onReportFullDataFinished;
- (void)reportFullDataFrom:(double)arg1 to:(double)arg2;
- (void)uploadMetricsDBFrom:(double)arg1 to:(double)arg2;
- (id)reportHeadDictForCommonEvent:(unsigned long long)arg1 metricsInfo:(id)arg2 customInfo:(id)arg3;
- (id)reportHeadDictForCriticalEvent:(id)arg1;
- (id)customInfoForUser:(unsigned long long)arg1;
- (void)reportEventData;
- (void)reportKVData;
- (void)saveData;
- (void)collectData;
- (void)metricsMonitorThread;
- (void)setEventConfig:(id)arg1 forUserType:(unsigned long long)arg2;
- (id)defaultEventConfig;
- (id)getCustomInfoForUserType:(unsigned long long)arg1;
- (void)setCustomInfo:(id)arg1 forUserType:(unsigned long long)arg2;
- (void)setCustomInfoWithKey:(id)arg1 value:(id)arg2;
- (void)removeUserType:(unsigned long long)arg1;
- (void)addUserType:(unsigned long long)arg1;
- (_Bool)autoStackReport;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)addBusinessData:(unsigned long long)arg1 content:(id)arg2;
- (unsigned long long)cleanMetricData;
- (unsigned long long)preGetMetricDataSize;
- (void)clearDataDelay;
- (void)clearData;
- (void)onServiceTerminate;
- (void)initMetricsDB;
- (void)initMonitors;
- (void)initOverheatingDetector;
- (void)initPaths;
- (void)prepareMonitoring;
- (void)prepareInMain;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

