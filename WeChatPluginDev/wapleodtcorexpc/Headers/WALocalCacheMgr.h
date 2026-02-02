//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSString, WAPackageDownloadLogic, WAPackageInfoCacheLogic;

@interface WALocalCacheMgr
{
    WAPackageDownloadLogic *_pkgDownloadLogic;
    WAPackageInfoCacheLogic *_pkgInfoCacheLogic;
    NSMutableDictionary *_dicDownloadingUrlToDownloadInfo;
    NSMutableDictionary *_dicDownloadedTime;
    NSMutableSet *_setPackageChecksumVerified;
}

+ (unsigned int)getPkgEncryptVersion:(id)arg1;
+ (void)setupInitializeInfoData:(id)arg1 withAppId:(id)arg2 userName:(id)arg3;
+ (id)getModuleInfoDataWithAppId:(id)arg1 userName:(id)arg2 moduleName:(id)arg3 appServiceType:(unsigned int)arg4;
+ (id)getDebugModuleInfoDataWithAppId:(id)arg1 userName:(id)arg2 moduleName:(id)arg3 appServiceType:(unsigned int)arg4;
+ (id)getDefaultInfoDataWithAppId:(id)arg1 userName:(id)arg2 appServiceType:(unsigned int)arg3;
+ (id)getDebugInfoDataWithAppId:(id)arg1 userName:(id)arg2 appServiceType:(unsigned int)arg3;
- (void).cxx_destruct;
- (unsigned long long)transferDownloadTypeToReportType:(unsigned long long)arg1;
- (_Bool)isPkgFileExistsForInfoData:(id)arg1;
- (_Bool)overwriteTargetInfoDataPkg:(id)arg1 bySourceInfoData:(id)arg2;
- (double)getDownloadingPrefetchTaskSpeedWithUrl:(id)arg1;
- (id)getDownloadingPrefetchTaskSpeed;
- (unsigned int)getDownloadingPrefetchTaskCount;
- (id)batchEvaluateEncryptFile:(id)arg1 context:(id)arg2;
- (_Bool)evaluateEncryptFile:(id)arg1 sourceUrl:(id)arg2 context:(id)arg3;
- (id)decompressZstdPkg:(id)arg1;
- (void)executeIssueDecryptCmd:(id)arg1;
- (id)getFileInfoWithFullUrl:(id)arg1 digestAlgorithm:(id)arg2 error:(id *)arg3 errNo:(unsigned int *)arg4;
- (struct stat)statWithFullUrl:(id)arg1 error:(id *)arg2;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (void)removeDownloadInfoWithUrl:(id)arg1;
- (id)allDownloadInfo;
- (id)getDownloadInfoWithUrl:(id)arg1;
- (void)setDownloadInfo:(id)arg1 withUrl:(id)arg2;
- (double)getDownloadTime:(id)arg1;
- (id)getLocalCacheDataWithBaseUrl:(id)arg1 relativeUrl:(id)arg2;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4 prefix:(id)arg5 suffix:(id)arg6;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (unsigned long long)getCacheFileSizeWithFullUrl:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 prefix:(id)arg2 suffix:(id)arg3;
- (id)getLocalCacheDataWithFullUrl:(id)arg1;
- (id)getCacheFileInfoWithFullUrl:(id)arg1;
- (_Bool)hasLocalCacheDataWithFullUrl:(id)arg1;
- (_Bool)isNeedDownloadDebugModePkgWithDebugInfo:(id)arg1 appServiceType:(unsigned int)arg2;
- (unsigned long long)getPackageTypeByNotifyInfo:(id)arg1 appServiceType:(unsigned int)arg2;
- (_Bool)isNeedDownloadDebugModePkg:(id)arg1;
- (_Bool)updateWeAppInfoData:(id)arg1;
- (void)onUpdateDataRecordWhenGetValidPkg:(id)arg1;
- (void)reportDownloadDetailForDownloadInfo:(id)arg1 withDetailInfo:(id)arg2 errCode:(unsigned int)arg3;
- (void)reportDownloadResult:(_Bool)arg1 errCode:(unsigned int)arg2 forDownloadInfo:(id)arg3 withDetailInfo:(id)arg4;
- (void)innerNotifyOnCompleteExtension:(_Bool)arg1 errorCode:(unsigned int)arg2 errorMsg:(id)arg3 pkgUrl:(id)arg4 moduleName:(id)arg5 usePatch:(_Bool)arg6 protocolInfo:(id)arg7;
- (void)notifyOnCompleteExtension:(_Bool)arg1 errorCode:(unsigned int)arg2 errorMsg:(id)arg3 pkgUrl:(id)arg4 moduleName:(id)arg5 usePatch:(_Bool)arg6 protocolInfo:(id)arg7;
- (void)onDownloadTaskRecordTime:(double)arg1 appId:(id)arg2;
- (void)subThread_onDownloadSuccessWithDownloadInfo:(id)arg1 errorType:(long long)arg2 taskUrl:(id)arg3 filePath:(id)arg4 protocolInfo:(id)arg5 totalLength:(unsigned long long)arg6;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 filePath:(id)arg3 protocolInfo:(id)arg4 totalLength:(unsigned long long)arg5;
- (void)onDownloadTaskProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 taskUrl:(id)arg4;
- (void)downloadAppPkgWithDownloadInfo:(id)arg1 realDownloadUrl:(id)arg2 downloadScene:(unsigned long long)arg3;
- (void)cancelDownLoadAppPkgWithAppInfoData:(id)arg1;
- (_Bool)downloadAppPkgWithAppInfoData:(id)arg1 fullPkgUrl:(id)arg2 fullPkgUrlWithZstd:(id)arg3 patchUrlStr:(id)arg4 downloadScene:(unsigned long long)arg5 enableDownloadResumption:(_Bool)arg6;
- (_Bool)downloadAppPkgWithAppInfoData:(id)arg1 fullPkgUrl:(id)arg2 fullPkgUrlWithZstd:(id)arg3 patchUrlStr:(id)arg4 downloadScene:(unsigned long long)arg5;
- (_Bool)isDownloadingWithInfoData:(id)arg1;
- (_Bool)isDownloadingWithThisFullPkgDownloadURL:(id)arg1 orFullPkgUrlWithZstd:(id)arg2 orPatchUrl:(id)arg3;
- (void)clearAllPkgInfoWhenNoAppRunning;
- (_Bool)tryLoadReleasePkgInfoLocalCacheWithContact:(id)arg1;
- (_Bool)loadPkgInfoLocalCache:(id)arg1;
- (void)unloadPkgLocalCacheIfDifferentPackageType:(id)arg1;
- (_Bool)hasLoadPkgInfoLocalCache:(id)arg1;
- (_Bool)verifyLocalCacheChecksum:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
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

