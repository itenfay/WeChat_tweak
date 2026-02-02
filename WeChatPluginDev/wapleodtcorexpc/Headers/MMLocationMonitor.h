//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLocationCriticalEvent, MMLocationMonitorConfig, MMMetricsRecordDB, MMStackReportConnection, NSMutableArray, NSRecursiveLock;

@interface MMLocationMonitor : NSObject
{
    NSRecursiveLock *m_lock;
    MMLocationMonitorConfig *m_config;
    MMMetricsRecordDB *m_db;
    NSMutableArray *m_unSavedTasks;
    void *m_liveTasks;
    int m_checkCount;
    double m_locationBeginTime;
    MMLocationCriticalEvent *m_criticalEvent;
    MMStackReportConnection *m_reportConnection;
}

+ (id)sharedInstance;
+ (void)hook;
- (void).cxx_destruct;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)resetReportCount;
- (id)stackInfosFromTasks:(id)arg1;
- (void)uploadCriticalEvent:(id)arg1;
- (void)uploadAllCriticalEvent;
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (unsigned short)locationRetrievingCount;
- (void)onTaskEnd:(id)arg1;
- (void)onTaskBegin:(id)arg1;
- (void)collectData;
- (void)setRecordDB:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)dealloc;
- (id)init;

@end

