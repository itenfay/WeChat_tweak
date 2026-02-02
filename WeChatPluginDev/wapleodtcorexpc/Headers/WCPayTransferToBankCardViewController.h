//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIButton, UILabel, UIScrollView, UIView, WCPayDecimalKeyboardView, WCPayRemarkPageSheet, WCPayTextField, WCPayTransferMoneyAntiCheatUIView, WCPayWebImageView;
@protocol WCPayTransferToBankCardViewControllerDelegate;

@interface WCPayTransferToBankCardViewController
{
    UIScrollView *_m_backgroundView;
    id <WCPayTransferToBankCardViewControllerDelegate> _m_delegate;
    UIView *_m_headerView;
    UIView *_m_footerView;
    UIView *_m_panelView;
    UIView *_m_lineView;
    UIView *_m_bottomDetailView;
    UIView *_m_chargeFeeLabelView;
    UIView *_m_totalAmountLabelView;
    UIView *_m_commentTextLabelView;
    UIButton *_m_confirmButton;
    WCPayWebImageView *_m_bankIconView;
    UILabel *_m_bankInfoLabel;
    UILabel *_m_receiverNameLabel;
    UILabel *_m_inputTitleLabel;
    UILabel *_m_chargeFeeLabel;
    UILabel *_m_totalAmountLabel;
    WCPayTextField *_m_currencyInputView;
    RichTextView *_m_commentTextView;
    UILabel *_unitLabel;
    UIView *_inputContainer;
    WCPayDecimalKeyboardView *_keyboard;
    double _bottomDetailViewLeftMaxWidth;
    WCPayTransferMoneyAntiCheatUIView *_noticeBanner;
    WCPayRemarkPageSheet *_remarkPageSheet;
    NSString *_remarkContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *remarkContent; // @synthesize remarkContent=_remarkContent;
@property(retain, nonatomic) WCPayRemarkPageSheet *remarkPageSheet; // @synthesize remarkPageSheet=_remarkPageSheet;
@property(retain, nonatomic) WCPayTransferMoneyAntiCheatUIView *noticeBanner; // @synthesize noticeBanner=_noticeBanner;
@property(nonatomic) double bottomDetailViewLeftMaxWidth; // @synthesize bottomDetailViewLeftMaxWidth=_bottomDetailViewLeftMaxWidth;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboard; // @synthesize keyboard=_keyboard;
@property(retain, nonatomic) UIView *inputContainer; // @synthesize inputContainer=_inputContainer;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) RichTextView *m_commentTextView; // @synthesize m_commentTextView=_m_commentTextView;
@property(retain, nonatomic) WCPayTextField *m_currencyInputView; // @synthesize m_currencyInputView=_m_currencyInputView;
@property(retain, nonatomic) UILabel *m_totalAmountLabel; // @synthesize m_totalAmountLabel=_m_totalAmountLabel;
@property(retain, nonatomic) UILabel *m_chargeFeeLabel; // @synthesize m_chargeFeeLabel=_m_chargeFeeLabel;
@property(retain, nonatomic) UILabel *m_inputTitleLabel; // @synthesize m_inputTitleLabel=_m_inputTitleLabel;
@property(retain, nonatomic) UILabel *m_receiverNameLabel; // @synthesize m_receiverNameLabel=_m_receiverNameLabel;
@property(retain, nonatomic) UILabel *m_bankInfoLabel; // @synthesize m_bankInfoLabel=_m_bankInfoLabel;
@property(retain, nonatomic) WCPayWebImageView *m_bankIconView; // @synthesize m_bankIconView=_m_bankIconView;
@property(retain, nonatomic) UIButton *m_confirmButton; // @synthesize m_confirmButton=_m_confirmButton;
@property(retain, nonatomic) UIView *m_commentTextLabelView; // @synthesize m_commentTextLabelView=_m_commentTextLabelView;
@property(retain, nonatomic) UIView *m_totalAmountLabelView; // @synthesize m_totalAmountLabelView=_m_totalAmountLabelView;
@property(retain, nonatomic) UIView *m_chargeFeeLabelView; // @synthesize m_chargeFeeLabelView=_m_chargeFeeLabelView;
@property(retain, nonatomic) UIView *m_bottomDetailView; // @synthesize m_bottomDetailView=_m_bottomDetailView;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) UIView *m_panelView; // @synthesize m_panelView=_m_panelView;
@property(retain, nonatomic) UIView *m_footerView; // @synthesize m_footerView=_m_footerView;
@property(retain, nonatomic) UIView *m_headerView; // @synthesize m_headerView=_m_headerView;
@property(nonatomic) __weak id <WCPayTransferToBankCardViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIScrollView *m_backgroundView; // @synthesize m_backgroundView=_m_backgroundView;
- (void)onWCPayAntiCheatButtonClickWithH5:(id)arg1;
- (void)delayShowKeyboard;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)closeAllKeyboards;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)onButtonConfirm;
- (void)updateViewAfterPageSheetDismiss;
- (void)pageSheetConfirmWithRemark:(id)arg1;
- (void)pageSheetCancel;
- (void)showRemarkPageSheet;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateConfirmButtonStatus;
- (void)onInputTextChangeToString:(id)arg1;
- (void)updateLineView;
- (void)updateCurrencyInputView;
- (void)showKeyboard;
- (void)textFieldDidChange;
- (void)updateUnitLabel;
- (void)updateInputContainer;
- (void)updateInputTitleLabel;
- (double)getRealtimeChargeFee:(double)arg1;
- (void)updateConfirmButton;
- (void)updateCommentTextView;
- (void)updateComentTextLabel;
- (void)updateTotalAmountLabel;
- (void)updateFeeChargeLabel;
- (void)updateBottomDetailViewRightView;
- (void)updateBottomDetailView;
- (void)updateRoundCorner;
- (void)updateNoticeItemView;
- (void)updatePanelView;
- (void)updateFooterView;
- (void)updateDescriptionView;
- (void)updateBankIconView;
- (void)updateHeaderView;
- (void)updateNavigationbarItem;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateBackgroundView;
- (void)updateViewData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)onRightBarButtonClick;
- (void)onBack;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (_Bool)useTransparentNavibar;
- (_Bool)useBlackStatusbar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

