//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayPayPwdViewController, WCPayResetPwdByTokenCgi;

@interface WebviewJSEventHandler_setWCPayPassword
{
    NSString *_token;
    WCPayPayPwdViewController *_pwdVC;
    WCPayResetPwdByTokenCgi *_resetCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayResetPwdByTokenCgi *resetCgi; // @synthesize resetCgi=_resetCgi;
@property(retain, nonatomic) WCPayPayPwdViewController *pwdVC; // @synthesize pwdVC=_pwdVC;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void)resetPwdByTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)resetPwdByTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)SetPayPwdNext:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

