//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAAppTaskLoaderContext, WALoadingViewController, WASerialWorkFlow;
@protocol WAAppTaskLoaderDelegate, WAMinimizeDelegate;

@interface WAAppTaskLoader : NSObject
{
    NSString *_appID;
    WAAppTaskLoaderContext *_context;
    CDUnknownBlockType _completeHandler;
    id <WAAppTaskLoaderDelegate> _loaderDelegate;
    WASerialWorkFlow *_firstPageWorkFlow;
    WASerialWorkFlow *_childPageWorkFlow;
    WASerialWorkFlow *_forceRelaunchWorkFlow;
    CDUnknownBlockType _forceRelaunchCompleteHandler;
    WAAppTaskLoaderContext *_forceRelaunchContext;
    id <WAMinimizeDelegate> _minimizeDelegate;
    WALoadingViewController *_loadingVC;
    CDUnknownBlockType _preCheckCacheVersionCompletion;
}

+ (CDUnknownBlockType)blockPushChildWebViewTimeout;
+ (CDUnknownBlockType)blockPushChildWebView;
+ (CDUnknownBlockType)blockSetupChildWebView;
+ (CDUnknownBlockType)blockPageReadyTimeoutWithMillisecond:(long long)arg1;
+ (CDUnknownBlockType)blockPageInitReady;
+ (CDUnknownBlockType)blockCheckSyncUpdatePubLib;
+ (CDUnknownBlockType)blockCheckABTestPermissionInfo;
+ (CDUnknownBlockType)blockCheckPluginPermissionInfo;
+ (CDUnknownBlockType)blockCheckLaunchPermissionInfo;
+ (CDUnknownBlockType)blockCheckCacheVersion;
+ (CDUnknownBlockType)blockWaitPreCheckCacheVersion;
+ (CDUnknownBlockType)blockPushWebViewTimeout;
+ (CDUnknownBlockType)blockPushWebView;
+ (CDUnknownBlockType)blockWaitSplashAdTimeout;
+ (CDUnknownBlockType)blockWaitSplashAd;
+ (CDUnknownBlockType)blockShowLoadingView;
+ (CDUnknownBlockType)blockFetchPreloadAppServiceIfPossible;
+ (struct CGRect)calcWeAppNavFrameInSheetModeWithContext:(id)arg1 nav:(id)arg2;
+ (id)genLoadingVCWithContext:(id)arg1;
+ (CDUnknownBlockType)blockSetupAppServiceAndWebView;
+ (CDUnknownBlockType)blockWeAppOverseaPrivacyConfirm;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType preCheckCacheVersionCompletion; // @synthesize preCheckCacheVersionCompletion=_preCheckCacheVersionCompletion;
@property(retain, nonatomic) WALoadingViewController *loadingVC; // @synthesize loadingVC=_loadingVC;
@property(nonatomic) __weak id <WAMinimizeDelegate> minimizeDelegate; // @synthesize minimizeDelegate=_minimizeDelegate;
@property(retain, nonatomic) WAAppTaskLoaderContext *context; // @synthesize context=_context;
- (struct CGSize)getLandscapeSheetSize;
- (struct CGSize)getPortraitSheetSize;
- (_Bool)isSheetModeExpandedToStatusBarTop;
- (_Bool)isEmbedModeExpandedToFullScreen;
- (_Bool)canExpandToStatusBarTop;
- (unsigned long long)capsuleMenuType;
- (_Bool)isRunningInSheetMode;
- (void)onCustomLoadingVCViewSizeTransitionComplete:(id)arg1;
- (void)onCustomLoadingVCViewSizeTransitionStart:(id)arg1;
- (void)onCustomLoadingVCRequestFullScreen:(id)arg1;
- (void)preCheckerContext:(id)arg1 didFinishPreCheckWithResult:(id)arg2;
- (void)onAppBrandLoadingViewReturn:(id)arg1;
- (void)cancelSilentRelaunchProcess;
- (void)cancelPreOpenProcess;
- (_Bool)isSilentOpen;
- (void)resetLoadingViewDelegate;
- (void)releaseLoadingView;
- (void)removeLoadingViewSlient;
- (void)popLoadingView;
- (id)getLoadingViewController;
- (void)setupCertFileAndPredownloadGameWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 isLazyLoad:(_Bool)arg4;
- (_Bool)setupConfigDataWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 relativeURL:(id)arg4 relyPluginInfoDatas:(id)arg5 isLazyLoad:(_Bool)arg6 entryPackages:(id)arg7;
- (void)fetchPreloadAppServiceIfPossibleWithContact:(id)arg1;
- (void)packageCheckedSuccess:(_Bool)arg1 downloadedInfoDatas:(id)arg2;
- (void)didFinishCheckInfoDatasWithResult:(id)arg1;
- (void)navigationControllerDidChangeTo:(id)arg1 shouldRestoreCurrentNavigationController:(_Bool)arg2;
- (void)onDidShowLoadingViewControllerWithPresentingViewController:(id)arg1;
- (void)onWillShowLoadingViewControllerWithPresentingViewController:(id)arg1;
- (void)onDidPresentWithPresentingViewController:(id)arg1;
- (id)getIgnoreOtherWebViewListOnReloadFirstPage;
- (void)removeAllParentWebViewFromChild:(id)arg1 andGetRemovedWebView:(id *)arg2;
- (void)removeParentWebView:(id)arg1 fromChildWebView:(id)arg2;
- (void)removeChildWebView:(id)arg1 fromParentWebView:(id)arg2;
- (void)getChildWebView:(id *)arg1 withRelativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParentWebView:(id)arg4;
- (void)onPushWebViewDidAppear;
- (void)onBeforePushWebView;
- (void)setupTaskForSpecificPageMode;
- (_Bool)setupAppServiceAndWebViewWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 baseURL:(id)arg4 pageRelativeURL:(id)arg5 getWebView:(id *)arg6;
- (_Bool)shouldColdLaunchUseWeakLoading;
- (void)abortChildPageLoadingWithErrorMessage:(id)arg1;
- (void)cancelFirstPageLoadingWithErrorMessage:(id)arg1;
- (void)abortFirstPageLoadingWithErrorMessage:(id)arg1;
- (void)relaunchToMigrateTargetWeAppId:(id)arg1;
- (void)rebootInLoading;
- (void)relaunchToLatestVersion;
- (void)cancelLoadingAndAlertMsg:(id)arg1 title:(id)arg2;
- (void)cancelLoadingAndJumpToViewController:(id)arg1 detail:(unsigned int)arg2 msg:(id)arg3;
- (void)cancelLoadingAndJumpToRetryPage:(id)arg1;
- (void)cancelLoadingAndJumpToH5:(id)arg1;
- (void)removeChildWebViewOnFail;
- (void)runChildPageWorkFlow;
- (void)cancelForceRelaunchWorkFlow;
- (void)cancelChildPageWorkFlow;
- (void)cancelFirstPageWorkFlow;
- (void)finalyRunFirstPageWorkFlow;
- (void)runFirstPageWorkFlow;
- (void)runSilentFirstPageWorkFlow;
- (void)callCompleteHandler:(unsigned int)arg1 detail:(unsigned int)arg2 message:(id)arg3;
- (void)callCompleteHandler:(unsigned int)arg1 message:(id)arg2;
- (id)appID;
- (void)forceRelaunchUpdatePackageWithDelegate:(id)arg1 context:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (id)ignoreWebViewDidAppearListOnReloadFirstPage;
- (void)loadChildPageWithDelegate:(id)arg1 context:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)loadFirstPageWithDelegate:(id)arg1 context:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithAppID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

