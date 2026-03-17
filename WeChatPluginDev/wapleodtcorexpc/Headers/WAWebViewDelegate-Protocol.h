//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSObject, NSString, UIScrollView, UIViewController, WAAppTaskExtInfo, WAGameExtraInfo, WAJSInvoker, WAPermissionResult, WATransferJSAPIRuntimeModel, WAWebViewController;

@protocol WAWebViewDelegate <NSObject>
- (void)webviewApiResult:(WAJSInvoker *)arg1;
- (void)sendWebviewEventToSkylineService:(NSString *)arg1 eventParam:(NSObject *)arg2 dstWebView:(WAWebViewController *)arg3;
- (void)sendJSEventToService:(NSString *)arg1 param:(NSObject *)arg2 fromWebView:(WAWebViewController *)arg3;

@optional
- (NSString *)getNavAlertTitleForWebview:(WAWebViewController *)arg1;
- (unsigned long long)supportedInterfaceOrientationInSheetMode;
- (long long)currentMenuStateForWebView:(WAWebViewController *)arg1;
- (NSMutableArray *)extJSModels;
- (void)onMenuDisappear;
- (unsigned int)getControlByteWithMenuItem:(unsigned long long)arg1;
- (_Bool)canSelectControlByteMenuItem:(unsigned long long)arg1;
- (_Bool)canShowControlByteMenuItem:(unsigned long long)arg1;
- (_Bool)shouldAddPopBackInteractivePopGestureForWebView:(WAWebViewController *)arg1;
- (_Bool)isRunningInTransparentBackgroud;
- (NSString *)jumpFromWeAppTaskAppid;
- (_Bool)jumpingEmbedWeAppTaskIsStating;
- (NSString *)jumpingSheetWeAppTaskAppid;
- (_Bool)hasJumpingEmbedWeAppTask;
- (_Bool)isRunningInViewEmbeddedMode;
- (_Bool)isRunningInEmbedMode;
- (_Bool)isSimulatedNativeSheetModeShouldHideLeftReturnButton;
- (_Bool)isSheetModeExpandedToStatusBarTop;
- (_Bool)shouldShowTemplateNav;
- (_Bool)isSheetModeAlreadyDragToFullScreen;
- (_Bool)isSheetModeAlreadyDragToExpanded;
- (_Bool)isSheetModeDragGestureDragging;
- (_Bool)isRunningInChatTool;
- (_Bool)isRunningInKeepContextView;
- (_Bool)isEmbedModeExpandedToFullScreen;
- (_Bool)isEnableSheetModeFullScreenGesture;
- (_Bool)isRunningInSheetMode;
- (void)layoutWmpfLaunchView;
- (void)layoutCapsuleMenu;
- (void)onOrientationDidChangeTo:(long long)arg1;
- (void)webviewDidShow404ErrorView:(WAWebViewController *)arg1;
- (void)remoteDomEvent:(NSString *)arg1 webViewID:(unsigned int)arg2;
- (_Bool)isIgnoreRemoteCheckDomain;
- (_Bool)isRemoteDebugMode;
- (_Bool)shouldReportPubLibCoverage;
- (void)webview:(WAWebViewController *)arg1 preferredStatusBarColorChanged:(_Bool)arg2;
- (void)webview:(WAWebViewController *)arg1 didFailEvaluateJS:(NSString *)arg2 withError:(NSString *)arg3;
- (void)webview:(WAWebViewController *)arg1 interactivePopBackDidEnd:(_Bool)arg2;
- (void)webview:(WAWebViewController *)arg1 interactivePopBackWillEnd:(_Bool)arg2;
- (void)webview:(WAWebViewController *)arg1 interactivePopBackDidChangeProgress:(double)arg2;
- (void)webviewIneractivePopBackDidBegin:(WAWebViewController *)arg1;
- (void)webviewDidLayout:(WAWebViewController *)arg1;
- (void)webviewDidResize:(WAWebViewController *)arg1;
- (struct CGSize)webviewPreferSize:(WAWebViewController *)arg1;
- (void)reboot;
- (WAGameExtraInfo *)getGameExtraInfo;
- (WAAppTaskExtInfo *)getTaskExtInfo;
- (void)triggerTaskRouteToHomePage;
- (unsigned long long)getWebViewDepthInStack;
- (WAWebViewController *)getLastWebViewFrom:(WAWebViewController *)arg1;
- (WAWebViewController *)getFirstWebViewFrom:(WAWebViewController *)arg1;
- (_Bool)taskUseLazyLoad;
- (_Bool)taskUsePreload;
- (void)returnSyncPostMessage:(NSDictionary *)arg1 fromWebView:(WAWebViewController *)arg2;
- (void)publishPostMessage:(NSDictionary *)arg1 fromWebView:(WAWebViewController *)arg2;
- (_Bool)hasPermissionToShowActionSheetMenuType:(unsigned int)arg1;
- (_Bool)checkWebViewRunMode:(NSString *)arg1;
- (void)checkUserAuthWithJSAPI:(NSString *)arg1 permissionAppID:(NSString *)arg2 model:(WATransferJSAPIRuntimeModel *)arg3 handler:(void (^)(void))arg4 failHandler:(void (^)(NSString *, unsigned int))arg5 transferHandler:(void (^)(NSDictionary *))arg6 fromWebView:(WAWebViewController *)arg7;
- (WAPermissionResult *)getPermissionResultWithJSAPI:(NSString *)arg1 withAppId:(NSString *)arg2 fromWebView:(WAWebViewController *)arg3 byTempPermission:(NSArray *)arg4;
- (_Bool)webViewShouldColdLaunchUseWeakLoading:(WAWebViewController *)arg1;
- (_Bool)isForceEnableClose;
- (_Bool)isNeedWriteGameReviewBeforeExit;
- (_Bool)isNeedWriteGameEvaluateBeforeExit;
- (_Bool)isNeedWriteEvaluateBeforeExit;
- (long long)webviewGetCurrentOrientation:(WAWebViewController *)arg1;
- (void)webview:(WAWebViewController *)arg1 rotateToOrientation:(long long)arg2;
- (_Bool)webview:(WAWebViewController *)arg1 isModuleLoaded:(NSString *)arg2;
- (void)firstPageWebViewDidSweepBack:(WAWebViewController *)arg1;
- (_Bool)webViewIsFirstPage:(WAWebViewController *)arg1;
- (void)webViewClickCustomRightButton:(WAWebViewController *)arg1;
- (void)exitToBackgroundFromWebView:(WAWebViewController *)arg1 action:(long long)arg2;
- (void)webViewBeforeClickReturnButton:(WAWebViewController *)arg1;
- (void)killAppFrom:(WAWebViewController *)arg1 animate:(_Bool)arg2 reason:(long long)arg3;
- (void)killAppFrom:(WAWebViewController *)arg1 animate:(_Bool)arg2;
- (void)enterBackgroundWithMode:(long long)arg1 action:(long long)arg2 animate:(_Bool)arg3 completion:(void (^)(void))arg4;
- (WAWebViewController *)popWebViewCount:(int)arg1 fromWebView:(WAWebViewController *)arg2 completion:(void (^)(void))arg3;
- (void)popToWebView:(WAWebViewController *)arg1 fromWebView:(WAWebViewController *)arg2 completion:(void (^)(void))arg3;
- (void)popToFirstWebViewFrom:(WAWebViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)popToFirstWebViewFrom:(WAWebViewController *)arg1 animated:(_Bool)arg2;
- (void)webViewDidSwitchTab:(WAWebViewController *)arg1;
- (WAWebViewController *)getPreviousWebViewFromWebView:(WAWebViewController *)arg1;
- (WAWebViewController *)getTabChildWebViewWithRelativeURL:(NSString *)arg1 fromWebView:(WAWebViewController *)arg2;
- (void)onSkylineNavigateBackDone:(WAWebViewController *)arg1;
- (void)onSkylineNavigateBack:(WAWebViewController *)arg1;
- (void)onSkylineRouteDone:(WAWebViewController *)arg1;
- (void)onSkylineWindowReady:(WAWebViewController *)arg1;
- (void)onFirstSkylineWillLoad:(WAWebViewController *)arg1;
- (void)webView:(WAWebViewController *)arg1 shareMenuShowIntentionDidChanged:(_Bool)arg2;
- (double)webViewGetStatusBarHeight:(WAWebViewController *)arg1;
- (_Bool)webViewShouldInitFullWebView:(WAWebViewController *)arg1;
- (void)webView:(WAWebViewController *)arg1 didEndDragging:(UIScrollView *)arg2;
- (void)webView:(WAWebViewController *)arg1 willEndDragging:(UIScrollView *)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(struct CGPoint *)arg4;
- (void)webView:(WAWebViewController *)arg1 willBeginDragging:(UIScrollView *)arg2;
- (double)webViewCapsuleMenuHeight;
- (double)webViewCapsuleMenuWidth;
- (unsigned int)webViewCapsuleMenuType:(WAWebViewController *)arg1;
- (_Bool)webViewIsCoveredByTemplateNav:(WAWebViewController *)arg1;
- (void)webView:(WAWebViewController *)arg1 didScroll:(UIScrollView *)arg2;
- (void)webViewDidReceiveInitReadyAfterRenderingCache:(WAWebViewController *)arg1;
- (void)webView:(WAWebViewController *)arg1 didReceiveInitReady:(_Bool)arg2;
- (void)webViewOnPageReload:(WAWebViewController *)arg1 withRouteInfo:(NSDictionary *)arg2;
- (void)webViewInjectScriptFail:(WAWebViewController *)arg1;
- (void)webviewDidManuallyTerminated:(WAWebViewController *)arg1;
- (void)webViewDidBecomeResponsible:(WAWebViewController *)arg1;
- (void)webViewDidBecomeUnresponsible:(WAWebViewController *)arg1;
- (void)webViewDidTerminateInContentProcess:(WAWebViewController *)arg1;
- (void)webView:(WAWebViewController *)arg1 pageRouteDownloadedInfoDatas:(NSArray *)arg2;
- (void)webViewOnBeforeEveluateIndexData:(WAWebViewController *)arg1;
- (void)webView:(WAWebViewController *)arg1 didPresent:(UIViewController *)arg2;
- (void)webViewDidBePresentd:(WAWebViewController *)arg1;
- (void)webViewDidPush:(WAWebViewController *)arg1;
- (void)webViewWillPush:(WAWebViewController *)arg1;
- (void)webViewDidBeDismissed:(WAWebViewController *)arg1;
- (void)webViewDidBePoped:(WAWebViewController *)arg1;
- (void)webViewWillBePoped:(WAWebViewController *)arg1;
- (void)webViewDidFirstAppear:(WAWebViewController *)arg1;
- (void)webViewDidDisappear:(WAWebViewController *)arg1;
- (void)webViewDidAppear:(WAWebViewController *)arg1;
- (void)webViewWillAppear:(WAWebViewController *)arg1;
- (void)webViewDidInternalInit:(WAWebViewController *)arg1;
@end

