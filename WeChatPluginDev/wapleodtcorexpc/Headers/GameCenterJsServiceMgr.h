//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterJsService, NSString;

@interface GameCenterJsServiceMgr
{
    GameCenterJsService *_jsService;
}

- (void).cxx_destruct;
- (void)processEventFromNative:(id)arg1 event:(id)arg2;
- (void)processCallbackFromNative:(id)arg1 callbackId:(id)arg2;
- (void)postMessageFromWebView:(id)arg1 message:(id)arg2;
- (void)dispatchJsServiceState:(id)arg1;
- (id)getJsServiceState;
- (_Bool)checkAndDestroyJsService;
- (void)destroy;
- (_Bool)checkAndDestroy;
- (void)stop;
- (void)create;
- (_Bool)canCreate;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

