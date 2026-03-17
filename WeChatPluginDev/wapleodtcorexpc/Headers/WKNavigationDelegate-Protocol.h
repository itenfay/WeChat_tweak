//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, NSURLAuthenticationChallenge, WKDownload, WKNavigation, WKNavigationAction, WKNavigationResponse, WKWebView, WKWebpagePreferences;

@protocol WKNavigationDelegate <NSObject>

@optional
- (void)webView:(WKWebView *)arg1 navigationResponse:(WKNavigationResponse *)arg2 didBecomeDownload:(WKDownload *)arg3;
- (void)webView:(WKWebView *)arg1 navigationAction:(WKNavigationAction *)arg2 didBecomeDownload:(WKDownload *)arg3;
- (void)webView:(WKWebView *)arg1 authenticationChallenge:(NSURLAuthenticationChallenge *)arg2 shouldAllowDeprecatedTLS:(void (^)(_Bool))arg3;
- (void)webViewWebContentProcessDidTerminate:(WKWebView *)arg1;
- (void)webView:(WKWebView *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)webView:(WKWebView *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webView:(WKWebView *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didCommitNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webView:(WKWebView *)arg1 didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationResponse:(WKNavigationResponse *)arg2 decisionHandler:(void (^)(long long))arg3;
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 preferences:(WKWebpagePreferences *)arg3 decisionHandler:(void (^)(long long, WKWebpagePreferences *))arg4;
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long))arg3;
@end

