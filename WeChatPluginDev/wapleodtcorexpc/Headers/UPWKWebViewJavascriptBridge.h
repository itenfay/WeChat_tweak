//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UPWebViewJavascriptBridgeBase, WKWebView;
@protocol WKNavigationDelegate;

@interface UPWKWebViewJavascriptBridge : NSObject
{
    WKWebView *_webView;
    id <WKNavigationDelegate> _webViewDelegate;
    long long _uniqueId;
    UPWebViewJavascriptBridgeBase *_base;
}

+ (id)bridgeForWebView:(id)arg1;
+ (void)enableLogging;
- (void).cxx_destruct;
- (id)_evaluateJavascript:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)WKFlushMessageQueue;
- (void)_setupInstance:(id)arg1;
- (void)dealloc;
- (void)disableJavscriptAlertBoxSafetyTimeout;
- (void)setWebViewDelegate:(id)arg1;
- (void)reset;
- (void)removeHandler:(id)arg1;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1;
- (void)send:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)send:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

