//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAccountBaseControlLogic, WCAccountManualAuthControlLogic, WCPlayLiveWithoutLoginControlLogic;

@interface WCAccountMainLoginControlLogic
{
    WCAccountBaseControlLogic *m_subFBLogic;
    WCAccountBaseControlLogic *m_subAppleLogic;
    WCAccountBaseControlLogic *m_subPasskeyLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    WCPlayLiveWithoutLoginControlLogic *m_test;
    unsigned int m_uiCurrentLoginType;
}

- (void).cxx_destruct;
- (void)onMainLoginUseBothDevice;
- (void)onMainLoginPasskeyConnectWithAutoLogin:(_Bool)arg1;
- (void)onMainLoginAppleConnect;
- (void)onMainLoginFacebookConnect;
- (void)onMainLoginProblem;
- (void)onMainLoginGoToFeedback;
- (void)onMainLoginGoToFreeze;
- (void)onMainLoginGoToHelpCenter;
- (void)onMainLoginGotoSecurityCenter;
- (void)onMainLoginBack;
- (void)onMainLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onMainLoginNext:(id)arg1 phoneNumber:(id)arg2;
- (_Bool)shouldShowBackBtnForMainLogin;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)loginAccount:(_Bool)arg1 data:(id)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (_Bool)handleDebugCommand:(id)arg1;
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

