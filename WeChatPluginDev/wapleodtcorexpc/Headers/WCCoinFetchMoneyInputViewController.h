//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaUIView, LiveRewardIncomeBizInfo, MMTableView, MMUIButton, MMUILabel, NSString, RichTextView, TrueKindaOnePxLineView, UIButton, UIImageView, UILabel, UITextField, UIView, WCPayDecimalKeyboardView, WCPayWebImageView, WecoinTaxCutEntranceInfo;
@protocol WCCoinFetchMoneyInputViewControllerDelegate;

@interface WCCoinFetchMoneyInputViewController
{
    id <WCCoinFetchMoneyInputViewControllerDelegate> _delegate;
    long long _incomeBalance;
    WecoinTaxCutEntranceInfo *_taxCutInfo;
    id _userInfo;
    LiveRewardIncomeBizInfo *_incomeBizInfo;
    MMTableView *_tableView;
    UITextField *_moneyTextField;
    MMUILabel *_invalidTipsLabel;
    RichTextView *_richTextView;
    MMUIButton *_cardInfoBtn;
    UIView *_m_buttonContentView;
    UIView *_m_inputContentView;
    UILabel *_m_topTipsLabel;
    UIView *_m_topbarView;
    UIButton *_m_maskTopbarButton;
    WCPayWebImageView *_m_cardLogo;
    UIImageView *_m_arrowImageView;
    UILabel *_m_textFieldTitle;
    UILabel *_m_unitLabel;
    UIView *_m_moneyLineView;
    double _m_keyboardHeight;
    WCPayDecimalKeyboardView *_keyboardView;
    KindaUIView *_taxCutView;
    TrueKindaOnePxLineView *_taxCutTopLine;
    TrueKindaOnePxLineView *_taxCutBotttomLine;
    UILabel *_taxCutTitle;
    UILabel *_taxCutDesc;
    UIImageView *_taxCutArrow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *taxCutArrow; // @synthesize taxCutArrow=_taxCutArrow;
@property(retain, nonatomic) UILabel *taxCutDesc; // @synthesize taxCutDesc=_taxCutDesc;
@property(retain, nonatomic) UILabel *taxCutTitle; // @synthesize taxCutTitle=_taxCutTitle;
@property(retain, nonatomic) TrueKindaOnePxLineView *taxCutBotttomLine; // @synthesize taxCutBotttomLine=_taxCutBotttomLine;
@property(retain, nonatomic) TrueKindaOnePxLineView *taxCutTopLine; // @synthesize taxCutTopLine=_taxCutTopLine;
@property(retain, nonatomic) KindaUIView *taxCutView; // @synthesize taxCutView=_taxCutView;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(nonatomic) double m_keyboardHeight; // @synthesize m_keyboardHeight=_m_keyboardHeight;
@property(retain, nonatomic) UIView *m_moneyLineView; // @synthesize m_moneyLineView=_m_moneyLineView;
@property(retain, nonatomic) UILabel *m_unitLabel; // @synthesize m_unitLabel=_m_unitLabel;
@property(retain, nonatomic) UILabel *m_textFieldTitle; // @synthesize m_textFieldTitle=_m_textFieldTitle;
@property(retain, nonatomic) UIImageView *m_arrowImageView; // @synthesize m_arrowImageView=_m_arrowImageView;
@property(retain, nonatomic) WCPayWebImageView *m_cardLogo; // @synthesize m_cardLogo=_m_cardLogo;
@property(retain, nonatomic) UIButton *m_maskTopbarButton; // @synthesize m_maskTopbarButton=_m_maskTopbarButton;
@property(retain, nonatomic) UIView *m_topbarView; // @synthesize m_topbarView=_m_topbarView;
@property(retain, nonatomic) UILabel *m_topTipsLabel; // @synthesize m_topTipsLabel=_m_topTipsLabel;
@property(retain, nonatomic) UIView *m_inputContentView; // @synthesize m_inputContentView=_m_inputContentView;
@property(retain, nonatomic) UIView *m_buttonContentView; // @synthesize m_buttonContentView=_m_buttonContentView;
@property(retain, nonatomic) MMUIButton *cardInfoBtn; // @synthesize cardInfoBtn=_cardInfoBtn;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) MMUILabel *invalidTipsLabel; // @synthesize invalidTipsLabel=_invalidTipsLabel;
@property(retain, nonatomic) UITextField *moneyTextField; // @synthesize moneyTextField=_moneyTextField;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) LiveRewardIncomeBizInfo *incomeBizInfo; // @synthesize incomeBizInfo=_incomeBizInfo;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) WecoinTaxCutEntranceInfo *taxCutInfo; // @synthesize taxCutInfo=_taxCutInfo;
@property(nonatomic) long long incomeBalance; // @synthesize incomeBalance=_incomeBalance;
@property(nonatomic) __weak id <WCCoinFetchMoneyInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long inputAmount;
- (id)keyboardHostViewController;
- (void)onWCPayLQTTipsNewModalTapCancel;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)updateTableViewOffset;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)clickTaxCutEntrance;
- (unsigned long long)getCurrentFetchTotalAmount;
- (void)activeTextField;
- (void)cardInfoBtnClick;
- (void)checkIfFetchAmountInvalid:(unsigned int)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)checkBtnStatus;
- (void)textFieldDidChang:(id)arg1;
- (void)hideInvalidTipsLabel;
- (void)showInvalidTipsLabelWithContent:(id)arg1;
- (void)initInvalidTipsLabel;
- (void)layoutTaxCutView;
- (void)makeInputContentView:(id)arg1;
- (void)makeCardInfoView:(id)arg1;
- (double)inputContentViewTopbarheight;
- (void)setupContentView;
- (void)viewDidLoad;
- (void)adjustButtonY;
- (void)updateView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

