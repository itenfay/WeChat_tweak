//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UITextField, UIView, WCBaseKeyboardToolBar, WCPayDecimalKeyboardView, WCPayLQTDepositProtocolPageSheet, WCPayLQTSelectCardItem, WCPayLQTSelectDateItem, WCPayRecommendItemView;
@protocol WCPayLQTDepositFillInfoViewControllerDelegate;

@interface WCPayLQTDepositFillInfoViewController
{
    id <WCPayLQTDepositFillInfoViewControllerDelegate> m_delegate;
    WCBaseKeyboardToolBar *m_keyboardBar;
    long long controllerType;
    _Bool _isKeyboardShow;
    _Bool _isKeyboardAnimating;
    _Bool _hasClickDateItem;
    _Bool _hasClickCardItem;
    UIView *_headerView;
    UILabel *_productWordLabel;
    UILabel *_marketingWordLabel;
    UILabel *_depositAmountLabel;
    UILabel *_currencyLabel;
    UITextField *_amountTextField;
    UIView *_textFieldLineView;
    UILabel *_tipsLabel;
    UIView *_headerBottomLine;
    WCPayLQTSelectCardItem *_selectCardItem;
    WCPayLQTSelectDateItem *_selectDateItem;
    double _m_minItemLeft;
    UIButton *_tipsInfoBtn;
    double _currentBtnY;
    double _currentProtocolY;
    WCPayDecimalKeyboardView *_keyboard;
    WCPayRecommendItemView *_recommendItemView;
    UIButton *_confirmButton;
    WCPayLQTDepositProtocolPageSheet *_protocolPageSheet;
    struct CGPoint _currentOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayLQTDepositProtocolPageSheet *protocolPageSheet; // @synthesize protocolPageSheet=_protocolPageSheet;
@property _Bool hasClickCardItem; // @synthesize hasClickCardItem=_hasClickCardItem;
@property _Bool hasClickDateItem; // @synthesize hasClickDateItem=_hasClickDateItem;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) WCPayRecommendItemView *recommendItemView; // @synthesize recommendItemView=_recommendItemView;
@property(retain) WCPayDecimalKeyboardView *keyboard; // @synthesize keyboard=_keyboard;
@property(nonatomic) double currentProtocolY; // @synthesize currentProtocolY=_currentProtocolY;
@property(nonatomic) double currentBtnY; // @synthesize currentBtnY=_currentBtnY;
@property(nonatomic) struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain, nonatomic) UIButton *tipsInfoBtn; // @synthesize tipsInfoBtn=_tipsInfoBtn;
@property(nonatomic) _Bool isKeyboardAnimating; // @synthesize isKeyboardAnimating=_isKeyboardAnimating;
@property(nonatomic) _Bool isKeyboardShow; // @synthesize isKeyboardShow=_isKeyboardShow;
@property(nonatomic) double m_minItemLeft; // @synthesize m_minItemLeft=_m_minItemLeft;
@property(retain, nonatomic) WCPayLQTSelectDateItem *selectDateItem; // @synthesize selectDateItem=_selectDateItem;
@property(retain, nonatomic) WCPayLQTSelectCardItem *selectCardItem; // @synthesize selectCardItem=_selectCardItem;
@property(retain, nonatomic) UIView *headerBottomLine; // @synthesize headerBottomLine=_headerBottomLine;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *textFieldLineView; // @synthesize textFieldLineView=_textFieldLineView;
@property(retain, nonatomic) UITextField *amountTextField; // @synthesize amountTextField=_amountTextField;
@property(retain, nonatomic) UILabel *currencyLabel; // @synthesize currencyLabel=_currencyLabel;
@property(retain, nonatomic) UILabel *depositAmountLabel; // @synthesize depositAmountLabel=_depositAmountLabel;
@property(retain, nonatomic) UILabel *marketingWordLabel; // @synthesize marketingWordLabel=_marketingWordLabel;
@property(retain, nonatomic) UILabel *productWordLabel; // @synthesize productWordLabel=_productWordLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void)onProtocolPageSheetClickConfirm;
- (void)onProtocolPageSheetClickCancel;
- (void)onProtocolPageSheetClickProtocolUrl:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)onWCPayRecommendItemViewSelect:(unsigned long long)arg1;
- (void)activeTextField;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)onWCPayLQTSelectDateItemShow;
- (void)onWCPayLQTSelectCardItemAddNewCard;
- (void)textFieldDidChange;
- (void)onConfirmInternal;
- (void)onConfirm:(id)arg1;
- (void)onAgreementClick:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)updateBottomView;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (id)getSelectCardItemBankList;
- (void)updateKeyboard;
- (void)updateRecommendItemView;
- (_Bool)shouldEnableButton;
- (void)updateConfirmButtonStatus;
- (void)infoBtnClick:(id)arg1;
- (void)updateTipsLabel;
- (void)updateHeaderView;
- (void)updateTableView;
- (void)initView;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onBack;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)setControllerType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

