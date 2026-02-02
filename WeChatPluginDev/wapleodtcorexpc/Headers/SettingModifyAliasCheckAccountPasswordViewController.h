//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAcceptAgreementCommonHeadView, MMTableView, MMTableViewInfo, MMUILabel, MMUITextField, NSString, PasswordLogic, UIButton;
@protocol SettingModifyAliasViewControllerDelegate;

@interface SettingModifyAliasCheckAccountPasswordViewController
{
    UIButton *m_forgetPasswordButton;
    MMUITextField *m_tfPassword;
    MMUILabel *m_passwordTitleView;
    UIButton *m_makeSureBtn;
    double m_fKeyboardHeight;
    PasswordLogic *m_verifyPasswdLogic;
    NSString *m_setAliasPwdTicket;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    NSString *_m_checkCanSetAliasTicket;
    id <SettingModifyAliasViewControllerDelegate> _m_delegate;
    NSString *_m_ssesionID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_ssesionID; // @synthesize m_ssesionID=_m_ssesionID;
@property(nonatomic) __weak id <SettingModifyAliasViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_checkCanSetAliasTicket; // @synthesize m_checkCanSetAliasTicket=_m_checkCanSetAliasTicket;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (void)onSettingModifyAliasSuccess;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)onBackButtonClicked:(id)arg1;
- (void)doVerifyPassword;
- (void)OnMakeSureClick;
- (void)OnSettingAccountCheckForgetPassWord;
- (void)makePasswordEdit:(id)arg1;
- (id)genFooterView;
- (id)genHeaderView;
- (void)reloadTableData;
- (void)updateWordCount:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)restAcceptBtnWithKeyboardWillShow:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onPasswordHideKeyBoard;
- (void)onPasswordShowKeyBoard;
- (void)initPasswordEdit;
- (void)initMakeSureBtn;
- (void)initPasswordTitleView;
- (void)initForgetPasswordButton;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

