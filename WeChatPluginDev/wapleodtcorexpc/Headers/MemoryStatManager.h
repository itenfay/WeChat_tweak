//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MemoryStatAutoDumpConfig, MemoryStatPluginConfig, MemoryStatReporter, NSMutableDictionary, NSMutableString, NSRecursiveLock, NSString, WCMemoryStatPlugin, WCMemoryStatRecord;

@interface MemoryStatManager
{
    NSRecursiveLock *m_lock;
    NSString *m_rootDir;
    NSString *m_pluginConfigPath;
    NSString *m_autoDumpConfigPath;
    NSString *m_autoDumpDataPath;
    NSMutableString *m_launchLog;
    MemoryStatPluginConfig *m_pluginConfig;
    MemoryStatAutoDumpConfig *m_autoDumpConfig;
    unsigned long long m_userMode;
    MemoryStatReporter *m_reporter;
    WCMemoryStatPlugin *m_plugin;
    WCMemoryStatRecord *m_lastRecord;
    _Bool m_memoryLoggingEnabled;
    _Bool m_allocationsLoggerEnabled;
    _Bool m_leaksCheckerEnabled;
    _Bool m_mallocGuardEnabled;
    _Bool m_fasterZoneEnabled;
    _Bool m_isLastTimeFOOM;
    _Bool m_isLastTimeBOOM;
    unsigned long long m_lastUserType;
    unsigned long long m_lastMaxUserType;
    NSMutableDictionary *m_lastCustomInfo;
    MMTimer *m_allocationsAutoDumpTimer;
    MMTimer *m_leaksAutoCheckTimer;
    long long m_lastDumpTimestamp;
}

- (void).cxx_destruct;
- (id)onMemoryStatPluginGetCustomInfo:(id)arg1;
- (void)onMemoryStatPlugin:(id)arg1 hasError:(int)arg2;
- (unsigned int)currUin;
- (id)currUsrName;
- (void)setupAutoDumpStrategyFromXLab;
- (void)setupPlguinStrategyFromXLab;
- (void)onExptItemListChange;
- (void)onAuthOK;
- (void)doIDKeyReport:(int)arg1 value:(int)arg2;
- (void)handleAppFirstBecomeActive:(id)arg1;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (void)saveAutoDumpConfig;
- (void)savePluginConfig;
- (void)savePluginConfigDelay;
- (void)loadAutoDumpConfig;
- (void)loadPluginConfig;
- (void)onLeaksAutoCheckTimerCallback:(id)arg1;
- (void)startLeaksAutoCheckTimer;
- (id)autoDumpDataFileNameWithID:(unsigned long long)arg1;
- (void)onAllocationsAutoDumpTimerCallback:(id)arg1;
- (void)startAllocationsAutoDumpTimer;
- (unsigned long long)cleanMemoryStatData;
- (unsigned long long)preGetMemoryStatDataSize;
- (void)setCustomInfoWithKey:(id)arg1 value:(id)arg2;
- (void)removeUserType:(unsigned long long)arg1;
- (void)addUserType:(unsigned long long)arg1;
- (void)handleIPXXInBackground:(int)arg1;
- (void)onIPXX:(id)arg1;
- (void)onSignalCrash;
- (void)leaksCheckAndReport:(id)arg1;
- (void)allocationsDumpAndReport:(id)arg1;
- (id)customInfoCommonReport;
- (id)customInfoForLastReport:(id)arg1;
- (id)customInfoForLiveReport:(unsigned int)arg1;
- (_Bool)uploadRecord:(id)arg1;
- (id)recordList;
- (void)uploadLastRecord:(id)arg1;
- (_Bool)shouldEnterMemoryReport;
- (void)enableMallocGuard;
- (void)setMemoryStatDisable:(_Bool)arg1;
- (_Bool)isMemoryStatDisable;
- (void)setMemoryStatManualEnabled:(_Bool)arg1;
- (_Bool)isMemoryStatManualEnabled;
- (void)startFasterZoneIfNeeded;
- (void)enableLeaksCheckerIfNeeded;
- (void)enableAllocationsLoggerIfNeeded;
- (void)startMallocGuardIfNeeded;
- (void)startMemoryLoggingIfNeeded;
- (_Bool)checkDeviceSatisfied;
- (void)startVMRegionsLoggingIfNeeded;
- (void)startPlugin;
- (void)checkAndRecord;
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

