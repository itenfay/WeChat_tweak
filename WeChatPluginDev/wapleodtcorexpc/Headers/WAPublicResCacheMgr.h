//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WAAppBrandNotifyInfo, WAPackageDownloadLogic, WAPackageInfoCacheLogic, WAPublicResInfo, WAPublicResInfoStorage, WAPublicResModel;

@interface WAPublicResCacheMgr
{
    WAPackageDownloadLogic *_pkgDownloadLogic;
    WAPackageInfoCacheLogic *_pkgInfoCacheLogic;
    NSString *_curDownloadUrlStr;
    _Bool _bIsDownloading;
    WAPublicResInfoStorage *m_resInfoStorage;
    WAPublicResInfo *_curServerRetInfo;
    long long _startDownloadTime;
    CDUnknownBlockType _syncUpdatePubLibHandler;
    CDUnknownBlockType _asyncUpdatePubLibHandler;
    CDUnknownBlockType _testForceUpdatePubLibHandler;
    CDUnknownBlockType _bizUpdatePubLibHandler;
    WAPublicResModel *_publicResModel;
    NSMutableArray *_unpackedCheckSum;
    WAAppBrandNotifyInfo *_publicDebugInfo;
}

+ (id)extensionIMsgExtRegisterKeyList;
+ (id)getBundlePubResDataWithType:(unsigned long long)arg1;
+ (id)getBundlePubResJsWithType:(unsigned long long)arg1;
+ (id)getBundle;
+ (unsigned int)getBundlePubVersion;
+ (id)getBundlePublicRelativePathWithFileName:(id)arg1;
+ (id)getBundlePublicRelativePath:(unsigned long long)arg1;
+ (id)getPublicRelativePath:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAAppBrandNotifyInfo *publicDebugInfo; // @synthesize publicDebugInfo=_publicDebugInfo;
@property(retain, nonatomic) NSMutableArray *unpackedCheckSum; // @synthesize unpackedCheckSum=_unpackedCheckSum;
@property(retain, nonatomic) WAPublicResModel *publicResModel; // @synthesize publicResModel=_publicResModel;
- (void)test_forceUpdatePubLibToVersion:(unsigned int)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)destroyAllLoadedOldPublibBackgroundTask;
- (void)processPublicPkgUpdateNotifyVersion:(unsigned int)arg1 pkgUrl:(id)arg2 patchUrl:(id)arg3 md5:(id)arg4 isForceUpdate:(_Bool)arg5 scene:(unsigned long long)arg6 updateType:(unsigned int)arg7;
- (void)parseNotifyMsg:(id)arg1;
- (void)onGetNewXmlMsg:(id)arg1 type:(id)arg2 msgContent:(id)arg3;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (_Bool)updatePublicResPkgWithScene:(unsigned long long)arg1;
- (void)removeDustPublicPkgBeyondShouldKeepVersionArr:(id)arg1;
- (void)reportPatchUpdateKvInfo:(_Bool)arg1 debugMode:(unsigned long long)arg2 errCode:(unsigned long long)arg3 publicInfo:(id)arg4 isPatch:(_Bool)arg5 pkgSize:(unsigned int)arg6 filePath:(id)arg7 protocolInfo:(id)arg8;
- (void)reportKvInfo:(_Bool)arg1 debugMode:(_Bool)arg2 downloadPercent:(unsigned int)arg3 eventID:(unsigned int)arg4;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 filePath:(id)arg3 protocolInfo:(id)arg4 totalLength:(unsigned long long)arg5;
- (void)syncHandlerActionWithRet:(_Bool)arg1;
- (_Bool)downloadDebugPublicPkgWithInfo:(id)arg1;
- (_Bool)downloadPublicPkgWithUrl:(id)arg1 patchUrl:(id)arg2;
- (_Bool)isDownloading;
- (_Bool)isNeedDownloadPublicDebugModePkg:(id)arg1;
- (void)asyncUpdatePublicResPkgFromLaunchWithInfo:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)syncUpdatePublicResPkgFromLaunchWithInfo:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)tryUpdatePublicResPkgWithCompleteHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasDownloadedPublib;
- (id)getCurrentPublicReleaseInfo;
- (id)getPublicForceLocalCacheDataWithRelativePath:(id)arg1;
- (id)getPublicForceLocalCacheData:(unsigned long long)arg1;
- (void)unpackPubResFromBundleIfNeeded;
- (_Bool)createDirIfNotExist:(id)arg1;
- (_Bool)unpackPubResFromBundleZipPath:(id)arg1;
- (void)unpackPubResFromBundle;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 version:(unsigned long long)arg2;
- (id)getPubResDataWithPubType:(unsigned long long)arg1 version:(unsigned long long)arg2 relativePath:(id)arg3 forAppid:(id)arg4;
- (id)getPubResDataWithPubType:(unsigned long long)arg1 version:(unsigned long long)arg2 resType:(unsigned long long)arg3 forAppid:(id)arg4;
- (_Bool)loadPublicPkgInfoLocalCache:(unsigned long long)arg1 version:(unsigned long long)arg2;
- (void)subThread_verifyLocalCacheChecksum:(id)arg1 pkgFilePath:(id)arg2 forceIgnoreCheckSum:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)verifyLocalCacheChecksum:(id)arg1 pkgFilePath:(id)arg2 forceIgnoreCheckSum:(_Bool)arg3;
- (_Bool)verifyLocalCacheChecksum:(id)arg1 debugModeType:(unsigned long long)arg2 version:(unsigned long long)arg3 forceIgnoreCheckSum:(_Bool)arg4;
- (_Bool)verifyLocalCacheChecksum:(id)arg1 debugModeType:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (id)genTokenMd5:(id)arg1 prefix:(id)arg2;
- (void)markMd5Unpacked:(id)arg1 prefix:(id)arg2;
- (_Bool)isMd5Unpacked:(id)arg1 prefix:(id)arg2;
- (void)markReleaseMd5Unpacked:(id)arg1;
- (void)markDebugMd5Unpacked:(id)arg1;
- (_Bool)isReleaseMd5Unpacked:(id)arg1;
- (_Bool)isDebugMd5Unpacked:(id)arg1;
- (void)checkAndClearPubRes;
- (void)saveResInfoStorage:(id)arg1;
- (void)loadResInfoStorage;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)checkUpdatePublicResPkgOnAppVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)checkUpdatePublicResPkg;
- (_Bool)isReachPubLibResUpdateGap;
- (id)getTaskPublicResModel;
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

