//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WKWebView;
@protocol WSWebViewPluginableProtocol, YYWebViewInterface;

@interface LocalJSLogicBase
{
    WKWebView<YYWebViewInterface> *_webView;
    NSMutableArray *_authApiList;
    _Bool _bridgeCompleted;
    _Bool _webviewDidLoad;
    id <WSWebViewPluginableProtocol> _webViewOwner;
    NSMutableDictionary *_observedAPIBlocks;
    double _delayShowTimeForWebviewDidFinishLoad;
    NSMutableSet *_jsEvents;
    NSMutableArray *_cachedJSNotiArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cachedJSNotiArr; // @synthesize cachedJSNotiArr=_cachedJSNotiArr;
@property(retain, nonatomic) NSMutableSet *jsEvents; // @synthesize jsEvents=_jsEvents;
@property(nonatomic) double delayShowTimeForWebviewDidFinishLoad; // @synthesize delayShowTimeForWebviewDidFinishLoad=_delayShowTimeForWebviewDidFinishLoad;
@property(nonatomic) _Bool webviewDidLoad; // @synthesize webviewDidLoad=_webviewDidLoad;
@property(nonatomic) _Bool bridgeCompleted; // @synthesize bridgeCompleted=_bridgeCompleted;
@property(retain, nonatomic) NSMutableDictionary *observedAPIBlocks; // @synthesize observedAPIBlocks=_observedAPIBlocks;
@property(nonatomic) __weak id <WSWebViewPluginableProtocol> webViewOwner; // @synthesize webViewOwner=_webViewOwner;
- (void)sendEvent:(id)arg1 withParams:(id)arg2 sendAfterReady:(_Bool)arg3;
- (id)webView;
- (id)getWebViewOwner;
- (unsigned long long)getLocalJSBusinessType;
- (void)sendEvent:(id)arg1 handler:(id)arg2 result:(id)arg3;
- (void)eventEndWithHandler:(id)arg1 result:(id)arg2;
- (id)webview;
- (void)removeAllJSEvent;
- (_Bool)canUseClassHandleJSAPI:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)makeEmptyJSONResultParam:(_Bool)arg1;
- (void)ackWithCallBackID:(id)arg1 errorMsg:(id)arg2;
- (void)ackWithCallBackID:(id)arg1 withParams:(id)arg2;
- (id)getNetworkInfo;
- (_Bool)isOnDawangEnv;
- (void)handleJSApiFuncOfGetNetworkType:(id)arg1 withCallBackID:(id)arg2;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)reSetWebView:(id)arg1;
- (void)addAuthApiList:(id)arg1;
- (void)sendJSCBEventToJSBridge:(id)arg1 withCallBackID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendJSCBEventToJSBridge:(id)arg1 withCallBackID:(id)arg2;
- (void)dispatchEventHandler:(id)arg1 withParams:(id)arg2;
- (void)dispatchEventHandler:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)handleJSApiDispatchMessage:(id)arg1;
- (void)__sendEventToJSBridge:(id)arg1 params:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 delayIfNotBridged:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 delayIfNotBridged:(_Bool)arg3;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2;
- (void)onJsEvaluateError:(id)arg1;
- (void)sendMessageToJSBridge:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)injectWeixinJSBridge;
- (void)onSysBridgeCompleted;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (void)dispatchBlockHandlerFor:(id)arg1 params:(id)arg2 callBackID:(id)arg3;
- (void)observeApi:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

