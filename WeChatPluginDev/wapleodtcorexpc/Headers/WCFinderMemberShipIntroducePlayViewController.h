//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedContentVM, WCFinderFeedListView, WCFinderMemberShipConsumeViewModel, WCFinderMemberShipIntroduceListData, WCFinderMemberShipIntroducePlayViewModel, WCFinderMemberShipPreviewListViewModel, WCFinderShareCustomTransition;

@interface WCFinderMemberShipIntroducePlayViewController
{
    WCFinderFeedListView *_feedListView;
    WCFinderFeedContentVM *_preVCData;
    WCFinderShareCustomTransition *_animator;
    WCFinderMemberShipIntroducePlayViewModel *_viewModel;
    WCFinderMemberShipPreviewListViewModel *_previewListViewModel;
    WCFinderMemberShipConsumeViewModel *_consumeViewModel;
    WCFinderMemberShipIntroduceListData *_headerData;
    unsigned long long _currentFocusIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentFocusIndex; // @synthesize currentFocusIndex=_currentFocusIndex;
@property(retain, nonatomic) WCFinderMemberShipIntroduceListData *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) WCFinderMemberShipConsumeViewModel *consumeViewModel; // @synthesize consumeViewModel=_consumeViewModel;
@property(retain, nonatomic) WCFinderMemberShipPreviewListViewModel *previewListViewModel; // @synthesize previewListViewModel=_previewListViewModel;
@property(retain, nonatomic) WCFinderMemberShipIntroducePlayViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCFinderFeedContentVM *preVCData; // @synthesize preVCData=_preVCData;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
- (id)getCurrentViewController;
- (void)onConfirmButtonClicked;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)showToastWithTargetContentOffset:(struct CGPoint)arg1;
- (void)finderFeedListView:(id)arg1 scrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (_Bool)finderFeedListViewShowsMoreButton:(id)arg1;
- (_Bool)isInSubScene;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (_Bool)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)deleteContentVM:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContentVMs:(id)arg1 currentIndex:(unsigned long long)arg2 listdata:(id)arg3 feedType:(int)arg4 finderUsername:(id)arg5 entranceSource:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

