//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedContentVM, WCFinderFeedListView, WCFinderMemberShipFeedTabDetailViewModel, WCFinderShareCustomTransition;

@interface WCFinderMemberShipFeedTabDetailViewController
{
    WCFinderFeedListView *_feedListView;
    WCFinderMemberShipFeedTabDetailViewModel *_viewModel;
    WCFinderFeedContentVM *_preVCData;
    WCFinderShareCustomTransition *_animator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCFinderFeedContentVM *preVCData; // @synthesize preVCData=_preVCData;
@property(retain, nonatomic) WCFinderMemberShipFeedTabDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
- (void)finderMemberShipZoneFeedTabDetailViewDeleteDataItemVM;
- (void)finderMemberShipZoneFeedTabDetailViewFetchListFail;
- (void)finderMemberShipZoneFeedTabDetailViewFetchListSuc;
- (void)finderMemberShipZoneFeedTabDetailViewNoMoreData;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)changeContentVM:(id)arg1 stickyTopStatus:(_Bool)arg2;
- (_Bool)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 customResponseSelecteItem:(id)arg3;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (_Bool)finderFeedListViewShowsMoreButton:(id)arg1;
- (_Bool)isInSubScene;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
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
- (id)initWithFeedTabViewModel:(id)arg1 preVCData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

