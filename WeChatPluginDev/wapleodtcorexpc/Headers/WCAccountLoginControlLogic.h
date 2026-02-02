//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPlayLiveWithoutLoginControlLogic;

@interface WCAccountLoginControlLogic
{
    WCPlayLiveWithoutLoginControlLogic *_m_playLiveWthioutLoginLoigc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayLiveWithoutLoginControlLogic *m_playLiveWthioutLoginLoigc; // @synthesize m_playLiveWthioutLoginLoigc=_m_playLiveWthioutLoginLoigc;
- (void)onOneClickPlayLiveWithoutLogin;
- (void)onOneClickLoginGoToHelpCenter;
- (void)onOneClickLoginGoToSecurityCenter;
- (void)onOneClickLoginProblem;
- (void)onOneClickLoginSwitchAccount;
- (void)onLoginByQRCodeWithOneClickDisconnect;
- (void)onLoginByQRCode;
- (void)onLoginByQQ;
- (void)onUseIPadOnly;
- (void)onUseBothDevice;
- (void)onFirstViewRegister;
- (void)onFirstViewLogin;
- (void)onSignMethodSwitch:(unsigned long long)arg1;
- (void)startRegisterLogic;
- (void)registerByApple;
- (void)registerByFacebook;
- (void)showRegisterPageSheet;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)stopLogic;
- (void)startIPhoneLoginLogic;
- (void)startIPadLoginLogic;
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

