//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView, UITableViewDiffableDataSource, WCFinderDataLoadTips, WCFinderPaidCollectionListVM, WCFinderRefreshTableFooterView;

@interface WCFinderPaidCollectionListVC
{
    WCFinderPaidCollectionListVM *_viewModel;
    UITableView *_tableView;
    UITableViewDiffableDataSource *_tableViewDataSource;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderDataLoadTips *_dataLoadTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataLoadTips *dataLoadTips; // @synthesize dataLoadTips=_dataLoadTips;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderPaidCollectionListVM *viewModel; // @synthesize viewModel=_viewModel;
- (void)onDataLoadTipsClickRetry;
- (void)updateLoadingState;
- (void)onListLoadingStateModified;
- (void)onPaidCollectionListDataChanged;
- (void)reloadTableData;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)removeDataLoadTips;
- (void)showDataLoadTips;
- (void)layoutLoadTips;
- (void)viewWillLayoutSubviews;
- (void)setupDataSource;
- (void)setupLoadingState;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

