//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderCreateCoordinator, WCFinderFeedListView, WCFinderProfileViewModel, WCFinderRefreshTableFooterView, WCFinderShareCustomTransition;

@interface WCFinderProfileViewController
{
    _Bool _forcePushProfileAtHeaderClick;
    _Bool _hasOperateStickyTop;
    WCFinderProfileViewModel *_viewModel;
    unsigned long long _firstViewOffset;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderFeedListView *_feedListView;
    WCFinderCreateCoordinator *_createCoordinator;
    NSString *_bizInfoId;
    WCFinderShareCustomTransition *_animator;
    NSString *_traceId;
    NSString *_sourceFeedId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceFeedId; // @synthesize sourceFeedId=_sourceFeedId;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) WCFinderShareCustomTransition *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) NSString *bizInfoId; // @synthesize bizInfoId=_bizInfoId;
@property(nonatomic) _Bool hasOperateStickyTop; // @synthesize hasOperateStickyTop=_hasOperateStickyTop;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) _Bool forcePushProfileAtHeaderClick; // @synthesize forcePushProfileAtHeaderClick=_forcePushProfileAtHeaderClick;
@property(nonatomic) unsigned long long firstViewOffset; // @synthesize firstViewOffset=_firstViewOffset;
@property(retain, nonatomic) WCFinderProfileViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)getCustomTransitionAnimator:(_Bool)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (void)doShareAnimation;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)registerYReportSdk;
- (id)clientInfoInLog18054;
- (id)extInfoInLog21874;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onLoadingStateChanged:(id)arg1;
- (void)updateFooterStatus;
- (void)showPrivateAccountAlert;
- (void)profileViewModelShowPrivateAccountTips:(id)arg1;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (void)profileViewModel:(id)arg1 changeData:(id)arg2;
- (void)changeStickyTopStatus:(_Bool)arg1 contentVM:(id)arg2;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (id)specialParamsForFeedId:(id)arg1;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (id)minimizePageBizKey;
- (_Bool)finderFeedListViewShouldDragDownCloseInvoke;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (_Bool)finderFeedListViewControllerShuldUseAnimationFromVC:(id)arg1 toVC:(id)arg2 isClosure:(_Bool)arg3;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (_Bool)finderFeedListView:(id)arg1 processingHeaderClick:(id)arg2 avatarType:(unsigned long long)arg3 contentVM:(id)arg4;
- (_Bool)isInSubScene;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (_Bool)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 customResponseSelecteItem:(id)arg3;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)updateTopPullingState;
- (void)finderFeedListViewOnPollFetchTopData:(id)arg1;
- (_Bool)finderFeedListViewCanPollFetchTopData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)onFeedArrayChanged:(id)arg1;
- (_Bool)shouldInteruptHeaderClickWithFeedListView:(id)arg1 processingHeaderClick:(id)arg2 contentVM:(id)arg3;
- (void)viewDidTransitionToNewSize;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)currentFeedMediaCell;
@property(readonly, copy, nonatomic) NSString *username;
- (void)configureTableView;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)handleConflictWithLive;
- (id)initWithProfileVM:(id)arg1 selectedFeedId:(id)arg2;
- (id)initWithProfileVM:(id)arg1 offset:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

