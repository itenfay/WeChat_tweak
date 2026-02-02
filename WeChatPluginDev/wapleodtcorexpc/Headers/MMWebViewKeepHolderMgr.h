//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMWebViewController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, OrderedDictionary, WCEliminatedSlotMMKV;

@interface MMWebViewKeepHolderMgr
{
    MMWebViewController *_webViewVCForNewMainFrameBanner;
    MMWebViewController *_webViewVCForArticleReadingBanner;
    NSString *_musicBarUrl;
    NSMutableArray *_dpArrOpenedWebview;
    NSMutableDictionary *_dicBackgroundWebviewTask;
    NSMutableArray *_arrTaskOrder;
    MMTimer *_checkTimer;
    _Bool _bIsDelayLoading;
    NSMutableArray *_drtWorkFlowArr;
    unsigned int _domainBlockRulesVersion;
    WCEliminatedSlotMMKV *_webBackgroundAblumSlotMMKV;
    MMTimer *_fetchBackgroundAudioStateTimmer;
    double _previousTingAudioUpdateTime;
    OrderedDictionary *_dictTaskWebVC;
    NSMutableDictionary *_dictTaskCacheTime;
    NSDictionary *_dictDomainBlockPaths;
}

+ (unsigned int)convertMusicPlaySourceType2WebAudioPlayReportSourceType:(unsigned int)arg1;
+ (unsigned int)convertKSMusicPlayState2WebAudioPlayReportEvent:(unsigned long long)arg1;
+ (void)reportMusicPlayInnerStatusChanged:(unsigned int)arg1 musicInfo:(id)arg2;
+ (id)albumInfoKeyWithAlbumId:(id)arg1 domain:(id)arg2;
+ (id)currentAlbumKVId;
+ (id)recentUsedRecordFromWebViewController:(id)arg1;
+ (_Bool)shouldRecoverWebVCInCacheWithWebData:(id)arg1 andWebVC:(id)arg2;
+ (_Bool)shouldCacheWebVC:(id)arg1;
+ (id)genMinimizationWebTaskKey:(id)arg1;
+ (id)serializationWebviewExtDataKeys;
+ (id)serializationStringForWebviewExtDataItemsInWebview:(id)arg1;
+ (id)webViewControllerFromMinimizationData:(id)arg1 presetTaskKey:(id)arg2;
+ (unsigned int)webMinimizeTypeFromGenerateType:(unsigned long long)arg1;
+ (unsigned long long)generateTypeFromWebMinimizeType:(unsigned int)arg1;
+ (id)dataFromHandOffItem:(id)arg1;
+ (id)dataFromWebViewViewController:(id)arg1 minimizeType:(unsigned int)arg2;
+ (unsigned int)maxWebPageCacheDuration;
+ (unsigned long long)maxWebPageCount;
+ (void)reportUniversalLinkActionWithReportId:(unsigned int)arg1 reportKey:(unsigned int)arg2 value:(unsigned int)arg3;
+ (void)reportUniversalLinkActionWithReportKey:(unsigned int)arg1 extReportId:(unsigned int)arg2;
+ (void)reportUniversalLinkActionWithReportKey:(unsigned int)arg1;
+ (CDUnknownBlockType)blockWebviewPausePlayback;
+ (CDUnknownBlockType)blockWebviewExitRefreshWebview;
+ (CDUnknownBlockType)blockWebviewExitCheckBitSetAction;
+ (CDUnknownBlockType)blockWebviewExitReportAction;
+ (CDUnknownBlockType)blockWebviewCheckAndFixXpcIssue;
+ (CDUnknownBlockType)blockWebviewExitTimeoutActionWithTimeout:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int domainBlockRulesVersion; // @synthesize domainBlockRulesVersion=_domainBlockRulesVersion;
@property(retain, nonatomic) NSDictionary *dictDomainBlockPaths; // @synthesize dictDomainBlockPaths=_dictDomainBlockPaths;
@property(retain, nonatomic) NSMutableDictionary *dictTaskCacheTime; // @synthesize dictTaskCacheTime=_dictTaskCacheTime;
@property(retain, nonatomic) OrderedDictionary *dictTaskWebVC; // @synthesize dictTaskWebVC=_dictTaskWebVC;
@property(nonatomic) double previousTingAudioUpdateTime; // @synthesize previousTingAudioUpdateTime=_previousTingAudioUpdateTime;
@property(retain, nonatomic) MMTimer *fetchBackgroundAudioStateTimmer; // @synthesize fetchBackgroundAudioStateTimmer=_fetchBackgroundAudioStateTimmer;
@property(retain, nonatomic) WCEliminatedSlotMMKV *webBackgroundAblumSlotMMKV; // @synthesize webBackgroundAblumSlotMMKV=_webBackgroundAblumSlotMMKV;
- (void)onPreQuit;
- (void)onFontSizeChange;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onServiceMemoryWarning;
- (void)dealloc;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 updateCurrentTime:(double)arg3 duration:(double)arg4;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)updateTingAudio:(id)arg1 WithCurrentTime:(double)arg2 duration:(double)arg3;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onPlayMusic:(id)arg1 fromScene:(long long)arg2;
- (void)onMusicWillBePreempted:(id)arg1 byNewMusicInfo:(id)arg2;
- (void)prepareForMusicPlay:(id)arg1;
- (id)webBackgourndAudioInfoWithAlbumId:(id)arg1 audioId:(id)arg2 domain:(id)arg3;
- (id)webBackgourndAlbumInfoWithAlbumId:(id)arg1 domain:(id)arg2;
- (void)setWebBackgourndAlbumInfo:(id)arg1 forAlbumId:(id)arg2 domain:(id)arg3;
- (void)updateWebBackgourndAlbumInfo:(id)arg1;
- (_Bool)checkAndUpdateCurrentBackgroundAudioInfo;
- (void)timer_updateCurrentBackgroundAudioInfoInPolling;
- (void)tryStopPollingCurrentBackgroundAudioState;
- (void)tryStartPollingCurrentBackgroundAudioState;
- (void)onServiceTerminateWithCategoryWebAudio;
- (void)onServiceEnterForegroundWithCategoryWebAudio;
- (void)onServiceEnterBackgroundWithCategoryWebAudio;
- (void)onServiceDeallocWithCategoryWebAudio;
- (void)onServiceInitWithCategoryWebAudio;
- (_Bool)rec_deleteUsedRecordWithWebviewVC:(id)arg1;
- (_Bool)rec_updateUsedRecordWithWebviewVC:(id)arg1;
- (_Bool)rec_tryUpdateSnapShotWithHistoryRecords:(id)arg1;
- (_Bool)shouldRecoverWebVCInCache:(id)arg1;
- (void)updateData:(id)arg1 withHandOffItem:(id)arg2;
- (void)updateData:(id)arg1 withWebviewController:(id)arg2;
- (void)tryAdvanceDownloadPageDataWithWebVC:(id)arg1;
- (void)removeWebVCInCacheWithTaskKey:(id)arg1;
- (void)apppendWebVCToCache:(id)arg1 taskKey:(id)arg2;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRecoverTaskData:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (_Bool)unminimizeMinimizedHandOffItem:(id)arg1;
- (_Bool)minimizeMinimizedHandOffItem:(id)arg1;
- (_Bool)isViewControllerCached:(id)arg1;
- (_Bool)isViewControllerMinimized:(id)arg1;
- (void)removeAllRetainViewControlerFromMinimization;
- (void)unminimizeViewControler:(id)arg1;
- (_Bool)updateMinimizeViewControler:(id)arg1;
- (void)minimizeWebViewController:(id)arg1 minimizeType:(unsigned int)arg2 animated:(_Bool)arg3;
- (void)minimizeWebViewController:(id)arg1 minimizeType:(unsigned int)arg2;
- (void)__removeAllRetainWebVC;
- (void)onWebMinimizationServiceEnterForgournd;
- (void)onWebMinimizationServiceEnterBackground;
- (unsigned int)controlActionUniversalLinkPrefix:(id)arg1;
- (unsigned int)webUniversalLinkRulesVersion;
- (unsigned int)__convertValue2ControlAction:(long long)arg1;
- (void)clearWebUniversalLinkPrefixDict;
- (void)initWebUniversalLinkPrefixDict;
- (void)updateCurrentBackToChatState;
- (void)clickPushKeepHoldWebview;
- (void)cancelHoldWebViewVC:(id)arg1;
- (id)getKeepHoldWebViewVCForNewMainFrameBanner;
- (id)getKeepHoldWebViewVCTitleForNewMainFrameBanner;
- (void)keepHoldWebViewVCForNewMainFrameBanner:(id)arg1;
- (void)createNewWebviewIfNoCache;
- (void)dp_sendJSEventToAllWebView:(id)arg1 Param:(id)arg2 AppID:(id)arg3 Host:(id)arg4;
- (void)dp_deleteWebView:(id)arg1;
- (void)dp_addWebViewAsWeak:(id)arg1;
- (void)onCheckBackgroundTaskTimeOut;
- (void)cleanAllBackgroundTask;
- (id)getCurrentAllPresentingBackgroundVC;
- (void)deleteBackgroundTaskForKey:(id)arg1;
- (id)getBackgroundTaskForKey:(id)arg1;
- (_Bool)addBackgroundTask:(id)arg1 forKey:(id)arg2 IsPresented:(_Bool)arg3;
- (void)setDelayLoading:(_Bool)arg1;
- (_Bool)hasDelayLoadingTask;
- (void)cancelHoldWebViewVCForReadingBanner;
- (id)getKeepHoldMusicBarUrl;
- (id)getKeepHoldWebViewVCForReadingBanner;
- (void)keepHoldWebViewVCForReadingBanner:(id)arg1 musicBarUrl:(id)arg2;
- (void)drt_handleMpReportResult:(id)arg1;
- (void)releaseWorkFlow:(id)arg1;
- (unsigned int)requestExitReportWithData:(id)arg1;
- (void)drt_tryExecuteDelayReleaseTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

