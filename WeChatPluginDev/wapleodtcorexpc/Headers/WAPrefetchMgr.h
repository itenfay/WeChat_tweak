//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, WAPreGetLaunchLogic, WAPrefetchGetCodeLogic, WAPrefetchInvalidateResourceLogic, WAPrefetchRegisterationMark;

@interface WAPrefetchMgr
{
    NSMutableDictionary *_queue;
    WAPrefetchGetCodeLogic *_getCodeLogic;
    WAPreGetLaunchLogic *_preGetLaunchLogic;
    WAPrefetchInvalidateResourceLogic *_invalidateResourceLogic;
    NSMutableArray *_arrFetching;
    NSMutableArray *_arrWaiting;
    NSMutableArray *_arrWalletFetching;
    NSMutableDictionary *_prefetchFirstOpenMarks;
    NSMutableDictionary *_prefetchOpenMarks;
    WAPrefetchRegisterationMark *_registerationMark;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPrefetchRegisterationMark *registerationMark; // @synthesize registerationMark=_registerationMark;
@property(retain, nonatomic) NSMutableDictionary *prefetchOpenMarks; // @synthesize prefetchOpenMarks=_prefetchOpenMarks;
@property(retain, nonatomic) NSMutableDictionary *prefetchFirstOpenMarks; // @synthesize prefetchFirstOpenMarks=_prefetchFirstOpenMarks;
@property(retain, nonatomic) NSMutableArray *arrWalletFetching; // @synthesize arrWalletFetching=_arrWalletFetching;
@property(retain, nonatomic) NSMutableArray *arrWaiting; // @synthesize arrWaiting=_arrWaiting;
@property(retain, nonatomic) NSMutableArray *arrFetching; // @synthesize arrFetching=_arrFetching;
@property(retain, nonatomic) WAPrefetchInvalidateResourceLogic *invalidateResourceLogic; // @synthesize invalidateResourceLogic=_invalidateResourceLogic;
@property(retain, nonatomic) WAPreGetLaunchLogic *preGetLaunchLogic; // @synthesize preGetLaunchLogic=_preGetLaunchLogic;
@property(retain, nonatomic) WAPrefetchGetCodeLogic *getCodeLogic; // @synthesize getCodeLogic=_getCodeLogic;
@property(retain, nonatomic) NSMutableDictionary *queue; // @synthesize queue=_queue;
- (id)resumeLocalPrefetchRegisterationMarkData;
- (void)saveLocalPrefetchRegisterationMarkData;
- (void)registerPrefetchGetCodeSequenceCheckForScene:(unsigned long long)arg1;
- (_Bool)isPrefetchSceneRegisteredGetCodeSequenceCheck:(unsigned long long)arg1;
- (id)resumeLocalOpenMarkData;
- (id)resumeLocalFirstOpenMarkData;
- (void)saveLocalMarkData;
- (void)deletePrefetchMarkForUsername:(id)arg1;
- (void)deletePrefetchMarkForUsername:(id)arg1 inMarkQueue:(id)arg2;
- (void)deletePrefetchMarkForInfoData:(id)arg1;
- (void)deletePrefetchMarkForInfoData:(id)arg1 inMarkQueue:(id)arg2;
- (_Bool)isPrefetchMarkedWithInfoData:(id)arg1 inMarkDic:(id)arg2;
- (void)markPrefetchPkgDidOpenWithInfoData:(id)arg1 instanceId:(id)arg2;
- (void)markPkgDownloadFromPrefetchWithInfoData:(id)arg1 reportKey:(unsigned int)arg2;
- (void)executeGetJsApiControlBytesCmd:(id)arg1;
- (void)executeGetExptInfoCmd:(id)arg1;
- (void)executePullGlobalConfigCmd:(id)arg1;
- (void)executeInvalidateContactCmd:(id)arg1;
- (void)executeInvalidateCodeCmd:(id)arg1;
- (void)executePreGetLaunchCmd:(id)arg1;
- (void)executeBlockCgiRequestCmd:(id)arg1;
- (void)executeIssueDecryptCmd:(id)arg1;
- (void)executeIssueLaunchCmd:(id)arg1;
- (void)executeIssueContactCmd:(id)arg1;
- (_Bool)executeGetCodeCmd:(id)arg1;
- (void)executeUpdateVersionCmd:(id)arg1;
- (void)executeGetContactCmd:(id)arg1;
- (id)popCmd;
- (void)executeCmdsWithPreDownloadRequestkey:(id)arg1;
- (void)pushCmd:(id)arg1;
- (unsigned long long)preCheckSequenceForCmd:(id)arg1;
- (void)preProcessGetJsApiControlBytesCmd:(id)arg1;
- (void)preProcessGetExptInfoCmd:(id)arg1;
- (void)preProcessPullGlobalConfigCmd:(id)arg1;
- (void)preProcessInvalidateContactCmd:(id)arg1;
- (void)preProcessInvalidateCodeCmd:(id)arg1;
- (void)preProcessPreLaunchCmd:(id)arg1;
- (void)preProcessBlockCgiRequestCmd:(id)arg1;
- (void)preProcessIssueDecryptCmd:(id)arg1;
- (void)preProcessIssueLaunchCmd:(id)arg1;
- (void)preProcessIssueContactCmd:(id)arg1;
- (void)preProcessGetCodeCmd:(id)arg1 preDownloadRequestkey:(id)arg2 scene:(unsigned int)arg3;
- (void)preProcessUpdateVersionCmd:(id)arg1;
- (void)preProcessGetContactCmd:(id)arg1;
- (_Bool)checkRespInfoIsValid:(id)arg1;
- (void)preCheckAndEliminateGetCodeCmd:(id)arg1;
- (id)genUniqueKeyWithUsername:(id)arg1 packageKey:(id)arg2;
- (void)tryCallbackPrefetchNoNeedGetCodeWithRequestKey:(id)arg1;
- (void)handleBatchSyncVersionRespList:(id)arg1 preDownloadRequestkey:(id)arg2 scene:(unsigned int)arg3;
- (void)handleBatchSyncVersionRespList:(id)arg1 preDownloadRequestkey:(id)arg2;
- (void)handlePushWxACmdMsg:(id)arg1;
- (void)handlePreDownloadCGI:(id)arg1;
- (void)handleBatchSyncVersion:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (id)getAppIDFromForceSyncUsername:(id)arg1;
- (id)fetchNeedForceSyncUsernameList;
- (id)fetchNeedSyncPredonwloadInfo;
- (id)fetchNeedSyncUsageInfoAndClearOutdatedUsageInfo;
- (_Bool)requestVersionSyncForUsernameList:(id)arg1;
- (void)checkWaitingQueue;
- (void)syncVersion;
- (_Bool)isUsernameInPreDownloadBlackList:(id)arg1;
- (void)onModifyWeAppContact:(id)arg1;
- (void)clearInvalidateCodeWithAppid:(id)arg1;
- (void)clearInvalidateContactWithAppid:(id)arg1;
- (id)allInvalidateContactAppid;
- (id)allInvalidateCodeAppid;
- (unsigned int)reportIdForInvalidateCode:(id)arg1;
- (unsigned int)reportIdForInvalidateContact:(id)arg1;
- (_Bool)isCodePkgInvalidateWithAppid:(id)arg1 updateTime:(unsigned int)arg2;
- (_Bool)isContactInvalidateWithAppid:(id)arg1 updateTime:(unsigned int)arg2;
- (void)wallet_cancelPrefetchContactUpdate;
- (void)wallet_tryUpdateContactAndDoPrefetchForUsernameList:(id)arg1 pathDic:(id)arg2 inScene:(unsigned int)arg3;
- (void)tryDoPrefetchForUserName:(id)arg1 appid:(id)arg2 path:(id)arg3 moduleName:(id)arg4 enableDownloadResumption:(_Bool)arg5 inScene:(unsigned int)arg6;
- (void)tryDoPrefetchForUserName:(id)arg1 appid:(id)arg2 path:(id)arg3 moduleName:(id)arg4 inScene:(unsigned int)arg5;
- (void)tryDoPrefetchForUserName:(id)arg1 appid:(id)arg2 path:(id)arg3 inScene:(unsigned int)arg4;
- (void)tryDoPrefetchForUserName:(id)arg1 path:(id)arg2 inScene:(unsigned int)arg3;
- (void)tryDoPrefetchForUserName:(id)arg1 appid:(id)arg2 enableDownloadResumption:(_Bool)arg3;
- (void)tryDoPrefetchForUserName:(id)arg1 appid:(id)arg2;
- (void)tryDoPrefetchForUserName:(id)arg1;
- (id)getAppPackagePreDownloadingSpeedForUserName:(id)arg1 appid:(id)arg2 path:(id)arg3 moduleName:(id)arg4 inScene:(unsigned int)arg5;
- (id)getAppPackagePreDownloadingSpeedForScene:(unsigned int)arg1;
- (void)cancelPreDownLoadAppPkgForUserName:(id)arg1 appid:(id)arg2 path:(id)arg3 moduleName:(id)arg4 inScene:(unsigned int)arg5;
- (void)cancelPreDownLoadAppPkgForScene:(unsigned int)arg1;
- (void)cancelHeartBeatCheck;
- (void)realHeartBeatCheckWeappVersion;
- (void)heartBeatCheckWeappVersion;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

