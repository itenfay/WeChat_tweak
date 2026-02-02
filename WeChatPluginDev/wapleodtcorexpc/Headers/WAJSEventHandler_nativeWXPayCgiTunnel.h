//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayNativeCgiTunnelImpl;

@interface WAJSEventHandler_nativeWXPayCgiTunnel
{
    WCPayNativeCgiTunnelImpl *_cgiLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNativeCgiTunnelImpl *cgiLogic; // @synthesize cgiLogic=_cgiLogic;
- (void)onNativeCgiTunnelFail:(id)arg1;
- (void)onNativeCgiTunnelSuccess:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (_Bool)checkIfParamValid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

