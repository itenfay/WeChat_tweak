//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCrashBlockHandler, WCCrashBlockMonitorPlugin, WCFPSMonitorPlugin, WCMemoryStatPlugin, WCSQLiteLintPlugin;

@interface WCMatrixManager
{
    WCCrashBlockMonitorPlugin *_crashBlockPlugin;
    WCCrashBlockHandler *_crashBlockHandler;
    WCMemoryStatPlugin *_memStatPlugin;
    WCSQLiteLintPlugin *_sqliteLintPlugin;
    WCFPSMonitorPlugin *_fpsMonitorPlugin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFPSMonitorPlugin *fpsMonitorPlugin; // @synthesize fpsMonitorPlugin=_fpsMonitorPlugin;
@property(retain, nonatomic) WCSQLiteLintPlugin *sqliteLintPlugin; // @synthesize sqliteLintPlugin=_sqliteLintPlugin;
@property(retain, nonatomic) WCMemoryStatPlugin *memStatPlugin; // @synthesize memStatPlugin=_memStatPlugin;
@property(retain, nonatomic) WCCrashBlockHandler *crashBlockHandler; // @synthesize crashBlockHandler=_crashBlockHandler;
@property(retain, nonatomic) WCCrashBlockMonitorPlugin *crashBlockPlugin; // @synthesize crashBlockPlugin=_crashBlockPlugin;
- (void)didReceiveDiagnosticPayloads:(id)arg1;
- (void)p_reportKVDataOfMetricPayLoad:(id)arg1;
- (id)p_getReportLogOfHistogram:(id)arg1;
- (void)didReceiveMetricPayloads:(id)arg1;
- (void)unregisterMetricKit;
- (void)registerMetricKit;
- (void)handleFirstBecomeActive;
- (void)handleSuspend;
- (void)handleBackgroundLaunch;
- (_Bool)onMatrixManagerSupportCustomLagStrategy;
- (_Bool)onMatrixManagerCurrentNetworkOnWifi:(id)arg1;
- (void)onMatrixManager:(id)arg1 handleCoreDumpIssue:(id)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadCoreDumpIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleCustomIssue:(id)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadCustomIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleSqliteLintIssue:(id)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadSqliteLintIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleMemoryStatIssue:(id)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadMemoryStatIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleCrashIssueError:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleCrashIssue:(id)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadCrashIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleLagIssue:(id)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadLagIssue:(id)arg2;
- (id)onGetReportCryptKeyWithVersion:(unsigned int)arg1 withDataSize:(unsigned int)arg2;
- (id)onGetMatrixReportURL;
- (id)onGetMatrixReportHost;
- (id)onGetMatrixReportUserName;
- (unsigned int)onGetMatrixReportUin;
- (unsigned int)onGetMatrixReportVersion;
- (unsigned int)onGetMatrixReportProductID;
- (void)matrixLog:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (_Bool)matrixShouldLog:(int)arg1;
- (unsigned int)lastJSCType;
- (_Bool)recoverCPUUsage;
- (_Bool)lowerCPUUsage;
- (void)setShouldSuspendAllThreads:(_Bool)arg1;
- (_Bool)recoverRunloopThreshold;
- (_Bool)lowerRunloopThreshold;
- (_Bool)setRunloopThreshold:(unsigned int)arg1;
- (void)decreaseExistWeAppCount;
- (void)setExistWeAppCount:(int)arg1;
- (void)setLiteAppExtraInfo:(id)arg1;
- (void)setLiteAppScene:(id)arg1;
- (void)setWeAppScene:(id)arg1;
- (void)setScene:(id)arg1;
- (_Bool)isAfterLastLaunchUserRebootDevice;
- (_Bool)isLastForegroundDeadLoop;
- (_Bool)isLastTimeBOOM;
- (_Bool)isLastTimeFOOM;
- (void)checkXPCReboot;
- (_Bool)isLastRebootNormal;
- (unsigned long long)lastRebootType;
- (void)setCurrentUin:(unsigned long long)arg1 andUsrName:(id)arg2;
- (id)getFPSMonitorPlugin;
- (id)getSQLiteLintPlugin;
- (id)getMemoryStatPlugin;
- (id)getCrashBlockMonitorPlugin;
- (void)uploadCustomIssue:(id)arg1;
- (void)installMatrix;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

