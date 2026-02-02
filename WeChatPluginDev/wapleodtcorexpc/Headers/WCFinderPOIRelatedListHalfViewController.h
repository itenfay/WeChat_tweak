//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderUserPagePoi, NSString, UIImageView, UILabel, UITableView, WCFinderAnimationLoadingView, WCFinderPOIRelatedListHalfTableViewSearchHeader, WCFinderPOIRelatedListHalfViewModel, WCFinderRefreshTableFooterView;
@protocol WCFinderPOIRelatedListHalfViewControllerDelegate;

@interface WCFinderPOIRelatedListHalfViewController
{
    id <WCFinderPOIRelatedListHalfViewControllerDelegate> _actionDelegate;
    UITableView *_tableView;
    FinderUserPagePoi *_finderUserPagePoi;
    WCFinderPOIRelatedListHalfViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderPOIRelatedListHalfTableViewSearchHeader *_headerView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UIImageView *_retryImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderPOIRelatedListHalfTableViewSearchHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderPOIRelatedListHalfViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) FinderUserPagePoi *finderUserPagePoi; // @synthesize finderUserPagePoi=_finderUserPagePoi;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCFinderPOIRelatedListHalfViewControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onSearchActionStart;
- (void)onFetchResultSuccess;
- (void)onFetchResultError;
- (void)onFetchResultNoMore;
- (void)onSearchStateChanged:(_Bool)arg1;
- (void)onSearchCancel;
- (void)onSearchAction:(id)arg1;
- (void)onBeginSearch;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)resetStateTipsLabelWithRetry:(_Bool)arg1;
- (void)resetLoadingState;
- (void)fetchFirstPageData;
- (void)startLoadingState;
- (void)stateRetryGestureAction:(id)arg1;
- (void)setupTipsLabel;
- (void)configTableView;
- (void)initSubView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

