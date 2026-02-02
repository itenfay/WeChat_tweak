//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUISearchBar, NSString, RichTextView, UIImageView, UITableView, UIView, WCFinderAuthoritySearchListViewController, WCFinderRefreshTableFooterView;
@protocol WCFinderAuthorityListViewModelProtocol;

@interface WCFinderAuthorityManagerListViewController
{
    _Bool _autoHideSearchBar;
    UITableView *_tableView;
    id <WCFinderAuthorityListViewModelProtocol> _viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    RichTextView *_tipsView;
    UIImageView *_reloadIconView;
    MMUISearchBar *_searchBar;
    UIView *_searchContainer;
    WCFinderAuthoritySearchListViewController *_searchVC;
    RichTextView *_titleTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(nonatomic) _Bool autoHideSearchBar; // @synthesize autoHideSearchBar=_autoHideSearchBar;
@property(retain, nonatomic) WCFinderAuthoritySearchListViewController *searchVC; // @synthesize searchVC=_searchVC;
@property(retain, nonatomic) UIView *searchContainer; // @synthesize searchContainer=_searchContainer;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIImageView *reloadIconView; // @synthesize reloadIconView=_reloadIconView;
@property(retain, nonatomic) RichTextView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) id <WCFinderAuthorityListViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void)registerYReportSdk;
- (void)showWCBlackListView;
- (void)showWCOutsiderView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (double)getContentViewY;
- (double)getMainTableBottomInset;
- (double)getMainTableHeight;
- (double)changeSearchStatusAdjustHeight;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)WCFinderShieldOtherLiedSearchFeedViewControllerExit:(id)arg1;
- (void)viewModelBatchConfigFinish:(id)arg1 hasFailed:(_Bool)arg2;
- (_Bool)isViewModelHasData;
- (void)resetEmptyStatusTips;
- (void)viewModelRemoveItemAtIndexPath:(id)arg1;
- (void)viewModelRemovedItemFailed:(id)arg1 errorInfo:(id)arg2;
- (void)viewModelLoadFailed:(id)arg1;
- (void)viewModelDataDidChanged:(id)arg1;
- (void)reloadDataWrap;
- (void)viewModelHasNoMoreData:(id)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)clickRightAddButton;
- (void)onClickSearch;
- (void)updateSearchContainerPosition;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)contactCellHeight;
- (id)getHeaderTipsRichTextViewWithTips:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)respondsToSearchBar;
- (double)fixDisplayOffsetY;
- (void)adjustContentSizeAndOffset;
- (void)adjustSearchBarAndInset;
- (void)setupDisplaySearchBar;
- (void)initSearchBar;
- (void)layoutTipsTextIconViews;
- (void)configDisplayRetryView:(_Bool)arg1;
- (void)configDisplayTipsView:(id)arg1;
- (void)configureRightButton;
- (void)updateTableViewHeaderView;
- (void)configureTableView;
- (void)setupNavBar;
- (_Bool)showNavigationBarSepLine;
@property(readonly, nonatomic) double contentOffsetY;
- (void)viewWillLayoutSubviews;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
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

