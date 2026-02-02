//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EXTPKG_mmpayapplynfccardbo_CardTypeInfo, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, WCPayCss, WCPayWebImageView;
@protocol WCPayNFCCardChargeViewControllerDelegate;

@interface WCPayNFCCardChargeViewController
{
    _Bool _isChecked;
    id <WCPayNFCCardChargeViewControllerDelegate> _m_delegate;
    UIView *_contentView;
    WCPayWebImageView *_nfcCardImageView;
    WCPayCss *_css;
    UIView *_cardInfoView;
    UILabel *_titleLabel;
    UIView *_balanceView;
    UILabel *_balancePrefixLabel;
    UILabel *_balanceLabel;
    UIView *_tagsView;
    UIView *_seperatorView;
    EXTPKG_mmpayapplynfccardbo_CardTypeInfo *_m_viewData;
    UILabel *_preChargeLabel;
    UIView *_preChargeAmountContentView;
    UILabel *_depositTitleView;
    UIView *_depositContentView;
    UIView *_cardAboutContentView;
    UIView *_bottomContentView;
    UIView *_bottomViewUpperLine;
    UIView *_bottomViewLowerLine;
    UIView *_protocolView;
    UIView *_chargeConfirmView;
    UIImageView *_checkBoxImageView;
    RichTextView *_protocolTextView;
    UILabel *_cardAboutTitleView;
    UIView *_cardAboutInfoContentView;
    UILabel *_amountLabelPrefix;
    UILabel *_amountLabel;
    UILabel *_cardApplyAmountNameLabel;
    UIView *_amountContentView;
    UIButton *_confirmButton;
    long long _selectedDepositAmount;
    UIButton *_abontCardButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *abontCardButton; // @synthesize abontCardButton=_abontCardButton;
@property(nonatomic) long long selectedDepositAmount; // @synthesize selectedDepositAmount=_selectedDepositAmount;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *amountContentView; // @synthesize amountContentView=_amountContentView;
@property(retain, nonatomic) UILabel *cardApplyAmountNameLabel; // @synthesize cardApplyAmountNameLabel=_cardApplyAmountNameLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *amountLabelPrefix; // @synthesize amountLabelPrefix=_amountLabelPrefix;
@property(retain, nonatomic) UIView *cardAboutInfoContentView; // @synthesize cardAboutInfoContentView=_cardAboutInfoContentView;
@property(retain, nonatomic) UILabel *cardAboutTitleView; // @synthesize cardAboutTitleView=_cardAboutTitleView;
@property(retain, nonatomic) RichTextView *protocolTextView; // @synthesize protocolTextView=_protocolTextView;
@property(nonatomic) _Bool isChecked; // @synthesize isChecked=_isChecked;
@property(retain, nonatomic) UIImageView *checkBoxImageView; // @synthesize checkBoxImageView=_checkBoxImageView;
@property(retain, nonatomic) UIView *chargeConfirmView; // @synthesize chargeConfirmView=_chargeConfirmView;
@property(retain, nonatomic) UIView *protocolView; // @synthesize protocolView=_protocolView;
@property(retain, nonatomic) UIView *bottomViewLowerLine; // @synthesize bottomViewLowerLine=_bottomViewLowerLine;
@property(retain, nonatomic) UIView *bottomViewUpperLine; // @synthesize bottomViewUpperLine=_bottomViewUpperLine;
@property(retain, nonatomic) UIView *bottomContentView; // @synthesize bottomContentView=_bottomContentView;
@property(retain, nonatomic) UIView *cardAboutContentView; // @synthesize cardAboutContentView=_cardAboutContentView;
@property(retain, nonatomic) UIView *depositContentView; // @synthesize depositContentView=_depositContentView;
@property(retain, nonatomic) UILabel *depositTitleView; // @synthesize depositTitleView=_depositTitleView;
@property(retain, nonatomic) UIView *preChargeAmountContentView; // @synthesize preChargeAmountContentView=_preChargeAmountContentView;
@property(retain, nonatomic) UILabel *preChargeLabel; // @synthesize preChargeLabel=_preChargeLabel;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardTypeInfo *m_viewData; // @synthesize m_viewData=_m_viewData;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) UIView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UILabel *balancePrefixLabel; // @synthesize balancePrefixLabel=_balancePrefixLabel;
@property(retain, nonatomic) UIView *balanceView; // @synthesize balanceView=_balanceView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *cardInfoView; // @synthesize cardInfoView=_cardInfoView;
@property(retain, nonatomic) WCPayCss *css; // @synthesize css=_css;
@property(retain, nonatomic) WCPayWebImageView *nfcCardImageView; // @synthesize nfcCardImageView=_nfcCardImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCPayNFCCardChargeViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (double)maxTitleLength;
- (void)updateCardAboutInfoView;
- (void)updateDepositContentViewState;
- (void)onConfirmChage:(id)arg1;
- (void)onWCPayNFCCardDepositViewTap:(long long)arg1;
- (void)onClickConfirmButton:(id)arg1;
- (void)updateChargeConfirmView;
- (double)totalAmount;
- (void)updateBottomContent;
- (void)onClickAboutCardButton:(id)arg1;
- (void)updateAboutCardButton;
- (double)balanceAmount;
- (void)updateDepositContentView;
- (void)updateDepositView;
- (void)updateSeperator;
- (void)updateTags;
- (void)updateBalanceView;
- (void)updateTitleLabel;
- (void)updateCardInfoView;
- (void)updateNFCCardImageView;
- (void)updateTailView;
- (void)updateView;
- (void)refreshViewWithData:(id)arg1;
- (void)onClickChargeRecord:(id)arg1;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)onBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

