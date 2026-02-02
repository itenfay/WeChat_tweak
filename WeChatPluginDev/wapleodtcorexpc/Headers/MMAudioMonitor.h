//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAudioCriticalEvent, MMAudioMonitorConfig, MMMetricsRecordDB, MMStackReportConnection, NSMutableArray, NSRecursiveLock;

@interface MMAudioMonitor : NSObject
{
    NSRecursiveLock *m_lock;
    MMAudioMonitorConfig *m_config;
    MMMetricsRecordDB *m_db;
    NSMutableArray *m_unSavedTasks;
    void *m_liveTasks;
    NSMutableArray *m_liveWebviews;
    int m_checkCount;
    _Bool m_isBackgroundRunning;
    double m_lastCheckTime;
    double m_audioBeginTime;
    MMAudioCriticalEvent *m_criticalEvent;
    MMStackReportConnection *m_reportConnection;
}

+ (id)sharedInstance;
+ (void)hook;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *liveWebviews; // @synthesize liveWebviews=m_liveWebviews;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=m_lock;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)resetReportCount;
- (id)stackInfosFromTasks:(id)arg1;
- (void)uploadCriticalEvent:(id)arg1;
- (void)uploadAllCriticalEvent;
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (unsigned short)audioPlayingCount;
- (void)onTaskEnd:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
- (void)onTaskBegin:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
- (unsigned long long)taskKeyWith:(unsigned long long)arg1 taskType:(unsigned long long)arg2;
- (void)collectOtherPlayingData;
- (void)collectData;
- (void)setRecordDB:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)collectWebviewPlayingData;
- (void)onWebviewDealloc:(unsigned long long)arg1;
- (void)onWebviewInit:(unsigned long long)arg1;

@end

