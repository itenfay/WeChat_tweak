//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedListView, WCFinderNearbyRelatedViewModel, WCFinderShareCustomTransition;
@protocol WCFinderNearbyRelatedViewControllerDelegate;

@interface WCFinderNearbyRelatedViewController
{
    id <WCFinderNearbyRelatedViewControllerDelegate> _delegate;
    WCFinderFeedListView *_feedListView;
    WCFinderNearbyRelatedViewModel *_viewModel;
    WCFinderShareCustomTransition *_animator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCFinderNearbyRelatedViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) __weak id <WCFinderNearbyRelatedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doShareAnimation;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onNearbyRelateExit;
- (void)onNearbyRelateReloadAllData;
- (void)onNearbyRelateFetchFailWithErrorCode:(int)arg1;
- (void)onNearbyRelatedAppendMore:(id)arg1;
- (void)onNearbyRelatedNoMore;
- (id)specialParamsForFeedId:(id)arg1;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (_Bool)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureTableView;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataItem:(id)arg1 isFromSNSPoi:(_Bool)arg2 location:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

