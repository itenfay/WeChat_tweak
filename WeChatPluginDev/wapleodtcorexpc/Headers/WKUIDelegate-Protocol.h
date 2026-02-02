//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIViewController, WKContextMenuElementInfo, WKFrameInfo, WKNavigationAction, WKPreviewElementInfo, WKSecurityOrigin, WKWebView, WKWebViewConfiguration, WKWindowFeatures;
@protocol UIContextMenuInteractionCommitAnimating, UIEditMenuInteractionAnimating;

@protocol WKUIDelegate <NSObject>

@optional
- (void)webView:(WKWebView *)arg1 willDismissEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)webView:(WKWebView *)arg1 willPresentEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)webView:(WKWebView *)arg1 showLockdownModeFirstUseMessage:(NSString *)arg2 completionHandler:(void (^)(long long))arg3;
- (void)webView:(WKWebView *)arg1 contextMenuDidEndForElement:(WKContextMenuElementInfo *)arg2;
- (void)webView:(WKWebView *)arg1 contextMenuForElement:(WKContextMenuElementInfo *)arg2 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (void)webView:(WKWebView *)arg1 contextMenuWillPresentForElement:(WKContextMenuElementInfo *)arg2;
- (void)webView:(WKWebView *)arg1 contextMenuConfigurationForElement:(WKContextMenuElementInfo *)arg2 completionHandler:(void (^)(UIContextMenuConfiguration *))arg3;
- (void)webView:(WKWebView *)arg1 commitPreviewingViewController:(UIViewController *)arg2;
- (UIViewController *)webView:(WKWebView *)arg1 previewingViewControllerForElement:(WKPreviewElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (_Bool)webView:(WKWebView *)arg1 shouldPreviewElement:(WKPreviewElementInfo *)arg2;
- (void)webView:(WKWebView *)arg1 requestDeviceOrientationAndMotionPermissionForOrigin:(WKSecurityOrigin *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 decisionHandler:(void (^)(long long))arg4;
- (void)webView:(WKWebView *)arg1 requestMediaCapturePermissionForOrigin:(WKSecurityOrigin *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 type:(long long)arg4 decisionHandler:(void (^)(long long))arg5;
- (void)webView:(WKWebView *)arg1 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3 initiatedByFrame:(WKFrameInfo *)arg4 completionHandler:(void (^)(NSString *))arg5;
- (void)webView:(WKWebView *)arg1 runJavaScriptConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)webView:(WKWebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(void))arg4;
- (void)webViewDidClose:(WKWebView *)arg1;
- (WKWebView *)webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4;
@end

