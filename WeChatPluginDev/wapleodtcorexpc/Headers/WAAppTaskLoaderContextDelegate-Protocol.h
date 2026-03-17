//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUINavigationController, NSArray, NSDictionary, NSMutableArray, NSString, UIViewController, WACacheVersionPreCheckerContextResult, WAContact, WAPackageConfig, WAWebViewController;

@protocol WAAppTaskLoaderContextDelegate <NSObject>
- (void)setupCertFileAndPredownloadGameWithAppID:(NSString *)arg1 contact:(WAContact *)arg2 packageConfig:(WAPackageConfig *)arg3 isLazyLoad:(_Bool)arg4;
- (_Bool)setupConfigDataWithAppID:(NSString *)arg1 contact:(WAContact *)arg2 packageConfig:(WAPackageConfig *)arg3 relativeURL:(NSString *)arg4 relyPluginInfoDatas:(NSMutableArray *)arg5 isLazyLoad:(_Bool)arg6 entryPackages:(NSArray *)arg7;
- (void)didCheckPassInfoDatas:(NSMutableArray *)arg1 checkFailedInfoDatas:(NSMutableArray *)arg2;
- (void)fetchPreloadAppServiceIfPossibleWithContact:(WAContact *)arg1;
- (void)packageCheckedSuccess:(_Bool)arg1 downloadedInfoDatas:(NSArray *)arg2;
- (void)didFinishCheckInfoDatasWithResult:(WACacheVersionPreCheckerContextResult *)arg1;
- (void)navigationControllerDidChangeTo:(MMUINavigationController *)arg1 shouldRestoreCurrentNavigationController:(_Bool)arg2;
- (void)onDidShowLoadingViewControllerWithPresentingViewController:(UIViewController *)arg1;
- (void)onWillShowLoadingViewControllerWithPresentingViewController:(UIViewController *)arg1;
- (void)onDidPresentWithPresentingViewController:(UIViewController *)arg1;
- (NSArray *)getIgnoreOtherWebViewListOnReloadFirstPage;
- (void)removeAllParentWebViewFromChild:(WAWebViewController *)arg1 andGetRemovedWebView:(id *)arg2;
- (void)removeParentWebView:(WAWebViewController *)arg1 fromChildWebView:(WAWebViewController *)arg2;
- (void)removeChildWebView:(WAWebViewController *)arg1 fromParentWebView:(WAWebViewController *)arg2;
- (void)getChildWebView:(id *)arg1 withRelativeURL:(NSString *)arg2 childExtraInfo:(NSDictionary *)arg3 fromParentWebView:(WAWebViewController *)arg4;
- (void)onPushWebViewDidAppear;
- (void)onBeforePushWebView;
- (void)setupTaskForSpecificPageMode;
- (_Bool)setupAppServiceAndWebViewWithAppID:(NSString *)arg1 contact:(WAContact *)arg2 packageConfig:(WAPackageConfig *)arg3 baseURL:(NSString *)arg4 pageRelativeURL:(NSString *)arg5 getWebView:(id *)arg6;
- (void)abortChildPageLoadingWithErrorMessage:(NSString *)arg1;
- (void)cancelFirstPageLoadingWithErrorMessage:(NSString *)arg1;
- (void)abortFirstPageLoadingWithErrorMessage:(NSString *)arg1;
- (void)relaunchToMigrateTargetWeAppId:(NSString *)arg1;
- (void)relaunchToLatestVersion;
- (void)cancelLoadingAndAlertMsg:(NSString *)arg1 title:(NSString *)arg2;
- (void)cancelLoadingAndJumpToRetryPage:(NSString *)arg1;
- (void)cancelLoadingAndJumpToH5:(NSString *)arg1;
@end

