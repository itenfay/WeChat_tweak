//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedListView, WCFinderShareCustomTransition, WCFinderTopicListDetailViewModel;
@protocol WCFinderTopicListDetailViewControllerDelegate;

@interface WCFinderTopicListDetailViewController
{
    int _topicType;
    int _fromScene;
    id <WCFinderTopicListDetailViewControllerDelegate> _delegate;
    WCFinderFeedListView *_feedListView;
    unsigned long long _firstViewOffset;
    WCFinderTopicListDetailViewModel *_viewModel;
    NSString *_displayTitle;
    unsigned long long _enterTime;
    WCFinderShareCustomTransition *_animator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(retain, nonatomic) WCFinderTopicListDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long firstViewOffset; // @synthesize firstViewOffset=_firstViewOffset;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
@property(nonatomic) __weak id <WCFinderTopicListDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)registerYReportSdk;
- (id)getCurMediaListObject;
- (int)fromViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (void)onFinderTopicListFeedWithTid:(id)arg1 pinToTop:(_Bool)arg2 errorCode:(int)arg3;
- (void)onFinderTopicListBeDeletedWith:(id)arg1 originIndex:(long long)arg2;
- (void)onFinderTopicListResultEmpty;
- (void)onFinderTopicListResultError;
- (void)onFinderTopicListAppendData:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderTopicListNextPageError;
- (void)onFinderTopicListResultChanged;
- (void)onFinderTopicListResultNoMore;
- (id)specialParamsForFeedId:(id)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (id)postMgrSourceInfo:(id)arg1;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)postMgrGetMusicInfo;
- (id)onPostFollowTemplateFeedId;
- (id)onPostMusicIds:(id)arg1;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(_Bool)arg1 postMgr:(id)arg2;
- (id)extInfoInLog21874;
- (unsigned long long)postMgrCreateScene;
- (int)postMgrUserPrepareScene;
- (_Bool)isInSubScene;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (_Bool)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 customResponseSelecteItem:(id)arg3;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
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
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureTableView;
- (_Bool)useTransparentNavibar;
- (id)udfKVDict;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithListVM:(id)arg1 offset:(unsigned long long)arg2 displayTitle:(id)arg3 fromScene:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

