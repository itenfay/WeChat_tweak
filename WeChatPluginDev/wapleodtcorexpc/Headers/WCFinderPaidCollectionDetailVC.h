//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, UITableView, UITableViewDiffableDataSource, UIView, WCFinderDataLoadTips, WCFinderPaidCollectionConsumeLogic, WCFinderPaidCollectionDetailHeaderView, WCFinderPaidCollectionDetailVCParams, WCFinderPaidCollectionDetailVM, WCFinderPaymentBottomView, WCFinderRefreshTableFooterView, WCFinderStreamProfileDragBarView;

@interface WCFinderPaidCollectionDetailVC
{
    UIView *_globalBackgroundView;
    UIView *_contentContainerView;
    WCFinderStreamProfileDragBarView *_dragBarView;
    WCFinderPaidCollectionDetailHeaderView *_headerView;
    WCFinderRefreshTableFooterView *_footerView;
    UITableView *_tableView;
    WCFinderDataLoadTips *_dataLoadTips;
    WCFinderPaymentBottomView *_bottomPaymentView;
    WCFinderPaidCollectionDetailVM *_viewModel;
    UITableViewDiffableDataSource *_dataSource;
    WCFinderPaidCollectionDetailVCParams *_params;
    double _heightRatio;
    WCFinderPaidCollectionConsumeLogic *_courseConsumeLogic;
    NSMutableSet *_exposedFeedSet;
    NSString *_targetTidWhenStartConsume;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *targetTidWhenStartConsume; // @synthesize targetTidWhenStartConsume=_targetTidWhenStartConsume;
@property(retain, nonatomic) NSMutableSet *exposedFeedSet; // @synthesize exposedFeedSet=_exposedFeedSet;
@property(retain, nonatomic) WCFinderPaidCollectionConsumeLogic *courseConsumeLogic; // @synthesize courseConsumeLogic=_courseConsumeLogic;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(retain, nonatomic) WCFinderPaidCollectionDetailVCParams *params; // @synthesize params=_params;
@property(retain, nonatomic) UITableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) WCFinderPaidCollectionDetailVM *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderPaymentBottomView *bottomPaymentView; // @synthesize bottomPaymentView=_bottomPaymentView;
@property(retain, nonatomic) WCFinderDataLoadTips *dataLoadTips; // @synthesize dataLoadTips=_dataLoadTips;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderPaidCollectionDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCFinderStreamProfileDragBarView *dragBarView; // @synthesize dragBarView=_dragBarView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) UIView *globalBackgroundView; // @synthesize globalBackgroundView=_globalBackgroundView;
- (void)registerYReportSdk;
- (void)onPaidCollectionTopicID:(id)arg1 purchaseStateChanged:(_Bool)arg2;
- (_Bool)handleCollectionFeedListSelectNeedPayFeed:(id)arg1 withPaidCollection:(id)arg2;
- (void)onPaidCollectionConsumeLogicPurchaseCourseSuccessWithMsg:(id)arg1;
- (id)getCurrentViewController;
- (void)onPaymentBottomViewClickConfirmButton;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(_Bool)arg2;
- (_Bool)paidCollectionDetailHeaderIsAuthorScene:(id)arg1;
- (_Bool)paidCollectionDetailHeaderIsHalfScreen:(id)arg1;
- (void)onPaidCollectionDetailHeaderDidClickMoreBtn:(id)arg1;
- (void)onPaidCollectionDetailHeaderHeightChanged:(id)arg1;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfContainerView;
- (void)onFeedArrayChanged:(id)arg1 context:(id)arg2;
- (void)handlePopGesture:(id)arg1;
- (void)_showMoreAction;
- (void)onMoreButtonClicked:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)reportCellEventWithIndexPath:(id)arg1 event:(id)arg2;
- (void)tryToStartPaidCollectionConsumeWithTargetTid:(id)arg1;
- (void)updateBottomHeaderView;
- (void)updatePollingState;
- (void)removeDataLoadTips;
- (void)showDataLoadTips;
- (double)containerViewHeight;
- (_Bool)isHalfScreen;
- (void)setupDataSource;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateNavigationBar;
- (void)updateBottomInset;
- (void)layoutLoadTips;
- (void)layoutUI;
- (void)setupUI;
- (void)resetDataProvider;
- (void)setupNewDataProvider;
- (void)viewDidLoad;
- (void)dealloc;
- (void)baseInit;
- (id)initWithParams:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

