//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountForgetPasswordControlLogic;

@interface MMForgetPasswordHandler
{
    WCAccountForgetPasswordControlLogic *_forgetPwdLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountForgetPasswordControlLogic *forgetPwdLogic; // @synthesize forgetPwdLogic=_forgetPwdLogic;
- (void)onWCAccountForgetPasswordControlLogic:(id)arg1 continueWithTicket:(id)arg2 ticketType:(unsigned int)arg3 handled:(_Bool *)arg4;
- (void)onWCAccountForgetPasswordControlLogicStop:(id)arg1;
- (void)handleCommonApiWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

