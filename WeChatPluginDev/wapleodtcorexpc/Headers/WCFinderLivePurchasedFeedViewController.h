//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePurchasedFeedViewModel, MMFinderLiveTask, MMLoadingView, MMTableView, MMUILabel, NSString, WCTimeLineFooterView;

@interface WCFinderLivePurchasedFeedViewController
{
    _Bool _resetTableViewOnViewSizeChange;
    MMFinderLiveTask *_liveTask;
    MMLoadingView *_loadingView;
    MMUILabel *_emptyTitleLabel;
    WCTimeLineFooterView *_footerView;
    MMTableView *_purchasedFeedsTableView;
    MMFinderLivePurchasedFeedViewModel *_viewModel;
    struct CGSize _lastLayoutSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(retain, nonatomic) MMFinderLivePurchasedFeedViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMTableView *purchasedFeedsTableView; // @synthesize purchasedFeedsTableView=_purchasedFeedsTableView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMUILabel *emptyTitleLabel; // @synthesize emptyTitleLabel=_emptyTitleLabel;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(nonatomic) _Bool resetTableViewOnViewSizeChange; // @synthesize resetTableViewOnViewSizeChange=_resetTableViewOnViewSizeChange;
- (void)onPurchasedFeedViewModelUpdated:(_Bool)arg1 hasMoreData:(_Bool)arg2;
- (void)onPurchasedFeedViewModelStartFetching;
- (void)onFinderObjectSelected:(id)arg1 AtIndexPath:(id)arg2;
- (void)onFinderECObjectSelected:(id)arg1 AtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)udfDictForRowAtIndexPath:(id)arg1;
- (id)genDeleteConfirmIcon;
- (id)genImageOfView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadData;
- (void)onHelpButtonClick;
- (void)onBackButtonClicked:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)layoutContentView;
- (void)setupData;
- (void)setupTableView;
- (void)setupUI;
- (void)bindPageReport;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

