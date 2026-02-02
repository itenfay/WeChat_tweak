//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSDictionary, NSString, UIButton, UIImageView, UITextField, UIView, WCPayBalanceChargeLQTEntryView, WCPayBindCardInfo, WCPayDecimalKeyboardView, WCPayNoticeItemView, WCPayWebImageView;
@protocol WCPaySaveViewControllerDelegate;

@interface WCPaySaveViewController
{
    id <WCPaySaveViewControllerDelegate> m_delegate;
    _Bool _bIsUserManulSelectCard;
    _Bool _bIsKeyboardShowing;
    _Bool _bIsShowingCardInfoView;
    UIView *_headerContentView;
    UIView *_cardContentView;
    MMUILabel *_cardTitle;
    WCPayWebImageView *_banklogoImgView;
    UIButton *_bankNameSelectBtn;
    UIImageView *_arrowImgView;
    MMUILabel *_bankdetailLabel;
    UIButton *_cardCoverButton;
    UIView *_moneyContentView;
    MMUILabel *_moneyTitleLabel;
    MMUILabel *_moneyCurrency;
    UITextField *_moneyTextField;
    UIView *_moneySepLine;
    WCPayBindCardInfo *_currentCardInfo;
    WCPayDecimalKeyboardView *_keyboardView;
    WCPayBalanceChargeLQTEntryView *_lqtEntryView;
    WCPayNoticeItemView *_noticeItemView;
    NSDictionary *_m_dicBanners;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *m_dicBanners; // @synthesize m_dicBanners=_m_dicBanners;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(retain, nonatomic) WCPayBalanceChargeLQTEntryView *lqtEntryView; // @synthesize lqtEntryView=_lqtEntryView;
@property(nonatomic) _Bool bIsShowingCardInfoView; // @synthesize bIsShowingCardInfoView=_bIsShowingCardInfoView;
@property(nonatomic) _Bool bIsKeyboardShowing; // @synthesize bIsKeyboardShowing=_bIsKeyboardShowing;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(nonatomic) _Bool bIsUserManulSelectCard; // @synthesize bIsUserManulSelectCard=_bIsUserManulSelectCard;
@property(retain, nonatomic) WCPayBindCardInfo *currentCardInfo; // @synthesize currentCardInfo=_currentCardInfo;
@property(retain, nonatomic) UIView *moneySepLine; // @synthesize moneySepLine=_moneySepLine;
@property(retain, nonatomic) UITextField *moneyTextField; // @synthesize moneyTextField=_moneyTextField;
@property(retain, nonatomic) MMUILabel *moneyCurrency; // @synthesize moneyCurrency=_moneyCurrency;
@property(retain, nonatomic) MMUILabel *moneyTitleLabel; // @synthesize moneyTitleLabel=_moneyTitleLabel;
@property(retain, nonatomic) UIView *moneyContentView; // @synthesize moneyContentView=_moneyContentView;
@property(retain, nonatomic) UIButton *cardCoverButton; // @synthesize cardCoverButton=_cardCoverButton;
@property(retain, nonatomic) MMUILabel *bankdetailLabel; // @synthesize bankdetailLabel=_bankdetailLabel;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UIButton *bankNameSelectBtn; // @synthesize bankNameSelectBtn=_bankNameSelectBtn;
@property(retain, nonatomic) WCPayWebImageView *banklogoImgView; // @synthesize banklogoImgView=_banklogoImgView;
@property(retain, nonatomic) MMUILabel *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(retain, nonatomic) UIView *cardContentView; // @synthesize cardContentView=_cardContentView;
@property(retain, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
- (void)onClickLQTChargeEntryView;
- (_Bool)shouldShowLqtEntryView;
- (void)checkConfirmBtnStatus;
- (void)setupInputView;
- (void)decimalKeyboardWillHide;
- (void)decimalKeyboardWillShow:(double)arg1;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)selectCardViewDidSelectAddNewCard:(id)arg1;
- (void)selectCardView:(id)arg1 didSelectCard:(id)arg2;
- (double)selectCardViewSafeBottom;
- (id)getCardNameFrom:(id)arg1;
- (void)setCardInfo:(id)arg1;
- (id)defaultCard;
- (id)cardInfos;
- (void)setNeedRefreshDefaultCard;
- (void)activeTextFieldWithCheckTop:(_Bool)arg1;
- (void)textFieldDidChange;
- (void)clickBankName;
- (void)FillSaveMoneyCancel;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidPop:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

