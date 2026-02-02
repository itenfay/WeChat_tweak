//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLockMutableDictionary, NSMapTable, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, WePkgCheckUpdateMgr, WePkgCleanMgr, WePkgConfigMgr, WePkgDownloadMgr, WePkgOperateUpdateMgr;

@interface WePkgFacade
{
    NSRecursiveLock *_createPackageLock;
    id _clearWePkgAllDataNotificationToken;
    id _receiveMemoryWarningNotificationToken;
    WePkgConfigMgr *_configMgr;
    WePkgCheckUpdateMgr *_checkMgr;
    WePkgDownloadMgr *_downloadMgr;
    WePkgOperateUpdateMgr *_operateMgr;
    WePkgCleanMgr *_cleanMgr;
    NSString *_jsCommonLibPkgId;
    NSString *_injectJsScript;
    MMLockMutableDictionary *_dicPkgId2Package;
    NSMapTable *_dicUrl2UsingWebview;
    NSMutableDictionary *_dicOriginalUrl2A8KeyData;
    NSMutableDictionary *_dicOriginalUrl2NeedReloadWebVC;
    NSMutableDictionary *_reportSyncReloadOBjs;
    NSMutableSet *_webViewDidCommitSet;
    NSMutableDictionary *_webViewEvaluateJsDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *webViewEvaluateJsDic; // @synthesize webViewEvaluateJsDic=_webViewEvaluateJsDic;
@property(retain, nonatomic) NSMutableSet *webViewDidCommitSet; // @synthesize webViewDidCommitSet=_webViewDidCommitSet;
@property(retain, nonatomic) NSMutableDictionary *reportSyncReloadOBjs; // @synthesize reportSyncReloadOBjs=_reportSyncReloadOBjs;
@property(retain) NSMutableDictionary *dicOriginalUrl2NeedReloadWebVC; // @synthesize dicOriginalUrl2NeedReloadWebVC=_dicOriginalUrl2NeedReloadWebVC;
@property(retain) NSMutableDictionary *dicOriginalUrl2A8KeyData; // @synthesize dicOriginalUrl2A8KeyData=_dicOriginalUrl2A8KeyData;
@property(retain, nonatomic) NSMapTable *dicUrl2UsingWebview; // @synthesize dicUrl2UsingWebview=_dicUrl2UsingWebview;
@property(retain, nonatomic) MMLockMutableDictionary *dicPkgId2Package; // @synthesize dicPkgId2Package=_dicPkgId2Package;
@property(retain, nonatomic) NSString *injectJsScript; // @synthesize injectJsScript=_injectJsScript;
@property(retain, nonatomic) NSString *jsCommonLibPkgId; // @synthesize jsCommonLibPkgId=_jsCommonLibPkgId;
@property(retain, nonatomic) WePkgCleanMgr *cleanMgr; // @synthesize cleanMgr=_cleanMgr;
@property(retain, nonatomic) WePkgOperateUpdateMgr *operateMgr; // @synthesize operateMgr=_operateMgr;
@property(retain, nonatomic) WePkgDownloadMgr *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) WePkgCheckUpdateMgr *checkMgr; // @synthesize checkMgr=_checkMgr;
@property(retain, nonatomic) WePkgConfigMgr *configMgr; // @synthesize configMgr=_configMgr;
- (_Bool)appendScript:(id)arg1 preInjectJsRidName:(id)arg2 enableExpt:(id)arg3 enableDebugName:(id)arg4;
- (id)getGamePreInjectJsForRidName:(id)arg1;
- (void)airGameWkRecordDir;
- (void)handleGameCustomActionWithPath:(id)arg1 title:(id)arg2 actionTitle:(id)arg3;
- (id)gameCustomizeActionTitleArray:(id)arg1;
- (_Bool)isGameHarFile:(id)arg1;
- (_Bool)unzipFromPath:(id)arg1 targetPath:(id)arg2;
- (id)moveUnzipDirToDebugPath:(id)arg1 pkgName:(id)arg2;
- (void)showMsg:(id)arg1;
- (void)showSuccessToastForPkgId:(id)arg1 rid:(id)arg2;
- (void)applyFileToDebugPath:(id)arg1 title:(id)arg2;
- (_Bool)isGamePkgFileName:(id)arg1;
- (_Bool)isGamePkgPartFile:(id)arg1;
- (id)pkgNameFromPkgFile:(id)arg1;
- (id)contentNameFromFileName:(id)arg1 targetSuffix:(id)arg2;
- (_Bool)isGamePkgZipFile:(id)arg1;
- (id)getWebViewKey:(id)arg1;
- (void)reportSyncReloadEnd:(id)arg1 result:(int)arg2;
- (void)reportSyncReloadBegin:(id)arg1 url:(id)arg2 pkg:(id)arg3 version:(id)arg4;
- (void)reloadWithoutCommonLibForWebView:(id)arg1;
- (void)tryStopLoadingViewAndReloadA8KeyFullUrl:(id)arg1 OriginalUrl:(id)arg2 ReloadUrl:(id)arg3;
- (void)handleGetA8KeyReturn:(id)arg1 OriginalUrl:(id)arg2 FullUrl:(id)arg3;
- (void)synchronizeCookies:(id)arg1 originUrl:(id)arg2 fullUrl:(id)arg3 cookiesInfo:(id)arg4;
- (void)notifyGetA8KeyReturn:(id)arg1 OriginalUrl:(id)arg2 FullUrl:(id)arg3 ExtraInfo:(id)arg4;
- (void)reloadCurrentWebview:(id)arg1 WithoutWePkg:(id)arg2;
- (void)startReloadWithOnlineModeAfterDownloadFailed:(id)arg1 errorCode:(int)arg2;
- (void)startReloadWebviews:(id)arg1 withPackage:(id)arg2;
- (void)clearPageCacheState:(id)arg1;
- (void)reloadCurrentWebviewWaitWePkg:(id)arg1 serverVersion:(id)arg2;
- (void)reloadCurrentWebviewWithoutWePkg:(id)arg1 serverVersion:(id)arg2;
- (void)reloadCurrentWebviewWaitWePkg:(id)arg1 serverVersion:(id)arg2 blockWait:(_Bool)arg3;
- (_Bool)wePkgGlobalConfigDisabled;
- (void)refreshWebViewWhenSyncReload:(id)arg1 errCode:(int)arg2;
- (void)downloadMgr:(id)arg1 didFailForDownloadInfoNonAtomicPart:(id)arg2 NoAutoRetry:(_Bool)arg3;
- (void)downloadMgr:(id)arg1 didFailForDownloadInfoAtomicPart:(id)arg2 NoAutoRetry:(_Bool)arg3;
- (void)downloadMgr:(id)arg1 didFailForDownloadInfo:(id)arg2 errCode:(int)arg3 NoAutoRetry:(_Bool)arg4;
- (void)downloadMgr:(id)arg1 didSuccessForDownloadInfoNonAtomicPart:(id)arg2;
- (void)downloadMgr:(id)arg1 didSuccessForDownloadInfoAtomicPart:(id)arg2;
- (void)downloadMgr:(id)arg1 didSuccessForDownloadInfo:(id)arg2;
- (void)checkUpdateMgr:(id)arg1 didSuccessForPkgId:(id)arg2;
- (void)clearWkWebviewCache;
- (void)handleOperateEndForPkgId:(id)arg1;
- (void)notifyWebViewDidCommit:(id)arg1;
- (void)notifyWebViewDidExit:(id)arg1;
- (_Bool)existPkgForUrl:(id)arg1;
- (void)releaseDataForUrl:(id)arg1 alsoReleasePreload:(_Bool)arg2;
- (_Bool)checkUpdateFrequenceIsOK:(id)arg1 CheckInterval:(unsigned int)arg2;
- (void)checkUpdateForExistPkgs:(id)arg1 andForcePkgs:(id)arg2;
- (void)checkUpdate:(id)arg1 CheckInterval:(unsigned int)arg2;
- (void)checkUpdateIfNeed:(id)arg1;
- (void)traceEventForWepkgEnterWebWithPkgId:(id)arg1 Url:(id)arg2 Version:(id)arg3 Result:(int)arg4;
- (_Bool)isPkgNeedForceUpdate:(id)arg1;
- (void)cleanWepkg:(id)arg1;
- (int)loadPkgForPkgId:(id)arg1 Domain:(id)arg2 Package:(id *)arg3 Version:(id *)arg4;
- (int)tryLoadPkgForUrl:(id)arg1 Version:(id *)arg2 preloadMain:(_Bool)arg3;
- (int)tryLoadPkgForUrl:(id)arg1 preloadMain:(_Bool)arg2;
- (int)tryLoadPkgForUrl:(id)arg1 Version:(id *)arg2;
- (_Bool)loadPkgForJsCommonLib;
- (_Bool)tryLoadPkgForJsCommonLibWithPkg:(id)arg1;
- (_Bool)updateWePkg:(id)arg1 UsingWebview:(id)arg2;
- (_Bool)updateWePkgUsingWebview:(id)arg1 WebView:(id)arg2;
- (void)setLastDownloadTmpConfigInDBTime:(unsigned int)arg1;
- (unsigned int)getLastDownloadTmpConfigInDBTime;
- (void)downloadTmpConfigInDB;
- (void)tryOperateUpdateForPkgId:(id)arg1 AtomicPart:(_Bool)arg2 NonAtomicPart:(_Bool)arg3;
- (id)getNeedDownloadSingleFileListOnCurrentNetwork:(id)arg1 PkgId:(id)arg2 Version:(id)arg3 IsAtomicPart:(_Bool)arg4;
- (id)getNeedDownloadFileListOnCurrentNetwork:(id)arg1;
- (id)loadPackage:(id)arg1 createIfNeed:(_Bool)arg2;
- (void)observerMemoryWarning;
- (void)observerWebViewNotification;
- (_Bool)isWePkgAllEntryEnabled;
- (void)setupMgr;
- (_Bool)isCommonLibNeedForceUpdate;
- (void)updateUsingCommlibWebView:(id)arg1;
- (id)getCacheDataForResouceUrlInternal:(id)arg1 mainDocUrl:(id)arg2 PkgId:(id *)arg3 Version:(id *)arg4;
- (void)reportResourceHookResult:(id)arg1 Version:(id)arg2 ResourceUrl:(id)arg3 Hook:(_Bool)arg4;
- (id)getJscorePublicLib;
- (id)getCacheDataForResouceUrl:(id)arg1 mainDocUrl:(id)arg2;
- (id)getCachedJsScript:(id)arg1;
- (id)fileNameFromRid:(id)arg1;
- (_Bool)needInjectJsRunTimeStatistics:(id)arg1;
- (id)dataFromCachedItem:(id)arg1 resourceUrl:(id)arg2;
- (void)checkUpdateForJsCommonLib;
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

