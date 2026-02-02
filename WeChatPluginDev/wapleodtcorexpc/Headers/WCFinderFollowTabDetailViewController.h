//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSString, WCFinderFeedListView, WCFinderFollowTabDetailBaseViewModel, WCFinderFollowTabDetailVCReporter, WCFinderShareCustomTransition;
@protocol WCFinderFollowTabDetailVCDelegate;

@interface WCFinderFollowTabDetailViewController
{
    int _commentScene;
    id <WCFinderFollowTabDetailVCDelegate> _delegate;
    CDUnknownBlockType _exitBlock;
    WCFinderFeedListView *_feedListView;
    WCFinderFollowTabDetailBaseViewModel *_viewModel;
    WCFinderShareCustomTransition *_animator;
    WCFinderFollowTabDetailVCReporter *_reporter;
    NSIndexPath *_currentMaxIndexPath;
}

- (void).cxx_destruct;
@property(nonatomic) NSIndexPath *currentMaxIndexPath; // @synthesize currentMaxIndexPath=_currentMaxIndexPath;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderFollowTabDetailVCReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCFinderFollowTabDetailBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(copy, nonatomic) CDUnknownBlockType exitBlock; // @synthesize exitBlock=_exitBlock;
@property(nonatomic) __weak id <WCFinderFollowTabDetailVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (int)followDetailVMGetCommentScene;
- (void)onFollowTabDetailVMDataDeleteDataAtIndex:(long long)arg1;
- (void)onFollowTabDetailVMDataAppendFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)onFollowTabDetailVMDataEmpty;
- (void)onFollowTabDetailVMDataChange;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
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
- (void)configureFeedListView;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFinderUsername:(id)arg1 lastTid:(id)arg2 nonceID:(id)arg3;
- (id)initWithFeedFollowVM:(id)arg1 preVCData:(id)arg2 reporter:(id)arg3 postFeedInsertMachineTab:(_Bool)arg4;
- (id)initWithFeedFollowVM:(id)arg1 preVCData:(id)arg2 postFeedInsertMachineTab:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

