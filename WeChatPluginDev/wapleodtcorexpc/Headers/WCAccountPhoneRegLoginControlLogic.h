//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountBindPhoneForRegCGI, WCAccountGatewayMobileHandler, WCAccountManualAuthControlLogic, WCAccountRegisterControlLogic, WCPrivacyPolicyControlLogic;

@interface WCAccountPhoneRegLoginControlLogic
{
    unsigned int m_uiABtest;
    unsigned long long m_eRegStyleStatus;
    unsigned int m_uiTryCount;
    _Bool m_bNeedSetPwd;
    unsigned int m_uiCheckVerifyUpCount;
    NSString *m_nsDefaultISO;
    _Bool m_isDefaultEU;
    WCAccountBindPhoneForRegCGI *m_modelLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    WCAccountRegisterControlLogic *m_registerLogic;
    WCPrivacyPolicyControlLogic *_privacyPolicyLogic;
    CDUnknownBlockType privacyPolicyDoneBlock;
    WCAccountGatewayMobileHandler *_gatewayMobileHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountGatewayMobileHandler *gatewayMobileHandler; // @synthesize gatewayMobileHandler=_gatewayMobileHandler;
- (void)resume;
- (void)pause;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (void)onErrorHandleLogicDone;
- (void)onPostCheckRegState:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onCheckRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetRegVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)loginForPhone;
- (void)jumpToManulLoginControlMgrToRegister;
- (void)onGetVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onCheckRegPhoneNumberStatus:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (id)getRegSessionID;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onPhoneVerifyUpNext;
- (void)onPhoneVerifyUpBack;
- (void)onRegByOldPhoneLogin;
- (void)onRegByOldPhoneContinueReg;
- (void)onRegByOldPhoneBack;
- (void)checkHavePwd;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (void)onVoiceVerifyBack:(id)arg1;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyVoice;
- (void)onPhoneVerifyBack:(id)arg1;
- (void)delaySetPrivacyPolicyLogicNil;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)showPrivacyPolicyWithCC:(id)arg1 countryIsoCode:(id)arg2 phoneNum:(id)arg3 isAge:(_Bool)arg4 doneBlock:(CDUnknownBlockType)arg5;
- (void)onRegNextWith:(id)arg1 countryIsoCode:(id)arg2 phoneNum:(id)arg3 pwd:(id)arg4;
- (_Bool)onRegNextWithISO:(id)arg1 isDefault:(_Bool)arg2;
- (void)onRegNextWith:(id)arg1 headImage:(id)arg2;
- (void)onRegBack;
- (void)onRegNickNameBack;
- (_Bool)isEURegion;
- (unsigned long long)onRegStatus;
- (void)onGatewayViewControllerUseOtherPhone;
- (void)onGatewayViewControllerGoNext;
- (void)onGatewayViewControllerQuit:(id)arg1;
- (void)doRegAccount;
- (void)preCheckReg;
- (void)loginAccount;
- (void)doPostCheck;
- (void)getVerifyCode;
- (_Bool)checkPhoneNumberStatus:(unsigned int)arg1;
- (_Bool)checkVerifyCode:(id)arg1;
- (_Bool)getVoideVerifyCodeReady:(id)arg1;
- (_Bool)getVerifyCodeReady;
- (id)getRegPhoneNumber;
- (void)cancelAllEvent;
- (void)startLogic;
- (void)reportABTestStatus:(unsigned int)arg1;
- (unsigned int)getCCType;
- (id)initWithData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

