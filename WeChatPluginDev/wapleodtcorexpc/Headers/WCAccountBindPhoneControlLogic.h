//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCAccountBindPhoneControlLogicDelegate;

@interface WCAccountBindPhoneControlLogic
{
    unsigned long long m_scene;
    NSString *m_nsOldPhone;
    id <WCAccountBindPhoneControlLogicDelegate> m_delegate;
    _Bool m_stopLogicIfCancelSetAlias;
    NSString *m_policyAgreementTicket;
    NSString *m_verifyTicket;
}

- (void).cxx_destruct;
- (void)onErrorHandleLogicDoneWithPolicyListIsAgreed:(_Bool)arg1 policyAgreementTicket:(id)arg2;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (_Bool)onErrorHandleLogicHandleGoNextWithParams:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)onErrorHandleLogicDone;
- (id)getViewController;
- (_Bool)onSettingModifyAliasQuitNakeWxProtect;
- (void)onSettingModifyAliasSuccess;
- (void)updateLastLoginName;
- (_Bool)isFromVerify;
- (_Bool)isFromBind;
- (_Bool)isFromChange;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callCheckOK;
- (void)bindPhoneReturn:(id)arg1;
- (_Bool)onHandleError:(id)arg1;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (void)onVoiceVerifyBack:(id)arg1;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyVoice;
- (void)onPhoneVerifyBack:(id)arg1;
- (void)doFillPhoneNext;
- (void)onFillPhoneNext:(id)arg1 countryIsoCode:(id)arg2 phoneNum:(id)arg3;
- (void)onFillPhoneBack:(id)arg1;
- (void)showModifyAliasViewControllerWithAnimated:(_Bool)arg1;
- (void)showBindSuccessViewWithNeedRestart:(_Bool)arg1;
- (_Bool)startBindOpMobileRequest:(id)arg1;
- (_Bool)forceTakeOverPhone;
- (_Bool)checkVerifyCode:(id)arg1;
- (_Bool)getVoideVerifyCodeReady:(id)arg1;
- (_Bool)getVerifyCodeReady;
- (unsigned int)getCheckOpcode;
- (unsigned int)getReadyOpcode;
- (id)getFullPhoneNum;
- (void)cancelAllEvent;
- (void)startLogic;
- (void)startVerifylogic;
- (void)startChangelogic:(id)arg1;
- (void)startLogicToSetAlias;
- (void)startlogicFromServerGuidanceWithRestrictiveISOContryCode:(id)arg1;
- (void)dealloc;
- (void)stopLogic;
- (void)setScene:(unsigned int)arg1;
- (id)getData;
- (id)initWithData:(id)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

