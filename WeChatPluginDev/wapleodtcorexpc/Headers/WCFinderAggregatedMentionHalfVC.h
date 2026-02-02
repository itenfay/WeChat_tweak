//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView, UITableViewDiffableDataSource, WCFinderAggregatedMentionHalfVM, WCFinderDataLoadTips, WCFinderRefreshTableFooterView;

@interface WCFinderAggregatedMentionHalfVC
{
    WCFinderAggregatedMentionHalfVM *_vm;
    UITableViewDiffableDataSource *_dataSource;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderDataLoadTips *_dataLoadTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataLoadTips *dataLoadTips; // @synthesize dataLoadTips=_dataLoadTips;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UITableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) WCFinderAggregatedMentionHalfVM *vm; // @synthesize vm=_vm;
- (void)onDataLoadTipsClickRetry;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)onAggregatedMentionListDataChanged;
- (void)onListLoadingStateModified;
- (int)feedViewControllerScene;
- (void)layoutLoadTips;
- (void)removeDataLoadTips;
- (void)showDataLoadTips;
- (void)updateLoadingState;
- (void)setupLoadingState;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clickToShowUserProfileWithMention:(id)arg1;
- (void)reloadTableData;
- (void)setupDataSource;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)mainScrollView;
- (id)loadContentView;
- (void)baseInit;
- (id)initWithMention:(id)arg1 finderContact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

