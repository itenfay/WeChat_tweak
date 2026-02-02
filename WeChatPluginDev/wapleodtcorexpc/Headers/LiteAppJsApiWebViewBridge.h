//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WebviewJSEventHandlerFacade;

@interface LiteAppJsApiWebViewBridge
{
    NSString *_errorMsg;
    WebviewJSEventHandlerFacade *_jsEventHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WebviewJSEventHandlerFacade *jsEventHandler; // @synthesize jsEventHandler=_jsEventHandler;
- (void)callbackWithId:(id)arg1 callback:(id)arg2 params:(id)arg3;
- (id)webviewController;
- (id)GetCurrentWebviewViewController;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

