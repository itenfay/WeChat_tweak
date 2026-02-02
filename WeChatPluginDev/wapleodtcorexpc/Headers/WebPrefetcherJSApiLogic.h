//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WKWebView, WebviewJSEventHandlerFacade;
@protocol WebPrefetcherJSApiLogicDelegate, YYWebViewInterface;

@interface WebPrefetcherJSApiLogic : NSObject
{
    WKWebView<YYWebViewInterface> *_webView;
    id <WebPrefetcherJSApiLogicDelegate> _delegate;
    WebviewJSEventHandlerFacade *_jsEventHandler;
    NSMutableDictionary *_functionMap;
    NSMutableDictionary *_jsApiDefMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *jsApiDefMap; // @synthesize jsApiDefMap=_jsApiDefMap;
@property(retain, nonatomic) NSMutableDictionary *functionMap; // @synthesize functionMap=_functionMap;
@property(retain, nonatomic) WebviewJSEventHandlerFacade *jsEventHandler; // @synthesize jsEventHandler=_jsEventHandler;
@property(nonatomic) __weak id <WebPrefetcherJSApiLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WKWebView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
- (id)GetCurrentWebviewViewController;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)webviewController;
- (id)getWebViewController;
- (void)sendMessageToJSBridge:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)callbackWithId:(id)arg1 result:(id)arg2;
- (void)callbackErrorWithId:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
- (void)doInvokeJsApi:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)handleJSApiDispatchMessage:(id)arg1;
- (void)injectPrefecherJSBridge;
- (void)registerPrefetcherJsApi;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

