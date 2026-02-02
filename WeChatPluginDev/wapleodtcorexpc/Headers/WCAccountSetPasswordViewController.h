//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PasswordLogic, RichTextView, UIButton, WCAccountForgetPasswordControlLogic, WCAccountTextFieldItem, WCBaseKeyboardToolBar;
@protocol WCAccountSetPasswordViewControllerDelegate;

@interface WCAccountSetPasswordViewController
{
    id <WCAccountSetPasswordViewControllerDelegate> m_delegate;
    PasswordLogic *m_setPasswdLogic;
    PasswordLogic *m_verifyPasswdLogic;
    WCBaseKeyboardToolBar *m_keyboardBar;
    WCAccountTextFieldItem *m_textFieldVerifyPwdItem;
    WCAccountTextFieldItem *m_textFieldFirstPwdItem;
    WCAccountTextFieldItem *m_textFieldSecondPwdItem;
    RichTextView *m_bottomView;
    UIButton *m_doneBtn;
    UIButton *m_showBtn;
    NSString *m_nsHeaderTitle;
    NSString *m_nsHeaderTip;
    NSString *m_nsTicket;
    unsigned int m_uiTicketType;
    _Bool m_bShowTip;
    _Bool m_bShow;
    unsigned long long m_scene;
    WCAccountForgetPasswordControlLogic *_forgetPwdLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAccountForgetPasswordControlLogic *forgetPwdLogic; // @synthesize forgetPwdLogic=_forgetPwdLogic;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWCAccountForgetPasswordControlLogic:(id)arg1 continueWithTicket:(id)arg2 ticketType:(unsigned int)arg3 handled:(_Bool *)arg4;
- (void)stopLoading;
- (void)startLoading;
- (void)doChangePassword;
- (void)doVerifyPassword;
- (void)unknownFail:(id)arg1;
- (void)setPasswordFail:(id)arg1;
- (void)setPasswordOK:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)textFieldTextDidChange:(id)arg1;
- (void)checkEnable;
- (void)onShowBtnClick;
- (void)onSetPasswordBack;
- (void)useForgetPasswordSetting;
- (void)updateView;
- (_Bool)useTableView;
- (void)viewDidLoad;
- (id)init;
- (void)onSecondNext;
- (void)setDelegate:(id)arg1;
- (void)setScene:(unsigned long long)arg1;
- (void)setShowTip:(_Bool)arg1;
- (void)setTicketType:(unsigned int)arg1;
- (void)setTicket:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (_Bool)WCBaseInfoItemShouldBeginEditing:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (_Bool)isSetScene;
- (_Bool)isChangeScene;
- (_Bool)isVerifyScene;
- (_Bool)isFromServerControl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

