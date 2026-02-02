//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WXCustomWebViewControllerDelegate-Protocol.h"

@class DeepLinkDef, MMWebViewController, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURL, UIView;
@protocol YYWebViewInterface;

@protocol MMWebViewDelegate <WXCustomWebViewControllerDelegate>

@optional
- (void)onWebViewDidBecomeUnresponsible:(MMWebViewController *)arg1;
- (NSDictionary *)onWebViewPassHandleDeviceInfoWithAction:(NSString *)arg1 params:(NSDictionary *)arg2 Webview:(MMWebViewController *)arg3;
- (_Bool)onWebViewCanPassHandleDeviceInfoWithAction:(NSString *)arg1 Webview:(MMWebViewController *)arg2;
- (_Bool)onWebViewPerformClose:(MMWebViewController *)arg1;
- (NSDictionary *)onWebViewPassParams:(NSDictionary *)arg1 Webview:(MMWebViewController *)arg2;
- (void)onLeaveWebviewAndBackTo3rdApp;
- (void)onLeaveWebviewAndJumpToViewConroller;
- (void)accessDeepLink:(DeepLinkDef *)arg1 Url:(NSString *)arg2 Webview:(MMWebViewController *)arg3;
- (_Bool)canAccessDeepLink:(DeepLinkDef *)arg1 Url:(NSString *)arg2 Webview:(MMWebViewController *)arg3;
- (void)setCanShake:(_Bool)arg1;
- (void)onWebViewCloseAndGoNext:(NSDictionary *)arg1 webVC:(MMWebViewController *)arg2 customClose:(_Bool *)arg3;
- (void)onWebViewWillClose:(NSDictionary *)arg1;
- (void)onWebViewDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)onWebViewWillRotateToInterfaceOrientation:(long long)arg1;
- (void)onWebViewDidFinishLoad:(UIView<YYWebViewInterface> *)arg1;
- (void)onWebViewDidStartLoad:(UIView<YYWebViewInterface> *)arg1;
- (NSURL *)webViewFailToLoad:(UIView<YYWebViewInterface> *)arg1 Error:(NSError *)arg2;
- (void)onWebViewDidReceiveResponse:(UIView<YYWebViewInterface> *)arg1 Response:(NSHTTPURLResponse *)arg2;
- (void)webViewDidReturn:(MMWebViewController *)arg1;
- (void)webViewReturn:(MMWebViewController *)arg1;
@end

