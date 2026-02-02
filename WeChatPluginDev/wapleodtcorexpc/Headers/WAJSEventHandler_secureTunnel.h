//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayJSApiSecureTunnelControlLogic;

@interface WAJSEventHandler_secureTunnel
{
    WCPayJSApiSecureTunnelControlLogic *logic;
}

- (void).cxx_destruct;
- (void)onSecureTunnelLogicFail:(id)arg1 from:(id)arg2;
- (void)onSecureTunnelLogicSuccess:(id)arg1 from:(id)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

