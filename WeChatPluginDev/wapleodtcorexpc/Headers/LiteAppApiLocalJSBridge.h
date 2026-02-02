//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSWebSearchMgr, LocalJSEventHandler_BaseEvent, MMContext, NSString;

@interface LiteAppApiLocalJSBridge
{
    MMContext *m_context;
    LocalJSEventHandler_BaseEvent *_handler;
    FTSWebSearchMgr *_webSearchMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(retain, nonatomic) LocalJSEventHandler_BaseEvent *handler; // @synthesize handler=_handler;
- (id)webView;
- (id)getWebViewOwner;
- (unsigned long long)getLocalJSBusinessType;
- (void)handlerEndWithEvent:(id)arg1 handler:(id)arg2 result:(id)arg3;
- (void)sendEvent:(id)arg1 handler:(id)arg2 result:(id)arg3;
- (void)eventEndWithHandler:(id)arg1 result:(id)arg2;
- (id)makeNetworkFailParam:(_Bool)arg1;
- (id)makeEmptyJSONResultParam:(_Bool)arg1;
- (void)onWebSearchDataFail:(id)arg1;
- (void)onWebSearchDataChanged:(id)arg1;
- (void)onSearchRecmdDataFail:(id)arg1;
- (void)onSearchRecmdDataSuccess:(id)arg1;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

