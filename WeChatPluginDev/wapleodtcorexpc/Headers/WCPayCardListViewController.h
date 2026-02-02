//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, NSString, UIButton;
@protocol WCPayCardListViewControllerDelegate;

@interface WCPayCardListViewController
{
    NSMutableArray *m_arrPayCardDetailView;
    unsigned int totalHeight;
    NSDictionary *m_dicBanners;
    UIButton *m_applyCardButton;
    id <WCPayCardListViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayCardListViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)OnResetPasswordCancel:(id)arg1;
- (void)honeyPayReceiverCardDetailLogicDidUnbindCard:(id)arg1;
- (void)call:(id)arg1;
- (void)honeyPayCardViewDidBeClicked:(id)arg1;
- (id)getNoticeBanner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)onQAButtonClick;
- (void)webViewReturn:(id)arg1;
- (void)gotoLoanMoney;
- (void)didReceiveMemoryWarning;
- (void)onClickCard:(id)arg1;
- (void)onClickBalanceView:(id)arg1;
- (void)onClickWXBorrowMoneyItemView:(id)arg1;
- (void)onClickWXBorrowMoneyItem:(id)arg1;
- (void)onClickVirtualCardAndChecking:(id)arg1;
- (void)onClickVirtualCard:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2 fromScene:(unsigned long long)arg3;
- (void)didShowApplyNewCard;
- (void)didShowAddCard;
- (void)willShowAddCard;
- (void)makeLoanMoneyCell:(id)arg1;
- (void)makeApplyNewCardCell:(id)arg1;
- (id)makeAddNewCardView;
- (void)makeAddCardCell:(id)arg1;
- (void)makeVirtualCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeWXBorrowMoneyItemCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeBaseExtentionCell:(id)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)rightBarButtonClick;
- (void)reloadNavigationItem;
- (void)viewDidLoad;
- (void)onLeftBarButtonDone;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
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

