//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMetricsNetworkDB, MMNetworkMonitorConfig, MMNetworkStatistics, MMStackReportConnection, NSMutableArray, NSRecursiveLock, NSTimer;

@interface MMNetworkMonitor : NSObject
{
    NSRecursiveLock *m_lock;
    MMNetworkMonitorConfig *m_config;
    MMMetricsNetworkDB *m_db;
    NSMutableArray *m_samplesToInsert;
    void *m_socketConnections;
    void *m_socketSamplesToMerge;
    void *m_httpSamplesToMerge;
    _Bool m_isOnWifi;
    NSTimer *m_timer;
    MMNetworkStatistics *m_currAppNetworkUsage;
    MMNetworkStatistics *m_lastDeviceNetworkStatistics;
    MMNetworkStatistics *m_currDeviceNetworkStatistics;
    void *m_eventConfigs;
    MMStackReportConnection *m_reportConnection;
}

+ (id)sharedInstance;
+ (void)hook;
- (void).cxx_destruct;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)resetReportCount;
- (id)stackInfosFromSamples:(id)arg1;
- (void)uploadCriticalEvent:(id)arg1;
- (void)uploadAllCriticalEvent;
- (id)checkCriticalEventWithConfig:(id)arg1 userType:(unsigned long long)arg2 metricsInfos:(id)arg3;
- (void)checkCriticalEventWithMetricsInfos:(id)arg1 eventInfo:(id)arg2;
- (void)handleApplicationDidBecomeActiveNotification;
- (void)refreshNetworkStatus;
- (void)resetNetworkUsage;
- (id)currentDeviceNetworkUsage;
- (id)currentAppNetworkUsage;
- (void)saveData;
- (id)samplesToSave;
- (void)_httpRequest:(id)arg1 callerStack:(id)arg2 sendBytes:(unsigned long long)arg3 recvBytes:(unsigned long long)arg4;
- (void)onHttpRequest:(id)arg1 sendBytes:(unsigned long long)arg2 recvBytes:(unsigned long long)arg3;
- (void)onURLSessionTaskProcess:(id)arg1 sendBytes:(unsigned long long)arg2 recvBytes:(unsigned long long)arg3;
- (void)onURLSessionTaskStart:(id)arg1;
- (void)onURLConnectionProcess:(id)arg1 sendBytes:(unsigned long long)arg2 recvBytes:(unsigned long long)arg3;
- (void)onURLConnectionStart:(id)arg1;
- (void)onSocketClose:(int)arg1;
- (void)onSocketProcess:(int)arg1 sendBytes:(unsigned long long)arg2 recvBytes:(unsigned long long)arg3 addr:(const void *)arg4;
- (_Bool)shouldFilter:(const void *)arg1;
- (void)onSocketConnect:(int)arg1 addr:(const void *)arg2 addrlen:(unsigned int)arg3;
- (void)onSocketBind:(int)arg1 addr:(const void *)arg2 addrlen:(unsigned int)arg3;
- (void)onSocketAccept:(int)arg1 addr:(const void *)arg2 addrlen:(unsigned int *)arg3;
- (void)onSocketCreate:(int)arg1;
- (id)socketConnectionBySockfd:(int)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)setNetworkDB:(id)arg1;
- (void)setEventConfig:(id)arg1 forUserType:(unsigned long long)arg2;
- (void)setConfig:(id)arg1;
- (void)dealloc;
- (id)init;

@end

