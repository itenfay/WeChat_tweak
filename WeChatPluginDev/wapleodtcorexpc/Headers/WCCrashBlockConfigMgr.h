//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCCrashBlockConfigMgr
{
    NSMutableDictionary *_dicMainThreadMonitorCongfig;
}

+ (id)getConfigFilePath;
+ (_Bool)isMMLiveHeavyUser;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicMainThreadMonitorCongfig; // @synthesize dicMainThreadMonitorCongfig=_dicMainThreadMonitorCongfig;
- (_Bool)getCorruptCrashUploadEnabled;
- (_Bool)getJscBacktraceEnabled;
- (_Bool)getStdioBufferEnabled;
- (_Bool)getSearchQueueNames;
- (_Bool)getCoreDumpUploadAfterCrash;
- (_Bool)getCoreDumpEnabledAtNonCrash;
- (_Bool)getCoreDumpEnabledAtCrash;
- (_Bool)getMoreThreadInfoEnabled;
- (unsigned int)getBusyThreadProfileInterval;
- (unsigned int)getBusyThreadProfileDuration;
- (_Bool)getBusyThreadProfileEnabled;
- (unsigned int)getLagDumpDailyLimit;
- (_Bool)getShouldEnableSnapshot;
- (_Bool)getShouldSuspendAllThreads;
- (_Bool)getRunloopSensitiveHangDetectionEnabled;
- (_Bool)getRunloopDynamicThresholdEnabled;
- (unsigned int)getRunloopLowThreshold;
- (unsigned int)getRunloopDefaultThreshold;
- (_Bool)getShouldPrintCPUFrequency;
- (float)getPowerConsumeCPULimit;
- (_Bool)getShouldGetPowerConsumeStack;
- (_Bool)getShouldGetCPUHighLog;
- (_Bool)getMainThreadProfileEnabled;
- (unsigned int)getPerStackInterval;
- (int)getDeviceUnder;
- (_Bool)getMainThreadHandle;
- (float)getLowerCPUUsage;
- (float)getCPUUsagePercent;
- (_Bool)getBlockMonitorOpen;
- (void)saveDumpReportConfig;
- (void)loadDumpReportConfig;
- (void)onExptItemListChange;
- (id)getBlockMointorConfiguration;
- (float)flutterSampleRatio;
- (_Bool)isLiveHeavyUser;
- (float)finderSampleRatio;
- (float)liveUserSampleRatio;
- (void)addCustomStrategy:(id)arg1 sampleRatio:(float)arg2 lagMaxCount:(long long)arg3 network:(unsigned long long)arg4;
- (void)setupStrategy;
- (void)lazyInitConfigMgr;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

