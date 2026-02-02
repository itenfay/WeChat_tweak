//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURLRequest;
@protocol WCCanvasJSLogicDelegate, YYWebViewDelegate;

@interface WCCanvasJSLogic
{
    _Bool _hasInjected;
    id <WCCanvasJSLogicDelegate> _delegate;
    id <YYWebViewDelegate> _wvDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate; // @synthesize wvDelegate=_wvDelegate;
@property(nonatomic) __weak id <WCCanvasJSLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasInjected; // @synthesize hasInjected=_hasInjected;
- (_Bool)dispatchJSEvent:(id)arg1 param:(id)arg2 callbackID:(id)arg3;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(id)arg5;
- (void)sendCallback:(id)arg1 ret:(int)arg2 error:(id)arg3 data:(id)arg4;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (unsigned long long)getLocalJSBusinessType;
- (id)initWithWebView:(id)arg1 wvDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURLRequest",?,R,N

@property(readonly) Class superclass;

@end

