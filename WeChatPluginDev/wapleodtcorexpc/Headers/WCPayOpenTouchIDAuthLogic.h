//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayBioPayV2GetChallengeCgi, WCPayBioPayV2UpdateAuthKeyCgi;
@protocol WCPayOpenTouchIDAuthLogicDelegate;

@interface WCPayOpenTouchIDAuthLogic
{
    unsigned long long _action;
    id <WCPayOpenTouchIDAuthLogicDelegate> _m_delegate;
    WCPayBioPayV2UpdateAuthKeyCgi *_updateAuthKeyCgi;
    WCPayBioPayV2GetChallengeCgi *_getChallengeCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBioPayV2GetChallengeCgi *getChallengeCgi; // @synthesize getChallengeCgi=_getChallengeCgi;
@property(retain, nonatomic) WCPayBioPayV2UpdateAuthKeyCgi *updateAuthKeyCgi; // @synthesize updateAuthKeyCgi=_updateAuthKeyCgi;
@property(nonatomic) __weak id <WCPayOpenTouchIDAuthLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (void)callFailDelegate;
- (void)callOkDelegate;
- (void)onWCPayBioPayV2GetChallengeCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayBioPayV2GetChallengeCgiResponseOK:(id)arg1;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiResponseOK:(id)arg1;
- (void)onAlertViewCancel;
- (void)onAlertViewIKnow;
- (void)verifyPassword;
- (void)alertViewClickConfirm;
- (void)alertViewClickCancel;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)showCloseAlert;
- (void)openPWDVC;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)handleError:(id)arg1 errorCode:(long long)arg2;
- (void)showErrorFromManagePage:(id)arg1;
- (void)showCommonError:(id)arg1 errorCode:(long long)arg2 dimissView:(_Bool)arg3;
- (void)openTouchPay:(_Bool)arg1 msgString:(id)arg2 signature:(id)arg3;
- (void)openTouchPay;
- (void)refreshLocalDataFromServerWithState:(_Bool)arg1;
- (void)stopLogic;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

