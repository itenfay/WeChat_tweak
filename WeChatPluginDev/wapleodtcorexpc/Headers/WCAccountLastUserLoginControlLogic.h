//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, VoicePrintVerifyLogic, WCAccountBaseControlLogic, WCAccountLoginLastUserViewController, WCAccountManualAuthControlLogic, WCAccountVerifyCodeHandler;

@interface WCAccountLastUserLoginControlLogic
{
    _Bool m_bFromLogout;
    unsigned int m_uiPwdErrCount;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    WCAccountBaseControlLogic *m_subPasskeyLogic;
    unsigned int m_uiCurrentLoginType;
    WCAccountVerifyCodeHandler *m_verifyCodeHandler;
    WCAccountLoginLastUserViewController *m_lastUserVerifyVC;
    VoicePrintVerifyLogic *_voicePrintVerifyLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoicePrintVerifyLogic *voicePrintVerifyLogic; // @synthesize voicePrintVerifyLogic=_voicePrintVerifyLogic;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)checkHavePwd;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (_Bool)onErrorHandleLogicHandleGoNextWithParams:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)onErrorHandleLogicDone;
- (void)onPhoneVerifyUpNext;
- (void)onPhoneVerifyUpBack;
- (void)onLastUserUseBothDevice;
- (void)onLastUserChangeAccount:(id)arg1;
- (void)onLastUserLoginByQRCode;
- (void)onLastUserVoicePrintLogin:(id)arg1;
- (void)onLastUserGoToFeedback;
- (void)onLastUserGoToFreeze:(id)arg1;
- (void)onLastUserGoToHelpCenter:(id)arg1;
- (void)onLastUserGoToSecurityCenter:(id)arg1;
- (void)onLastUserProblem:(id)arg1;
- (void)onLastUserRegister;
- (void)onLastPasskeyLogin:(_Bool)arg1;
- (void)onLastUserLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onLastUserVerifyNextWithVerifyCode:(id)arg1;
- (void)onLastUserVerifyFirstTime:(_Bool)arg1;
- (void)onLastUserBack;
- (void)onHandlerCheckLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(id)arg1;
- (void)loginAccount:(_Bool)arg1 data:(id)arg2;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)pause;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

