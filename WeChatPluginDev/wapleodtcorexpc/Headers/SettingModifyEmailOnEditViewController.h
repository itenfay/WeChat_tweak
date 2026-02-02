//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAcceptAgreementCommonHeadView, MMTableView, MMTableViewInfo, MMUILabel, MMUITextField, UIButton;

@interface SettingModifyEmailOnEditViewController
{
    double m_fKeyboardHeight;
    _Bool _hadVerifyEmail;
    MMTableView *m_tableView;
    MMTableViewInfo *m_tableViewInfo;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    CDUnknownBlockType _onBindEmail;
    MMUILabel *_emailTitleLabel;
    MMUITextField *_emailTextField;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hadVerifyEmail; // @synthesize hadVerifyEmail=_hadVerifyEmail;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUITextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(retain, nonatomic) MMUILabel *emailTitleLabel; // @synthesize emailTitleLabel=_emailTitleLabel;
@property(copy, nonatomic) CDUnknownBlockType onBindEmail; // @synthesize onBindEmail=_onBindEmail;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)layoutConfirmButton;
- (void)makeEmailEdit:(id)arg1;
- (id)getHeadTitle;
- (id)genHeaderView;
- (void)reloadTableData;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onClickConfirmButton;
- (void)onTextFieldChange;
- (void)onTextFieldHideKeyBoard;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithEmailLogic:(id)arg1;

@end

