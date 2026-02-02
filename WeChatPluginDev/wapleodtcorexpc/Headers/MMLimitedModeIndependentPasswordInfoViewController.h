//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FixTitleColorButton, MMLimitedModeSetPasswordLogic, MMTableViewInfo, MMUILabel, NSString, UITableViewCell, UITextView, WCTableViewNormalCellManager;

@interface MMLimitedModeIndependentPasswordInfoViewController
{
    MMTableViewInfo *m_tableViewInfo;
    UITextView *m_tfInputName;
    UITextView *m_tfInputIdCard;
    FixTitleColorButton *m_acceptBtn;
    double m_fKeyboardHeight;
    MMUILabel *m_inputNameTitleLabel;
    MMUILabel *m_inputIdCardTitleLabel;
    UITableViewCell *m_inputNameCell;
    UITableViewCell *m_inputIdCardCell;
    WCTableViewNormalCellManager *m_inputNameCellInfo;
    WCTableViewNormalCellManager *m_inputIdCardCellInfo;
    MMLimitedModeSetPasswordLogic *m_setPasswordLogic;
    _Bool m_isShowErrorTip;
    unsigned int _m_setLimitedModePwdType;
    NSString *_m_inputPassword;
    long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int m_setLimitedModePwdType; // @synthesize m_setLimitedModePwdType=_m_setLimitedModePwdType;
@property(retain, nonatomic) NSString *m_inputPassword; // @synthesize m_inputPassword=_m_inputPassword;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)arg1 ticket:(id)arg2 success:(_Bool)arg3 errMsg:(id)arg4;
- (void)restAcceptBtnWithKeyboardWillShow:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)checkAcceptBtnBottomLocal;
- (void)OnReturn;
- (void)didAccept;
- (_Bool)checkEdit;
- (_Bool)idCardNumberAgeUnder18:(id)arg1;
- (_Bool)isValidIdCardNumber:(id)arg1;
- (void)buttonStopLoading;
- (void)buttonStartLoading;
- (double)getkeyboardShowAcceptBtnBottom;
- (double)getkeyboardHideAcceptBtnBottom;
- (void)initAcceptBtn;
- (void)initInputTitleLabel;
- (void)initInputIdCardEdit;
- (void)initInputNameEdit;
- (void)fixIdCardCellHeight;
- (void)fixNameCellHeight;
- (void)updateInputTitleLabelSize;
- (void)makeInputIdCardEdit:(id)arg1;
- (void)makeInputNameEdit:(id)arg1;
- (id)getIndependentPasswordInfoHeadView;
- (void)reloadTableViewInfo;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)initTableView;
- (void)resetRightBarButton;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

