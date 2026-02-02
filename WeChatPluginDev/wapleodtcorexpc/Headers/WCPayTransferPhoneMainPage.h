//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTipsViewController, MMUIButton, NSString, RichTextView, TransferPhoneGetRcvrResp, UIImageView, UILabel, UIView, WCPayCss, WCPayDecimalKeyboardView, WCPayNavigationView, WCPayTextField, WCPayTransferDelayOptionView, WCPayWebImageView, WCUIAlertView;
@protocol WCPayTransferPhoneMainPageDelegate;

@interface WCPayTransferPhoneMainPage
{
    _Bool _bShowAlert;
    unsigned int _currentSelectedDelayOption;
    id <WCPayTransferPhoneMainPageDelegate> _m_delegate;
    UIView *_containerView;
    UIView *_headerView;
    UIView *_rcvrView;
    UIView *_rcvrInfoView;
    UILabel *_nameLabel;
    UIView *_descContainer;
    UILabel *_descLabel;
    WCPayWebImageView *_headImageView;
    UIView *_checkNameLineView;
    MMUIButton *_checkNameButton;
    UIView *_panelContainer;
    UILabel *_amountLabel;
    UIView *_inputContainer;
    UILabel *_unitLabel;
    WCPayTextField *_textField;
    WCPayDecimalKeyboardView *_keyboard;
    UIView *_amountLineView;
    RichTextView *_commentView;
    UIView *_arriveFirstLineView;
    UIView *_arriveTimeContainer;
    UILabel *_arriveTimeTitleLabel;
    UILabel *_arriveTimeDescLabel;
    UIImageView *_arriveTimeArrowView;
    UIView *_arriveSecondLineView;
    TransferPhoneGetRcvrResp *_getRvcrResp;
    WCPayCss *_css;
    NSString *_comment;
    WCUIAlertView *_commentAlertView;
    MMTipsViewController *_checkNameController;
    WCPayNavigationView *_navigationView;
    WCPayTransferDelayOptionView *_delayOption;
    UIView *_tailView;
}

- (void).cxx_destruct;
@property(retain) UIView *tailView; // @synthesize tailView=_tailView;
@property(retain) WCPayTransferDelayOptionView *delayOption; // @synthesize delayOption=_delayOption;
@property(retain) WCPayNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property unsigned int currentSelectedDelayOption; // @synthesize currentSelectedDelayOption=_currentSelectedDelayOption;
@property(retain) MMTipsViewController *checkNameController; // @synthesize checkNameController=_checkNameController;
@property(retain) WCUIAlertView *commentAlertView; // @synthesize commentAlertView=_commentAlertView;
@property(retain) NSString *comment; // @synthesize comment=_comment;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) TransferPhoneGetRcvrResp *getRvcrResp; // @synthesize getRvcrResp=_getRvcrResp;
@property(retain) UIView *arriveSecondLineView; // @synthesize arriveSecondLineView=_arriveSecondLineView;
@property(retain) UIImageView *arriveTimeArrowView; // @synthesize arriveTimeArrowView=_arriveTimeArrowView;
@property(retain) UILabel *arriveTimeDescLabel; // @synthesize arriveTimeDescLabel=_arriveTimeDescLabel;
@property(retain) UILabel *arriveTimeTitleLabel; // @synthesize arriveTimeTitleLabel=_arriveTimeTitleLabel;
@property(retain) UIView *arriveTimeContainer; // @synthesize arriveTimeContainer=_arriveTimeContainer;
@property(retain) UIView *arriveFirstLineView; // @synthesize arriveFirstLineView=_arriveFirstLineView;
@property(retain) RichTextView *commentView; // @synthesize commentView=_commentView;
@property(retain) UIView *amountLineView; // @synthesize amountLineView=_amountLineView;
@property(retain) WCPayDecimalKeyboardView *keyboard; // @synthesize keyboard=_keyboard;
@property(retain) WCPayTextField *textField; // @synthesize textField=_textField;
@property(retain) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain) UIView *inputContainer; // @synthesize inputContainer=_inputContainer;
@property(retain) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain) UIView *panelContainer; // @synthesize panelContainer=_panelContainer;
@property(retain) MMUIButton *checkNameButton; // @synthesize checkNameButton=_checkNameButton;
@property(retain) UIView *checkNameLineView; // @synthesize checkNameLineView=_checkNameLineView;
@property(retain) WCPayWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain) UIView *descContainer; // @synthesize descContainer=_descContainer;
@property(retain) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain) UIView *rcvrInfoView; // @synthesize rcvrInfoView=_rcvrInfoView;
@property(retain) UIView *rcvrView; // @synthesize rcvrView=_rcvrView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property _Bool bShowAlert; // @synthesize bShowAlert=_bShowAlert;
@property __weak id <WCPayTransferPhoneMainPageDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onSpaceTap;
- (double)onWCPayTransferDelayOptionViewSafeBottom;
- (void)onWCPayTransferDelayOptionViewConfirm:(unsigned int)arg1;
- (void)onWCPayTransferDelayOptionViewCancel;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)commentConfirm;
- (void)commentCancel;
- (void)activeTextField;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)convertDelayOptions:(id)arg1;
- (void)onTapArriveTime:(id)arg1;
- (void)onLongPressArriveTime:(id)arg1;
- (void)textFieldDidChange;
- (void)checkNameDidChange:(id)arg1;
- (void)cutString:(id)arg1;
- (void)showCheckName:(id)arg1;
- (void)onTapCheckName;
- (void)updateArriveSecondLineView;
- (void)updateArriveTimeArrowView;
- (void)updateArriveTimeDescLabel;
- (void)updateArriveTimeTitleLabel;
- (void)updateArriveTimeContainer;
- (void)updateArriveFirstLineView;
- (void)updateCommentView;
- (void)updateAmountLineView;
- (void)updateTextField;
- (void)updateUnitLabel;
- (void)updateInputContainer;
- (void)updateAmountTitle;
- (void)updatePanelContainer;
- (void)maskPanel;
- (void)updateHeadImageView;
- (void)updateCheckNameButton;
- (void)updateCheckNameLineView;
- (id)phoneAccessibility:(id)arg1;
- (void)updateDescLabel;
- (void)updateDescContainer;
- (void)updateNameLabel;
- (void)updateRcvrInfoView;
- (void)updateRcvrView;
- (void)updateHeaderView;
- (void)updateView;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (_Bool)shouldInteractivePop;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePushed:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

