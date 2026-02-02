//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <WebKit/WKWebView.h>

@class NSMutableArray, NSString, NSURLRequest, UIScrollView, YYWKWebViewScriptMessageHandler, YYWKWebViewScriptMessageReplyHandler;
@protocol YYWebViewDelegate;

@interface YYBaseWebView : WKWebView
{
    _Bool disablePreviewElement;
    _Bool _bDisablePopup;
    _Bool _hasCheckLocalStorageAlive;
    _Bool _didCheckLocalStorageAlive;
    _Bool _needReportLocalStorageRecovery;
    id <YYWebViewDelegate> wvDelegate;
    YYWKWebViewScriptMessageHandler *_scriptMessageHandler;
    YYWKWebViewScriptMessageReplyHandler *_scriptMessageReplyHandler;
    NSMutableArray *_customScriptHandlerArray;
    long long _enableCheckLocalStorageAliveType;
    unsigned long long _checkAliveTs;
}

+ (id)processPool;
- (void).cxx_destruct;
@property(nonatomic) _Bool needReportLocalStorageRecovery; // @synthesize needReportLocalStorageRecovery=_needReportLocalStorageRecovery;
@property(nonatomic) _Bool didCheckLocalStorageAlive; // @synthesize didCheckLocalStorageAlive=_didCheckLocalStorageAlive;
@property(nonatomic) _Bool hasCheckLocalStorageAlive; // @synthesize hasCheckLocalStorageAlive=_hasCheckLocalStorageAlive;
@property(nonatomic) unsigned long long checkAliveTs; // @synthesize checkAliveTs=_checkAliveTs;
@property(nonatomic) long long enableCheckLocalStorageAliveType; // @synthesize enableCheckLocalStorageAliveType=_enableCheckLocalStorageAliveType;
@property(retain, nonatomic) NSMutableArray *customScriptHandlerArray; // @synthesize customScriptHandlerArray=_customScriptHandlerArray;
@property(retain, nonatomic) YYWKWebViewScriptMessageReplyHandler *scriptMessageReplyHandler; // @synthesize scriptMessageReplyHandler=_scriptMessageReplyHandler;
@property(retain, nonatomic) YYWKWebViewScriptMessageHandler *scriptMessageHandler; // @synthesize scriptMessageHandler=_scriptMessageHandler;
@property(nonatomic) _Bool bDisablePopup; // @synthesize bDisablePopup=_bDisablePopup;
@property(nonatomic) _Bool disablePreviewElement; // @synthesize disablePreviewElement;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate; // @synthesize wvDelegate;
- (void)checkNeedReportXPCIssue;
- (void)setNeedReportXPCRecovery;
- (void)checkLocalStorageApiAlive;
- (void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1;
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)webView:(id)arg1 navigationResponse:(id)arg2 didBecomeDownload:(id)arg3;
- (void)webView:(id)arg1 navigationAction:(id)arg2 didBecomeDownload:(id)arg3;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (id)reload;
- (void)LoadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)LoadRequest:(id)arg1;
- (void)addScriptMessageHandlerName:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (_Bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (long long)wkNavigationTypeToYYWebViewNavigationType:(long long)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)makeDownloadDecision:(CDUnknownBlockType)arg1;
- (void)makeAllowDecision:(CDUnknownBlockType)arg1;
- (id)currentProcessPool;
- (void)enableJavaScriptPopup:(_Bool)arg1;
- (void)evaluateJavaScriptFromString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSURLRequest *request;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configurationWillCreate:(id)arg1;
- (id)defaultConfigurationWithPreInjectJSStr:(id)arg1 hookJSStr:(id)arg2 arrCookies:(id)arg3;

// Remaining properties
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;

@end

