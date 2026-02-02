//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <WebKit/WKWebView.h>

@class NSMutableDictionary, NSString, NSURLRequest, UIScrollView, UIView, YYWAWebViewScriptMessageHandler;
@protocol YYWAWebViewDelegate, YYWAWebViewSyncJSAPIDelegate, YYWebViewDelegate;

@interface YYWAWebView : WKWebView
{
    _Bool disablePreviewElement;
    _Bool _inputFocusing;
    _Bool _ignoreSafeAreaChange;
    _Bool _isHitDisableContextMenuText;
    _Bool _bDisablePopup;
    _Bool _isTestHitWKContentView;
    _Bool _isHitTongCeng;
    _Bool _isHitSelectableText;
    id <YYWebViewDelegate> wvDelegate;
    id <YYWAWebViewDelegate> _nativeDelegate;
    id <YYWAWebViewSyncJSAPIDelegate> _syncJSApiDelegate;
    YYWAWebViewScriptMessageHandler *_scriptMessageHandler;
    UIView *_wkHitView;
    NSMutableDictionary *_gestureEnableDic;
    struct UIEdgeInsets _oldSafeArea;
}

+ (id)processPool;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets oldSafeArea; // @synthesize oldSafeArea=_oldSafeArea;
@property(retain, nonatomic) NSMutableDictionary *gestureEnableDic; // @synthesize gestureEnableDic=_gestureEnableDic;
@property(retain, nonatomic) UIView *wkHitView; // @synthesize wkHitView=_wkHitView;
@property(nonatomic) _Bool isHitSelectableText; // @synthesize isHitSelectableText=_isHitSelectableText;
@property(nonatomic) _Bool isHitTongCeng; // @synthesize isHitTongCeng=_isHitTongCeng;
@property(nonatomic) _Bool isTestHitWKContentView; // @synthesize isTestHitWKContentView=_isTestHitWKContentView;
@property(retain, nonatomic) YYWAWebViewScriptMessageHandler *scriptMessageHandler; // @synthesize scriptMessageHandler=_scriptMessageHandler;
@property(nonatomic) _Bool bDisablePopup; // @synthesize bDisablePopup=_bDisablePopup;
@property(nonatomic) _Bool isHitDisableContextMenuText; // @synthesize isHitDisableContextMenuText=_isHitDisableContextMenuText;
@property(nonatomic) _Bool ignoreSafeAreaChange; // @synthesize ignoreSafeAreaChange=_ignoreSafeAreaChange;
@property(nonatomic) _Bool inputFocusing; // @synthesize inputFocusing=_inputFocusing;
@property(nonatomic) __weak id <YYWAWebViewSyncJSAPIDelegate> syncJSApiDelegate; // @synthesize syncJSApiDelegate=_syncJSApiDelegate;
@property(nonatomic) __weak id <YYWAWebViewDelegate> nativeDelegate; // @synthesize nativeDelegate=_nativeDelegate;
@property(nonatomic) _Bool disablePreviewElement; // @synthesize disablePreviewElement;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate; // @synthesize wvDelegate;
- (void)safeAreaInsetsDidChange;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)onTongCengChangedScrollView:(id)arg1;
- (void)delayTongCengChangedScrollView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitWKWebNativeTest:(id)arg1 point:(struct CGPoint)arg2 withEvent:(id)arg3;
- (_Bool)becomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)LoadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)LoadRequest:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_webViewWebProcessDidBecomeResponsive:(id)arg1;
- (void)_webViewWebProcessDidBecomeUnresponsive:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (long long)wkNavigationTypeToYYWebViewNavigationType:(long long)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)makeAllowDecision:(CDUnknownBlockType)arg1;
- (void)enableJavaScriptPopup:(_Bool)arg1;
- (void)evaluateJavaScriptFromString:(id)arg1 overwriteReturnValue:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)evaluateJavaScriptFromString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSURLRequest *request;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)configCustomUserAgent;
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

