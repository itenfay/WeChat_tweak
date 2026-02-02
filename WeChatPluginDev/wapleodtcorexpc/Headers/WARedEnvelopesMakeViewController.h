//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMTextView, NSArray, NSString, RichTextView, UIButton, UILabel, UIView, WCBizPickerView, WCRedEnvelopesMakeRedEnvelopesViewLayout, WCUITextField;
@protocol WARedEnvelopesMakeViewControllerDelegate;

@interface WARedEnvelopesMakeViewController
{
    _Bool m_bCanHandleScrollViewDidChangedEvent;
    _Bool m_bError;
    _Bool m_bNomalMoney;
    _Bool m_bScopeAll;
    unsigned int m_uiSelectCount;
    long long m_inputErrorType;
    NSString *m_appID;
    NSArray *m_arrScope;
    NSString *m_defaultWishing;
    NSString *m_sendID;
    id <WARedEnvelopesMakeViewControllerDelegate> m_delegate;
    WCRedEnvelopesMakeRedEnvelopesViewLayout *_m_layout;
    UIView *_m_navigationBackgroundView;
    MMTableView *_tableView;
    UIView *_moneyView;
    WCUITextField *_moneyTextField;
    RichTextView *_richTextView;
    UIView *_countView;
    WCUITextField *_countTextField;
    UIView *_visibleView;
    MMTextView *_textView;
    UILabel *_amountLabel;
    UILabel *_unitLabel;
    UIButton *_redEnvelopesButton;
    UIView *_errorView;
    UILabel *_errorLabel;
    WCBizPickerView *_pickerView;
    UIButton *_scopeBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *scopeBtn; // @synthesize scopeBtn=_scopeBtn;
@property(retain, nonatomic) WCBizPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIButton *redEnvelopesButton; // @synthesize redEnvelopesButton=_redEnvelopesButton;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) MMTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *visibleView; // @synthesize visibleView=_visibleView;
@property(retain, nonatomic) WCUITextField *countTextField; // @synthesize countTextField=_countTextField;
@property(retain, nonatomic) UIView *countView; // @synthesize countView=_countView;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) WCUITextField *moneyTextField; // @synthesize moneyTextField=_moneyTextField;
@property(retain, nonatomic) UIView *moneyView; // @synthesize moneyView=_moneyView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *m_navigationBackgroundView; // @synthesize m_navigationBackgroundView=_m_navigationBackgroundView;
@property(retain, nonatomic) WCRedEnvelopesMakeRedEnvelopesViewLayout *m_layout; // @synthesize m_layout=_m_layout;
@property(nonatomic) __weak id <WARedEnvelopesMakeViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (long long)totalAmount;
- (long long)perMinValue;
- (long long)perPersonMaxValue;
- (unsigned int)totalNum;
- (void)adjustAmountLabel:(double)arg1;
- (void)checkDataError;
- (void)adjustTableViewOffestIfHasErrorView;
- (void)hideErrorViewWithAnimation;
- (void)hideErrorView;
- (void)showErrorView:(id)arg1 ErrorType:(long long)arg2;
- (void)keyboardWillShow:(id)arg1;
- (void)hidekeyboard;
- (void)handleTap:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)resetToCanHandleScrollViewChangedEnvent;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)plathbPayFail;
- (void)plathbPaySucc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startPayMoney:(id)arg1;
- (void)onScopeBtnClick;
- (void)OnMakeWCRedEnvelopesButtonClick;
- (void)onLeftBarButtonDone;
- (void)setupUI:(double)arg1 IsInit:(_Bool)arg2;
- (void)initNavigationBar;
- (void)setColorTitle:(id)arg1 TextColor:(id)arg2;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithAppID:(id)arg1 arrScope:(id)arg2 defaultWishing:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

