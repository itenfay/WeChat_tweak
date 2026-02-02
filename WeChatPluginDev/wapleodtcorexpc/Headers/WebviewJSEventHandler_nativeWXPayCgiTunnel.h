//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCPayNativeCgiTunnelImpl;

@interface WebviewJSEventHandler_nativeWXPayCgiTunnel
{
    WCPayNativeCgiTunnelImpl *_cgiLogic;
    JSEvent *_jsEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
@property(retain, nonatomic) WCPayNativeCgiTunnelImpl *cgiLogic; // @synthesize cgiLogic=_cgiLogic;
- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
- (void)onNativeCgiTunnelFail:(id)arg1;
- (void)onNativeCgiTunnelSuccess:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (_Bool)checkIfParamValid:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

