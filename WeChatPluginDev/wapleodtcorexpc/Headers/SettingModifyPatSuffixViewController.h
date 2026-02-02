//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGrowTextView, MMTableView, MMTableViewInfo, MMTimer, MMUILabel, MMUITextField, ModifyPatSuffixLogic, NSString, UIButton, UIView, WCCommonInputPanelLogic;
@protocol SettingModifyPatSuffixViewControllerDelegate;

@interface SettingModifyPatSuffixViewController
{
    double m_fKeyboardHeight;
    MMUITextField *m_patSuffixTextField;
    ModifyPatSuffixLogic *m_modifyPatSuffixLogic;
    MMUILabel *m_descLabel;
    MMUILabel *m_errorMsgLabel;
    MMTimer *m_timerResetErrorMsgLabelTask;
    MMUILabel *m_topTitleLabel;
    UIButton *m_acceptBtn;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    NSString *m_sessionId;
    id <SettingModifyPatSuffixViewControllerDelegate> _delegate;
    unsigned long long _scene;
    MMGrowTextView *_textView;
    UIView *_inputBackgroundView;
    WCCommonInputPanelLogic *_inputPanelLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCommonInputPanelLogic *inputPanelLogic; // @synthesize inputPanelLogic=_inputPanelLogic;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <SettingModifyPatSuffixViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *m_sessionId; // @synthesize m_sessionId;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
@property(retain, nonatomic) UIButton *m_acceptBtn; // @synthesize m_acceptBtn;
@property(retain, nonatomic) MMUILabel *m_topTitleLabel; // @synthesize m_topTitleLabel;
- (void)textViewTextDidExceedMaxLength;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)relayoutAcceptButton;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(_Bool)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)reportAction:(unsigned long long)arg1 withErrorCode:(int)arg2;
- (void)OnModifyPatSuffixWithResult:(unsigned int)arg1 errorMsgTitle:(id)arg2 errorMsgContent:(id)arg3 errorCode:(int)arg4;
- (void)onTimerResetErrorMsgLabelTask:(id)arg1;
- (void)startTimerResetErrorMsgLabelTask;
- (void)stopTimerResetErrorMsgLabelTask;
- (void)changeDescLabelAndErrorMsgLabel:(_Bool)arg1;
- (void)onCancel;
- (_Bool)checkPatSuffixName:(id)arg1;
- (id)formatPatSuffix:(id)arg1;
- (void)didAccept;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)initFooterView;
- (id)genCellLeftLabel;
- (void)makePatSuffixEditCell:(id)arg1 CellInfo:(id)arg2;
- (id)getChatRoomInfoHeadView;
- (void)reloadTableViewInfo;
- (void)initInputPanelLogic;
- (void)layoutTextView;
- (void)layoutAcceptBtn;
- (void)layoutTopTitleLable;
- (void)layoutTableView;
- (void)layoutNavigationBar;
- (unsigned int)getMaxPatSuffixLen;
- (id)getInitPatSuffixTextFieldText;
- (void)initData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (_Bool)shouldInteractiveDismiss;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

