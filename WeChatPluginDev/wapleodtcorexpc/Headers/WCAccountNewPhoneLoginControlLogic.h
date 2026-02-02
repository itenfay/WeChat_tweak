//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PhoneNumberFormatLogic, WCAccountManualAuthControlLogic, WCAccountNewPhoneVerifyViewController, WCAccountVerifyCodeHandler;

@interface WCAccountNewPhoneLoginControlLogic
{
    WCAccountVerifyCodeHandler *_verifyCodeHandler;
    WCAccountManualAuthControlLogic *_manualAuthLogic;
    PhoneNumberFormatLogic *_phoneNumFormatter;
    WCAccountNewPhoneVerifyViewController *_currentVC;
}

- (void).cxx_destruct;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)checkHavePwd;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)onNewPhoneVerifyProblem;
- (void)onNewPhoneVerifyGotoFeedback;
- (void)onNewPhoneVerifyGotoSecurityCenter;
- (void)onNewPhoneVerifyNextWithPwd:(id)arg1;
- (void)onNewPhoneVerifyNextWithVerifyCode:(id)arg1;
- (void)onNewPhoneVerifyFirstTime:(_Bool)arg1;
- (void)onNewPhoneVerifyBack;
- (_Bool)onErrorHandleLogicHandleGoNextWithParams:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)onErrorHandleLogicDone;
- (void)onHandlerCheckLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(id)arg1;
- (void)onPhoneVerifyUpNext;
- (void)onPhoneVerifyUpBack;
- (void)loginAccount;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

