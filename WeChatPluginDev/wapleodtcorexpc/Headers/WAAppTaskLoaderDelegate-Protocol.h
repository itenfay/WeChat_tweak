//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, UIViewController, WACacheVersionPreCheckerContextResult, WAContact, WACustomLoadingViewController, WAPackageConfig, WAUINavigationController, WAWebViewController;

@protocol WAAppTaskLoaderDelegate <NSObject>
- (void)setWaitingSplashAdBlock:(void (^)(_Bool, NSString *))arg1;
- (struct CGSize)landscapeSheetSizeInSheetLaunchMode;
- (struct CGSize)sheetSizeInSheetLaunchMode;
- (_Bool)isSheetModeExpandedToStatusBarTop;
- (_Bool)isEmbedModeExpandedToFullScreen;
- (_Bool)sheetCanExpandToStatusBarAreaInSheetLaunchMode;
- (unsigned long long)capsuleMenuType;
- (_Bool)isRunningInSheetMode;
- (void)onCustomLoadingVCViewSizeTransitionComplete:(WACustomLoadingViewController *)arg1;
- (void)onCustomLoadingVCViewSizeTransitionStart:(WACustomLoadingViewController *)arg1;
- (void)onCustomLoadingVCRequestFullScreen:(WACustomLoadingViewController *)arg1;
- (void)relaunchToCurrentVersion;
- (void)relaunchToMigrateTargetWeAppIdWithFakeLoading:(NSString *)arg1;
- (_Bool)relaunchToLatestVersionWithFakeLoading;
- (_Bool)shouldColdLaunchUseWeakLoading;
- (void)setupCertFileAndPredownloadGameWithAppID:(NSString *)arg1 contact:(WAContact *)arg2 packageConfig:(WAPackageConfig *)arg3 isLazyLoad:(_Bool)arg4;
- (_Bool)setupConfigDataWithAppID:(NSString *)arg1 contact:(WAContact *)arg2 packageConfig:(WAPackageConfig *)arg3 relativeURL:(NSString *)arg4 relyPluginInfoDatas:(NSMutableArray *)arg5 isLazyLoad:(_Bool)arg6 entryPackages:(NSArray *)arg7;
- (void)packageCheckedSuccess:(_Bool)arg1 downloadedInfoDatas:(NSArray *)arg2;
- (void)didFinishCheckInfoDatasWithResult:(WACacheVersionPreCheckerContextResult *)arg1;
- (void)launchWebViewDidAppear;
- (void)fetchPreloadAppServiceIfPossibleWithContact:(WAContact *)arg1;
- (void)navigationControllerDidChangeTo:(WAUINavigationController *)arg1 shouldRestoreCurrentNavigationController:(_Bool)arg2;
- (void)onDidShowLoadingWithPresentingViewController:(UIViewController *)arg1;
- (void)onWillShowLoadingWithPresentingViewController:(UIViewController *)arg1;
- (void)onDidPresentWithPresentingViewController:(UIViewController *)arg1;
- (void)setupTaskForSpecificPageMode;
- (NSArray *)getIgnoreOtherWebViewListOnReloadFirstPage;
- (void)removeAllParentWebViewFromChild:(WAWebViewController *)arg1 andGetRemovedWebView:(id *)arg2;
- (void)removeParentWebView:(WAWebViewController *)arg1 fromChildWebView:(WAWebViewController *)arg2;
- (void)removeChildWebView:(WAWebViewController *)arg1 fromParentWebView:(WAWebViewController *)arg2;
- (void)getChildWebView:(id *)arg1 withRelativeURL:(NSString *)arg2 childExtraInfo:(NSDictionary *)arg3 fromParentWebView:(WAWebViewController *)arg4;
- (_Bool)setupAppServiceAndWebViewWithAppID:(NSString *)arg1 contact:(WAContact *)arg2 packageConfig:(WAPackageConfig *)arg3 baseURL:(NSString *)arg4 pageRelativeURL:(NSString *)arg5 getWebView:(id *)arg6;
@end

