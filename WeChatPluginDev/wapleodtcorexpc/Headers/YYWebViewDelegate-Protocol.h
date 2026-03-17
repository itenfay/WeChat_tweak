//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, NSURLAuthenticationChallenge, NSURLRequest, WKDownload, WKFrameInfo, WKNavigation, WKNavigationAction, WKNavigationResponse, WKScriptMessage, WKWebView;
@protocol YYWebViewInterface;

@protocol YYWebViewDelegate <NSObject>

@optional
@property(readonly, nonatomic) NSURLRequest *request;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURLRequest",?,R,N

- (_Bool)isDisableSetCustomUserAgentInBaseWebview;
- (_Bool)isEnableWeixinTextTranslate;
- (_Bool)isDisableWebviewContextMenu;
- (NSDictionary *)customURLSchemeHandlerDictionary;
- (void)webView:(WKWebView *)arg1 navigationResponse:(WKNavigationResponse *)arg2 didStartDownload:(WKDownload *)arg3;
- (void)webView:(WKWebView *)arg1 navigationAction:(WKNavigationAction *)arg2 didStartDownload:(WKDownload *)arg3;
- (void)webView:(id <YYWebViewInterface>)arg1 didFailEvaluateJS:(NSString *)arg2 withError:(NSError *)arg3;
- (NSArray *)webviewCustomScriptReplyHandlerForConfiguration;
- (NSArray *)webviewCustomScriptHandlerForConfiguration;
- (_Bool)isGamePreloadInMen;
- (NSArray *)webViewUserScriptsForConfiguration;
- (NSArray *)webViewCookiesForConfiguration;
- (_Bool)checkShouldHandlePromptMessage:(NSString *)arg1 defaultText:(NSString *)arg2 sourceFrame:(WKFrameInfo *)arg3 resultMsg:(id *)arg4;
- (NSString *)getWXHookScriptStr;
- (NSString *)getPreInjectScriptStr;
- (void)webViewDidReceiveServerRedirect:(id <YYWebViewInterface>)arg1 navigation:(WKNavigation *)arg2;
- (void)webViewOnBeforeReload:(id <YYWebViewInterface>)arg1;
- (void)webView:(id <YYWebViewInterface>)arg1 onBeforeLoadRequest:(NSURLRequest *)arg2;
- (void)webView:(id <YYWebViewInterface>)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (_Bool)allowsAutoMediaPlay;
- (_Bool)allowsInlineMediaPlay;
- (void)webviewDidReceiveScriptMessage:(WKScriptMessage *)arg1 replyHandler:(void (^)(NSDictionary *, NSString *))arg2;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(NSString *)arg2 rawMessage:(WKScriptMessage *)arg3;
- (void)webViewDidBecomeResponsible:(id <YYWebViewInterface>)arg1;
- (void)webViewDidBecomeUnresponsible:(id <YYWebViewInterface>)arg1;
- (void)webViewContentProcessDidTerminate:(id <YYWebViewInterface>)arg1;
- (void)webView:(id <YYWebViewInterface>)arg1 didFailLoadWithError:(NSError *)arg2 navigation:(WKNavigation *)arg3;
- (void)webViewDidFinishLoad:(id <YYWebViewInterface>)arg1 navigation:(WKNavigation *)arg2;
- (void)webViewDidCommitLoad:(id <YYWebViewInterface>)arg1 navigation:(WKNavigation *)arg2;
- (void)webViewDidReceiveNavigationResponseAndDecideResponsePolicy:(WKNavigationResponse *)arg1 andCompletion:(void (^)(long long))arg2;
- (void)webViewDidReceiveNavigationResponse:(WKNavigationResponse *)arg1 andGetIsCancelNavigation:(_Bool *)arg2;
- (void)webViewDidStartLoad:(id <YYWebViewInterface>)arg1 navigation:(WKNavigation *)arg2;
- (long long)webView:(id <YYWebViewInterface>)arg1 decidePolicyWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(WKNavigationAction *)arg5;
- (_Bool)webView:(id <YYWebViewInterface>)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(WKNavigationAction *)arg5;
@end

