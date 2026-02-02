//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, NSURLRequest, UIScrollView, YYQBWebViewScriptMessageHandler;
@protocol YYWebViewDelegate;

@interface YYQBWebView
{
    _Bool disablePreviewElement;
    _Bool _bDisablePopup;
    id <YYWebViewDelegate> wvDelegate;
    YYQBWebViewScriptMessageHandler *_scriptMessageHandler;
    NSArray *_customScriptHandlerArray;
}

+ (void)checkIfCurrentUserNeedNewProcessPool:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *customScriptHandlerArray; // @synthesize customScriptHandlerArray=_customScriptHandlerArray;
@property(retain, nonatomic) YYQBWebViewScriptMessageHandler *scriptMessageHandler; // @synthesize scriptMessageHandler=_scriptMessageHandler;
@property(nonatomic) _Bool bDisablePopup; // @synthesize bDisablePopup=_bDisablePopup;
@property(nonatomic) _Bool disablePreviewElement; // @synthesize disablePreviewElement;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate; // @synthesize wvDelegate;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)addScriptMessageHandlerName:(id)arg1;
- (void)addDebugInfoView;
- (void)LoadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)LoadRequest:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (_Bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)canShowAlertInCurrentWebViewController;
- (void)showTipView:(id)arg1;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (long long)wkNavigationTypeToYYWebViewNavigationType:(long long)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)enableJavaScriptPopup:(_Bool)arg1;
- (void)evaluateJavaScriptFromString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSURLRequest *request;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 customScript:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)defaultConfigurationWithPreInjectJSStr:(id)arg1;

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

