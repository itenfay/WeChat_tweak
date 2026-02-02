//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppViewController, NSString, UIView, WCFinderBusinessCustomListDetailViewModel, WCFinderFeedDetailStatusView, WCFinderFeedListView, WCFinderShareCustomTransition;
@protocol WCFinderBusinessCustomListDetailViewControllerDelegate;

@interface WCFinderBusinessCustomListDetailViewController
{
    _Bool _isPresentedScene;
    int _commentScene;
    int _fromCommentScene;
    id <WCFinderBusinessCustomListDetailViewControllerDelegate> _delegate;
    WCFinderFeedListView *_feedListView;
    unsigned long long _firstViewOffset;
    WCFinderBusinessCustomListDetailViewModel *_viewModel;
    unsigned long long _enterTime;
    WCFinderShareCustomTransition *_animator;
    WCFinderFeedDetailStatusView *_statusView;
    MMLiteAppViewController *_embedLiteAppVC;
    UIView *_embedLiteAppView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPresentedScene; // @synthesize isPresentedScene=_isPresentedScene;
@property(retain, nonatomic) UIView *embedLiteAppView; // @synthesize embedLiteAppView=_embedLiteAppView;
@property(retain, nonatomic) MMLiteAppViewController *embedLiteAppVC; // @synthesize embedLiteAppVC=_embedLiteAppVC;
@property(retain, nonatomic) WCFinderFeedDetailStatusView *statusView; // @synthesize statusView=_statusView;
@property(nonatomic) int fromCommentScene; // @synthesize fromCommentScene=_fromCommentScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) WCFinderBusinessCustomListDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long firstViewOffset; // @synthesize firstViewOffset=_firstViewOffset;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) __weak id <WCFinderBusinessCustomListDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)present:(id)arg1;
- (void)onClickClose:(_Bool)arg1;
- (void)didClickBack:(id)arg1;
- (void)registerYReportSdk;
- (long long)totalBusinessNum;
- (_Bool)isLoadingNextFeed;
- (long long)totalFeedNum;
- (void)appendBusinessModelArray:(id)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (int)fromViewControllerScene;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (void)onFinderTopicListBeDeletedWith:(id)arg1 originIndex:(long long)arg2;
- (void)onFinderTopicListResultEmpty;
- (void)onFinderTopicListResultError;
- (void)onFinderBusinessListAppendData:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderBusinessListNextPageError;
- (void)onFinderBusinessListResultChanged:(_Bool)arg1;
- (void)onFinderBusinessListResultTopNoMore;
- (void)onFinderBusinessListResultNoMore;
- (void)onFinderBusinessListFetchTopError;
- (void)closeCurPageCompletion:(CDUnknownBlockType)arg1;
- (void)onFinderBusinessListOnStateOpenComplaintUrl:(id)arg1;
- (void)updateLandSpace:(struct CGSize)arg1;
- (void)onFinderBusinessListStopCurrentFeedPlay;
- (void)relayoutEmbedLiteAppView;
- (void)addEmbedLiteAppViewWithVC:(id)arg1;
- (void)onFinderBusinessListOnStateOpenLiteApp:(id)arg1;
- (void)onFinderBusinessListOnStateOfNotExist:(id)arg1;
- (void)onFinderBusinessListFetchTopContentVM:(id)arg1 isPrefetch:(_Bool)arg2;
- (id)specialParamsForFeedId:(id)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (_Bool)isInSubScene;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewHeaderCanFetchData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)onLimitedClicked;
- (void)updateRightBarButtonItems;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOffset:(unsigned long long)arg1 commentScene:(int)arg2 configTransition:(_Bool)arg3 fromCommentScene:(int)arg4 isPresentedScene:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

