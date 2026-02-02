//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface WebviewJSEventHandler_secureTunnel
{
    NSMutableSet *logics;
}

- (void).cxx_destruct;
- (void)onSecureTunnelLogicFail:(id)arg1 from:(id)arg2;
- (void)onSecureTunnelLogicSuccess:(id)arg1 from:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (_Bool)inputValidate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

