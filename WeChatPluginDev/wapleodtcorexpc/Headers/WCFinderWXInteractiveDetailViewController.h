//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedListView, WCFinderShareCustomTransition, WCFinderWXInteractiveDetailViewModel;

@interface WCFinderWXInteractiveDetailViewController
{
    long long _offset;
    WCFinderFeedListView *_feedListView;
    WCFinderWXInteractiveDetailViewModel *_viewModel;
    WCFinderShareCustomTransition *_animator;
}

+ (id)genDeleteTransferCtxByCommentScene:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) WCFinderWXInteractiveDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onWXInteractiveListNextPageError;
- (void)onWXInteractiveListResultChanged;
- (void)onWXInteractiveListResultNoMore;
- (void)onWXInteractiveListLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onWXInteractiveListEmpty;
- (void)removeContentVM:(id)arg1;
- (void)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 delContentVM:(id)arg3;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (_Bool)finderFeedListViewShowsMoreButton:(id)arg1;
- (_Bool)isInSubScene;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)viewDidTransitionToNewSize;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSelectType:(long long)arg1 dataProvider:(id)arg2 offset:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

