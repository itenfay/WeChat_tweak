//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSNumber, NSString, PasswordLogic, WCAccountBindPhoneControlLogic;

@interface PreEnterShowGlobalAlertStep
{
    PasswordLogic *m_changePasswdLogic;
    WCAccountBindPhoneControlLogic *m_changePhoneLogic;
    NSString *m_title;
    NSString *m_msg;
    NSString *m_nsID;
    NSMutableArray *m_arrBtns;
    NSNumber *m_autoSelectBtnIdxNum;
}

- (void).cxx_destruct;
- (void)onTabBarRootViewControllerDidAppear;
- (void)showSetPasswordView:(id)arg1;
- (void)passwordLogicPause:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)passwordLogicCancel:(id)arg1;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)verifyPasswordFail:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)startChangePassward;
- (void)doneEditEmail;
- (void)cancelEditEmail;
- (void)showModifyEmail;
- (void)showScan;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)showChangePhoneForSetWxid;
- (void)showChangePhone;
- (void)showWebView:(id)arg1;
- (void)globalAlertReport:(id)arg1 Btn:(id)arg2;
- (CDUnknownBlockType)handlerForBtnDic:(id)arg1;
- (void)showGlobalAlert;
- (void)parseGlobalAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

