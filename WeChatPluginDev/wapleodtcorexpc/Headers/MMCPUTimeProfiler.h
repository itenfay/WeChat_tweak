//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMCPUTimeProfilerConfig, MMMetricsRecordDB, MMStackReportConnection, NSMutableArray, NSRecursiveLock, NSThread;

@interface MMCPUTimeProfiler : NSObject
{
    NSRecursiveLock *m_lock;
    _Bool m_isSampling;
    NSThread *m_workingThread;
    MMCPUTimeProfilerConfig *m_config;
    unsigned int m_usleepTime;
    MMMetricsRecordDB *m_db;
    NSMutableArray *m_samplesToInsert;
    void *m_samplesToMerge;
    void *m_eventConfigs;
    MMStackReportConnection *m_reportConnection;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)resetReportCount;
- (id)stackInfosFromSamples:(id)arg1;
- (void)uploadMetricsDataFrom:(double)arg1 to:(double)arg2 averageUsage:(float)arg3 eventTag:(unsigned long long)arg4 eventSubTag:(unsigned long long)arg5 eventInfo:(id)arg6 inRecordDB:(id)arg7;
- (void)uploadCriticalEvent:(id)arg1;
- (void)uploadAllCriticalEvent;
- (id)checkCriticalEventWithConfig:(id)arg1 userType:(unsigned long long)arg2 metricsInfos:(id)arg3;
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)addSample:(id)arg1;
- (void)dumpAllThreads;
- (void)saveData;
- (id)samplesToSave;
- (void)timeProfilerThread;
- (void)stopSampling;
- (void)startSampling;
- (void)setRecordDB:(id)arg1;
- (void)setEventConfig:(id)arg1 forUserType:(unsigned long long)arg2;
- (void)setConfig:(id)arg1;
- (void)dealloc;
- (id)init;

@end

