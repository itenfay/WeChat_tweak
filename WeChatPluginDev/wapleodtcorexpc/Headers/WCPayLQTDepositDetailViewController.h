//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMRefreshTableFooterView, MMTableView, MMUIActivityIndicatorView, NSString, PlanIndexResp_PlanItem, QryAutoPlanOrderListResp, UILabel, UIView, WCPayCss, WCPayWebImageView;
@protocol WCPayLQTDepositDetailViewControllerDelegate;

@interface WCPayLQTDepositDetailViewController
{
    id <WCPayLQTDepositDetailViewControllerDelegate> _m_delegate;
    MMTableView *_m_tableView;
    WCPayCss *_css;
    MMRefreshTableFooterView *_footerView;
    UILabel *_loadingLabel;
    MMUIActivityIndicatorView *_indicatorView;
    UIView *_containerView;
    UIView *_headerView;
    UIView *_moneyPanel;
    UILabel *_moneyTitle;
    UILabel *_moneyLabel;
    UIView *_moneyLine;
    UIView *_detailPanel;
    UIView *_statusRowView;
    UILabel *_statusTitle;
    UILabel *_statusDetail;
    UIView *_timeRowView;
    UILabel *_timeTitle;
    UILabel *_timeDetail;
    UIView *_cardRowView;
    UILabel *_cardTitle;
    UIView *_cardLogoView;
    WCPayWebImageView *_cardLogo;
    UILabel *_cardDetail;
    UIView *_noRecordView;
    UILabel *_noRecordLabel;
    unsigned long long _loadingState;
    QryAutoPlanOrderListResp *_detailResp;
    PlanIndexResp_PlanItem *_planItem;
}

- (void).cxx_destruct;
@property(retain) PlanIndexResp_PlanItem *planItem; // @synthesize planItem=_planItem;
@property(retain) QryAutoPlanOrderListResp *detailResp; // @synthesize detailResp=_detailResp;
@property unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain) UILabel *noRecordLabel; // @synthesize noRecordLabel=_noRecordLabel;
@property(retain) UIView *noRecordView; // @synthesize noRecordView=_noRecordView;
@property(retain) UILabel *cardDetail; // @synthesize cardDetail=_cardDetail;
@property(retain) WCPayWebImageView *cardLogo; // @synthesize cardLogo=_cardLogo;
@property(retain) UIView *cardLogoView; // @synthesize cardLogoView=_cardLogoView;
@property(retain) UILabel *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(retain) UIView *cardRowView; // @synthesize cardRowView=_cardRowView;
@property(retain) UILabel *timeDetail; // @synthesize timeDetail=_timeDetail;
@property(retain) UILabel *timeTitle; // @synthesize timeTitle=_timeTitle;
@property(retain) UIView *timeRowView; // @synthesize timeRowView=_timeRowView;
@property(retain) UILabel *statusDetail; // @synthesize statusDetail=_statusDetail;
@property(retain) UILabel *statusTitle; // @synthesize statusTitle=_statusTitle;
@property(retain) UIView *statusRowView; // @synthesize statusRowView=_statusRowView;
@property(retain) UIView *detailPanel; // @synthesize detailPanel=_detailPanel;
@property(retain) UIView *moneyLine; // @synthesize moneyLine=_moneyLine;
@property(retain) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain) UILabel *moneyTitle; // @synthesize moneyTitle=_moneyTitle;
@property(retain) UIView *moneyPanel; // @synthesize moneyPanel=_moneyPanel;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain) MMRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) MMTableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property __weak id <WCPayLQTDepositDetailViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (int)yearOfNextMonth;
- (int)nextMonth;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)updateIndicator;
- (void)updateLoadingLabel;
- (void)updateFooterView;
- (void)updateNoRecordLabel;
- (void)updateNoRecordView;
- (void)updateCardDetail;
- (void)updateCardLogo;
- (void)updateCardTitle;
- (void)updateCardRowView;
- (void)updateTimeDetail;
- (void)updateTimeTitle;
- (void)updateTimeRowView;
- (void)updateStatusDetail;
- (void)updateStatusTitle;
- (void)updateStatusRowView;
- (void)updateDetailPanel;
- (void)updateMoneyLine;
- (void)updateMoneyLabel;
- (void)updateMoneyTitle;
- (void)updateMoneyPanel;
- (void)updateHeaderView;
- (void)reloadTableView;
- (void)onOperate:(id)arg1;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)resetLoadingView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

