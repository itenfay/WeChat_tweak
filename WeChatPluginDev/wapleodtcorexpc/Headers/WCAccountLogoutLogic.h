//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PasswordLogic, WCAccountBindPhoneControlLogic;
@protocol WCAccountLogoutLogicDelegate;

@interface WCAccountLogoutLogic
{
    PasswordLogic *m_checkPasswdLogic;
    WCAccountBindPhoneControlLogic *m_bindPhoneLogic;
    unsigned long long m_status;
    id <WCAccountLogoutLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAccountLogoutLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)checkNeedSetPasswd;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)finalQuit;
- (void)onLogoutCheckOK;
- (void)preFinalQuit;
- (void)quitInternal;
- (void)doNakedAcctProtect;
- (void)showNakedAcctProtectAlert;
- (void)startLogic:(unsigned long long)arg1;
- (_Bool)isForCheckSwitch;
- (_Bool)isForSwitch;
- (void)startLogout;
- (void)startCheckSwitch;
- (void)startSwitchToLogin;
- (void)startQuit:(id)arg1;
- (void)cancelLogout;
- (void)dealloc;
- (void)reportOpCode:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

