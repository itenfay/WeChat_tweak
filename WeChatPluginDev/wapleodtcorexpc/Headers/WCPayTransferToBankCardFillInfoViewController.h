//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSDictionary, NSString, UIButton, WCBaseKeyboardToolBar, WCBizInfoGroup, WCPayBankCardNumberItem, WCPayNavigationView, WCPayNoticeItemView, WCPaySelectArriveTimeItem, WCPaySelectBankItem, WCPaySelectNameItem, WCPayT2BCCandidateSugBar, WCPayTransferDelayOptionView;
@protocol WCPayTransferToBankCardFillInfoViewControllerDelegate;

@interface WCPayTransferToBankCardFillInfoViewController
{
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCPayTransferToBankCardFillInfoViewControllerDelegate> m_delegate;
    WCBizInfoGroup *m_infoGroup;
    _Bool _m_bHasSelectReceiver;
    _Bool _m_bBankCardNumChange;
    _Bool _m_bBankCardAutoFilling;
    _Bool _noAutoShowKeyBoard;
    UIButton *m_footerButton;
    WCPayT2BCCandidateSugBar *_m_receiverCandidateView;
    WCPaySelectNameItem *_m_selectNameItem;
    WCPayBankCardNumberItem *_m_cardNumberItem;
    WCPaySelectBankItem *_m_selectBankItem;
    WCPaySelectArriveTimeItem *_m_selectArriveTimeItem;
    double _m_minItemLeft;
    MMUIButton *_m_selectNameButton;
    WCPayNoticeItemView *_m_noticeBanner;
    NSDictionary *_m_dictBanners;
    NSString *_m_enterBankCardNumber;
    WCPayNavigationView *_navigationView;
    WCPayTransferDelayOptionView *_delayOption;
    double _cellTitleMaxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double cellTitleMaxWidth; // @synthesize cellTitleMaxWidth=_cellTitleMaxWidth;
@property(retain) WCPayTransferDelayOptionView *delayOption; // @synthesize delayOption=_delayOption;
@property(retain) WCPayNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property(nonatomic) _Bool noAutoShowKeyBoard; // @synthesize noAutoShowKeyBoard=_noAutoShowKeyBoard;
@property(retain, nonatomic) NSString *m_enterBankCardNumber; // @synthesize m_enterBankCardNumber=_m_enterBankCardNumber;
@property(retain, nonatomic) NSDictionary *m_dictBanners; // @synthesize m_dictBanners=_m_dictBanners;
@property(retain, nonatomic) WCPayNoticeItemView *m_noticeBanner; // @synthesize m_noticeBanner=_m_noticeBanner;
@property(nonatomic) _Bool m_bBankCardAutoFilling; // @synthesize m_bBankCardAutoFilling=_m_bBankCardAutoFilling;
@property(nonatomic) _Bool m_bBankCardNumChange; // @synthesize m_bBankCardNumChange=_m_bBankCardNumChange;
@property(nonatomic) _Bool m_bHasSelectReceiver; // @synthesize m_bHasSelectReceiver=_m_bHasSelectReceiver;
@property(retain, nonatomic) MMUIButton *m_selectNameButton; // @synthesize m_selectNameButton=_m_selectNameButton;
@property(nonatomic) double m_minItemLeft; // @synthesize m_minItemLeft=_m_minItemLeft;
@property(retain, nonatomic) WCPaySelectArriveTimeItem *m_selectArriveTimeItem; // @synthesize m_selectArriveTimeItem=_m_selectArriveTimeItem;
@property(retain, nonatomic) WCPaySelectBankItem *m_selectBankItem; // @synthesize m_selectBankItem=_m_selectBankItem;
@property(retain, nonatomic) WCPayBankCardNumberItem *m_cardNumberItem; // @synthesize m_cardNumberItem=_m_cardNumberItem;
@property(retain, nonatomic) WCPaySelectNameItem *m_selectNameItem; // @synthesize m_selectNameItem=_m_selectNameItem;
@property(retain, nonatomic) WCPayT2BCCandidateSugBar *m_receiverCandidateView; // @synthesize m_receiverCandidateView=_m_receiverCandidateView;
@property(retain, nonatomic) UIButton *m_footerButton; // @synthesize m_footerButton;
- (void)OnClickWCPayT2BCCandidate:(id)arg1;
- (double)onWCPayTransferDelayOptionViewSafeBottom;
- (void)onWCPayTransferDelayOptionViewConfirm:(unsigned int)arg1;
- (void)onWCPayTransferDelayOptionViewCancel;
- (void)viewDidTransitionToNewSize;
- (void)onSpaceTap;
- (id)convertDelayOptionsFromEnterTimeItem:(id)arg1;
- (void)OnWCPaySelectArriveTimeItemShouldShowDelayView:(id)arg1;
- (void)resignAllResponder;
- (void)scrollViewDidScroll;
- (void)OnWCPaySelectArriveTimeItemDidSelectArriveTime:(unsigned long long)arg1;
- (void)OnWCPaySelectBankItemDidChoseBank:(id)arg1;
- (void)OnClickWCPayTransferToBankCardCandidate:(id)arg1;
- (void)onNext;
- (void)showReceiverCandidateView:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)setAutoFillBankDone;
- (void)autoFillBankItem;
- (void)selectTransToBankReceiver;
- (double)getMaxTitleLabelWidth:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)initFooterView;
- (void)initNavigationBar;
- (id)getHeaderView;
- (void)initCandidateView;
- (void)updateTableView;
- (void)initHeaderView;
- (void)refreshViewWithData:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRightBarButtonClick;
- (void)onBack;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getBannerView;
- (void)selectNameItemBecomFirstResponder;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (void)clearBankElem;
- (void)dealloc;
- (void)setEnterBankCardNumber:(id)arg1;
- (void)setHasSelectReceiver:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

