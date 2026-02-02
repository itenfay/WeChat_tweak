//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSArray, NSString, UITableView, WCFinderCollectionDetailListViewModel, WCFinderRefreshTableFooterView;

@interface WCFinderCollectionDetailListViewController
{
    int _commentScene;
    UITableView *_tableView;
    NSArray *_collectionList;
    WCFinderCollectionDetailListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    MMUIButton *_emptyTipsRetryButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *emptyTipsRetryButton; // @synthesize emptyTipsRetryButton=_emptyTipsRetryButton;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderCollectionDetailListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSArray *collectionList; // @synthesize collectionList=_collectionList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderCollectionDetailListEndLoading;
- (void)finderCollectionDetailListStartLoading;
- (void)finderCollectionDetailListRequestFailed;
- (void)finderCollectionDetailListDataChangedWithContinueFlag:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_setupReportWithCell:(id)arg1 collection:(id)arg2 indexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)retryButtonClicked:(id)arg1;
- (void)onBack;
- (void)hideEmptyTips;
- (void)showEmptyTips:(id)arg1 canRetry:(_Bool)arg2;
- (void)_setupPageReport;
- (void)configureTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;
- (_Bool)useCustomNavibar;
- (id)navigationBarBackgroundColor;
- (_Bool)showNavigationBarSepLine;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

