//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView, UITableViewDiffableDataSource, UIView, WCFinderAnimationLoadingView, WCFinderCollectionFeedListViewModel, WCFinderCollectionHalfDescHeader, WCFinderCollectionHalfHeaderRefreshView, WCFinderCollectionHalfViewParams, WCFinderPaidCollectionConsumeLogic, WCFinderPaymentBottomView, WCFinderRefreshTableFooterView, WCFinderStreamProfileDragBarView;
@protocol WCFinderCollectionHalfScreenViewControllerDelegate;

@interface WCFinderCollectionHalfScreenViewController
{
    _Bool _headerViewRefreshing;
    _Bool _shouldShowHighlight;
    _Bool _arrivedFromEpisode;
    id <WCFinderCollectionHalfScreenViewControllerDelegate> _collectionDelegate;
    CDUnknownBlockType _beforePushVCBlock;
    CDUnknownBlockType _afterPopVCBlock;
    UIView *_containerView;
    WCFinderStreamProfileDragBarView *_dragBarView;
    UIView *_fixedLineContainer;
    UIView *_scrollableContainer;
    UITableView *_tableView;
    WCFinderCollectionHalfHeaderRefreshView *_headerRefreshView;
    UIView *_emptyHeaderView;
    WCFinderCollectionHalfDescHeader *_descHeader;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderPaymentBottomView *_bottomPaymentView;
    WCFinderCollectionFeedListViewModel *_viewModel;
    double _heightRatio;
    UITableViewDiffableDataSource *_dataSource;
    WCFinderPaidCollectionConsumeLogic *_courseConsumeLogic;
    NSString *_targetTidWhenStartConsume;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *targetTidWhenStartConsume; // @synthesize targetTidWhenStartConsume=_targetTidWhenStartConsume;
@property(retain, nonatomic) WCFinderPaidCollectionConsumeLogic *courseConsumeLogic; // @synthesize courseConsumeLogic=_courseConsumeLogic;
@property(retain, nonatomic) UITableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool arrivedFromEpisode; // @synthesize arrivedFromEpisode=_arrivedFromEpisode;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(nonatomic) _Bool shouldShowHighlight; // @synthesize shouldShowHighlight=_shouldShowHighlight;
@property(retain, nonatomic) WCFinderCollectionFeedListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool headerViewRefreshing; // @synthesize headerViewRefreshing=_headerViewRefreshing;
@property(retain, nonatomic) WCFinderPaymentBottomView *bottomPaymentView; // @synthesize bottomPaymentView=_bottomPaymentView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderCollectionHalfDescHeader *descHeader; // @synthesize descHeader=_descHeader;
@property(retain, nonatomic) UIView *emptyHeaderView; // @synthesize emptyHeaderView=_emptyHeaderView;
@property(retain, nonatomic) WCFinderCollectionHalfHeaderRefreshView *headerRefreshView; // @synthesize headerRefreshView=_headerRefreshView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *scrollableContainer; // @synthesize scrollableContainer=_scrollableContainer;
@property(retain, nonatomic) UIView *fixedLineContainer; // @synthesize fixedLineContainer=_fixedLineContainer;
@property(retain, nonatomic) WCFinderStreamProfileDragBarView *dragBarView; // @synthesize dragBarView=_dragBarView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType afterPopVCBlock; // @synthesize afterPopVCBlock=_afterPopVCBlock;
@property(copy, nonatomic) CDUnknownBlockType beforePushVCBlock; // @synthesize beforePushVCBlock=_beforePushVCBlock;
@property(nonatomic) __weak id <WCFinderCollectionHalfScreenViewControllerDelegate> collectionDelegate; // @synthesize collectionDelegate=_collectionDelegate;
- (void)updateTopHeaderView;
- (void)updateBottomHeaderView;
- (void)updatePollingState;
- (void)onViewModelFeedArrayChanged:(id)arg1 context:(id)arg2;
- (void)onPaidCollectionConsumeLogicPurchaseCourseSuccessWithMsg:(id)arg1;
- (void)onPaymentBottomViewClickConfirmButton;
- (void)collectionHalfDescHeaderHeightUpdate:(id)arg1;
- (void)collectionHalfDescHeaderDidClickMoreButton:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(_Bool)arg2;
- (void)dragBarViewWillBegin:(id)arg1;
- (id)getHalfDismissTransition;
- (_Bool)isHideBackgroupMask;
- (_Bool)isHideBorderShadow;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (id)createTableView;
- (void)doClickCloseWithNeedAnimated:(_Bool)arg1 action:(long long)arg2;
- (_Bool)needCloseOnOrientationChanged;
- (void)_reportContentReportBtnClick;
- (void)_reportContentReportBtnExpose;
- (void)handleConsumeSuccess;
- (void)startPaidCollectionConsumeWithTargetTid:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)fromCommentVC;
- (void)dismissSelfAndPresentingVC;
- (id)findPreviewNavigationVC;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_setupReportWithCell:(id)arg1 contentVM:(id)arg2 indexPah:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)adjustTableViewBottomInset;
- (void)fetchFirstPageWithAnimation;
- (void)retryEmptyFetchAction:(id)arg1;
- (void)showRetryView;
- (void)tryScrollToFromEpisode;
- (void)layoutUI;
- (void)setupDatasource;
- (void)setupUI;
- (double)customTopViewHeight;
- (void)autoPop;
- (double)getMaxHalfScreenHeight;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isForbidPanGesture;
- (_Bool)useTransparentNavibar;
- (void)baseInit;
@property(readonly, nonatomic) WCFinderCollectionHalfViewParams *params;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

