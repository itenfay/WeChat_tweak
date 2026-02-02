//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMOrderCenterTableView, NSMutableArray, NSString, UIImage, UIImageView, UILabel, UIView, WCFinderRefreshTableFooterView;
@protocol MMOrderCenterOrderDataProvider, MMOrderCenterReporter;

@interface MMOrderCenterTableViewController
{
    _Bool _loading;
    MMOrderCenterTableView *_tableView;
    id <MMOrderCenterReporter> _reporter;
    id <MMOrderCenterOrderDataProvider> _dataProvider;
    NSMutableArray *_orders;
    UILabel *_listEmptyView;
    UIImage *_listLoadingImage;
    UIImageView *_listLoadingView;
    UIView *_loadErrorView;
    long long _lastSelectedIndex;
    WCFinderRefreshTableFooterView *_noMoreView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *noMoreView; // @synthesize noMoreView=_noMoreView;
@property(nonatomic) long long lastSelectedIndex; // @synthesize lastSelectedIndex=_lastSelectedIndex;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIView *loadErrorView; // @synthesize loadErrorView=_loadErrorView;
@property(retain, nonatomic) UIImageView *listLoadingView; // @synthesize listLoadingView=_listLoadingView;
@property(retain, nonatomic) UIImage *listLoadingImage; // @synthesize listLoadingImage=_listLoadingImage;
@property(retain, nonatomic) UILabel *listEmptyView; // @synthesize listEmptyView=_listEmptyView;
@property(retain, nonatomic) NSMutableArray *orders; // @synthesize orders=_orders;
@property(retain, nonatomic) id <MMOrderCenterOrderDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) id <MMOrderCenterReporter> reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MMOrderCenterTableView *tableView; // @synthesize tableView=_tableView;
- (void)reportEvent:(id)arg1 params:(id)arg2;
- (void)reportEnteringReviewOfOrder:(id)arg1;
- (void)reportEnteringReferrerFinderProfileOfOrder:(id)arg1;
- (void)reportEnteringShippingDetailsOfOrder:(id)arg1;
- (void)reportEnteringStoreOfOrder:(id)arg1;
- (void)reportEnteringDetailsOfOrder:(id)arg1;
- (void)removeRotationAnimationFromView:(id)arg1;
- (void)addRotationAnimationToView:(id)arg1;
- (void)navigateToWeAppWithAppUsername:(id)arg1 path:(id)arg2;
- (void)navigateToWeAppWithId:(id)arg1 path:(id)arg2;
- (double)cellHeightForOrder:(id)arg1 estimate:(_Bool)arg2;
- (id)cellTypeForOrder:(id)arg1;
- (void)registerCellTypes;
- (void)fetchMoreOrderListItems;
- (id)newErrorView;
- (void)configureLoadErrorViewForShowing:(_Bool)arg1;
- (void)configureListEmptyViewForShowing:(_Bool)arg1;
- (void)configureOrderListForShowing:(_Bool)arg1;
- (void)configureNoMoreViewForShowing:(_Bool)arg1;
- (void)configureLoadingViewForShowing:(_Bool)arg1;
- (void)configureViewHidingForStatus:(long long)arg1;
- (void)checkAndConfigureListEmptyView;
- (void)fetchOrderListFailedWithErrorType:(int)arg1 message:(id)arg2;
- (void)fetchOrderListSucceededWithOrders:(id)arg1 startover:(_Bool)arg2;
- (void)refreshOrdersStartingFromIndex:(unsigned long long)arg1;
- (void)onGlobalOrderRefreshRequestedByOrderTableViewController:(id)arg1;
- (void)onReviewButtonTappedForOrder:(id)arg1;
- (void)onTrackingViewTappedForOrder:(id)arg1;
- (void)onSkuListExpandTappedForOrder:(id)arg1;
- (void)onHeaderStoreTappedForOrder:(id)arg1;
- (void)onFinderRefererTappedForOrder:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)fetchOrderListForcingRefresh:(_Bool)arg1;
- (id)initWithOrderDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

