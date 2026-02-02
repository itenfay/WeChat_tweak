//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMSafeModeReport, NSDictionary, NSMutableArray, NSString;

@interface MMSafeModeMgr
{
    NSString *m_crashUsrName;
    unsigned long long m_crashUin;
    NSMutableArray *m_localUsrNameMd5List;
    NSDictionary *m_serverConfig;
    NSMutableArray *m_deleteListFromLocalConfig;
    NSMutableArray *m_uploadListFromLocalConfig;
    NSMutableArray *m_deleteListFromServerConfig;
    NSMutableArray *m_uploadListFromServerConfig;
    _Bool m_hasBackup;
    _Bool m_isUploadTimeout;
    unsigned long long m_safeModeScene;
    struct MMSafeModeInfo *m_safeModeInfo;
    MMSafeModeReport *m_safeModeReport;
    struct MMSMUploadFileObserver *m_observer;
    struct shared_ptr<MMSMUploadFileObserver2> m_observer2;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)shieldFOOMEnterSafeMode;
- (id)uploadFileZipName;
- (id)uploadFileTempPath;
- (id)libraryUserPaths;
- (id)libraryPath;
- (id)documentsUserPaths;
- (id)documentsPath;
- (id)rootPath;
- (int)uploadLogsDaysFromConfigs;
- (id)transformPath:(id)arg1;
- (id)uploadListFromConfigs;
- (void)forcedDeleteFilesFromServerConfig;
- (id)deleteListFromConfigs;
- (void)initDeleteAndUploadListFromServerConfig;
- (void)initDeleteAndUploadListFromLocalConfig;
- (_Bool)isServerConfigValid;
- (void)setCrashUsrName:(id)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)updateSafeModeConfig;
- (void)onPCUpdateFinish:(unsigned long long)arg1;
- (void)updatePRConfig;
- (void)updateServerConfig;
- (void)onLagReportFinished;
- (void)onDumpReporterUploadResult:(_Bool)arg1;
- (void)doLagReport;
- (void)onCrashReportFinished;
- (void)onCrashReporterUploadResult:(_Bool)arg1;
- (void)doCrashReport;
- (void)reportDataWithKey:(int)arg1 value:(int)arg2;
- (void)handleResignActiveNotification;
- (void)clearAllFlags;
- (void)backupLogsFromConfigs;
- (void)backupFilesInUploadList;
- (void)uploadLogsAndSpecialFiles;
- (long long)getUploadFilesSize;
- (id)currentUploadFiles;
- (void)clearUnnecessaryFiles;
- (void)notifyReportAndUpdateConfigFinished;
- (void)onReportAndUpdateConfigTimeout;
- (void)doReportAndUpdateConfig;
- (void)doSafeModeSceneIDKeyReport;
- (void)didEnterWeChat;
- (unsigned long long)safeModeScene;
- (_Bool)shouldEnterSafeMode;
- (void)initCrashUsrName;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

