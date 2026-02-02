//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString, WCFinderFavListDetailViewModel, WCFinderFeedListView, WCFinderShareCustomTransition;

@interface WCFinderFavListDetailViewController
{
    CDUnknownBlockType _backBlock;
    NSNumber *_givingCommentScene;
    unsigned long long _firstViewOffset;
    WCFinderFeedListView *_feedListView;
    WCFinderFavListDetailViewModel *_viewModel;
    NSString *_displayTitle;
    WCFinderShareCustomTransition *_animator;
}

+ (id)genDeleteTransferCtxByCommentScene:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(retain, nonatomic) WCFinderFavListDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) unsigned long long firstViewOffset; // @synthesize firstViewOffset=_firstViewOffset;
@property(retain, nonatomic) NSNumber *givingCommentScene; // @synthesize givingCommentScene=_givingCommentScene;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)registerYReportSdk;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)finderFavListLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderSearchListNextPageError;
- (void)onFinderSearchListResultChanged;
- (void)onFinderSearchListResultNoMore;
- (void)onFinderSearchListEmpty;
- (void)removeContentVM:(id)arg1;
- (void)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 delContentVM:(id)arg3;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (_Bool)finderFeedListViewShowsMoreButton:(id)arg1;
- (_Bool)isInSubScene;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
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
- (id)initWithListVM:(id)arg1 offset:(unsigned long long)arg2 displayTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

