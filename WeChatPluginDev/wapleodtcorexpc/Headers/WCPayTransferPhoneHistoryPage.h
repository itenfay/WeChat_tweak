//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMRefreshTableFooterView, MMTableView, MMUIActivityIndicatorView, NSString, TransferPhoneGetHisRcvrsResp, UILabel, UIView, WCPayCss;
@protocol WCPayTransferPhoneHistoryPageDelegate;

@interface WCPayTransferPhoneHistoryPage
{
    MMRefreshTableFooterView *_footerView;
    id <WCPayTransferPhoneHistoryPageDelegate> _m_delegate;
    MMTableView *_m_tableView;
    WCPayCss *_css;
    TransferPhoneGetHisRcvrsResp *_hisRcvrsResp;
    UILabel *_loadingLabel;
    MMUIActivityIndicatorView *_indicatorView;
    unsigned long long _loadingState;
    UIView *_headerView;
}

- (void).cxx_destruct;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain) TransferPhoneGetHisRcvrsResp *hisRcvrsResp; // @synthesize hisRcvrsResp=_hisRcvrsResp;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) MMTableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property __weak id <WCPayTransferPhoneHistoryPageDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain) MMRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)reloadTableView;
- (void)updateIndicator;
- (void)updateLoadingLabel;
- (void)updateFooterView;
- (void)updateHeaderView;
- (void)viewDidLoad;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

