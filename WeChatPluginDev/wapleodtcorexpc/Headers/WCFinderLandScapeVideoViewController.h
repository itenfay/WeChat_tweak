//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MegaVideoPageMonitorHelper, MinimizeEdgeGestureHandler, MinimizeNewTransitionController, NSString, UIScreenEdgePanGestureRecognizer, WCFinderFeedDetailStatusView, WCFinderLandScapeVCParams, WCFinderLandScapeVideoView, WCFinderLandScapeVideoViewModel;

@interface WCFinderLandScapeVideoViewController
{
    _Bool _hasReportPageAction;
    MinimizeEdgeGestureHandler *_edgeGesHandler;
    MinimizeNewTransitionController *_transitionController;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
    MegaVideoPageMonitorHelper *_pageMonitorHelper;
    WCFinderLandScapeVideoView *_landScapeVideoView;
    WCFinderLandScapeVideoViewModel *_viewModel;
    WCFinderLandScapeVCParams *_params;
    WCFinderFeedDetailStatusView *_statusView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasReportPageAction; // @synthesize hasReportPageAction=_hasReportPageAction;
@property(retain, nonatomic) WCFinderFeedDetailStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) WCFinderLandScapeVCParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderLandScapeVideoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderLandScapeVideoView *landScapeVideoView; // @synthesize landScapeVideoView=_landScapeVideoView;
@property(retain, nonatomic) MegaVideoPageMonitorHelper *pageMonitorHelper; // @synthesize pageMonitorHelper=_pageMonitorHelper;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
@property(retain, nonatomic) MinimizeNewTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler; // @synthesize edgeGesHandler=_edgeGesHandler;
- (long long)autoMinimizeCtrlFlagForFinderLandScapeVideoView:(id)arg1;
- (void)registerYReportSdk;
- (void)didClickBack:(id)arg1;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)endRequestReleatedDataWithPullType:(unsigned long long)arg1 isPrefetchCache:(_Bool)arg2 success:(_Bool)arg3 cgiTimeCost:(unsigned long long)arg4;
- (void)startRequestReleatedDataWithPullType:(unsigned long long)arg1;
- (void)onFinderLandScapeVMGetNeedOpenLiteApp:(id)arg1;
- (void)onFinderLandScapeVMGetNeedOpenComplaintUrlData:(id)arg1;
- (void)onFinderLandScapeVMGetNotExistDataWithMsg:(id)arg1;
- (void)onFinderLandScapeVMNeedStopVideo;
- (void)onFinderLandScapeVMGetFirstPlayAbleVideo:(id)arg1;
- (void)onFinderLandScapeVMFetchDatafailed;
- (void)onFinderLandScapeVMFetchDataSuccessful;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)finderLandScapeVideoViewPlayNextListFeed:(id)arg1;
- (void)finderLandScapeVideoViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (_Bool)finderLandScapeListFooteIsEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderLandScapeListFooterDidTriggerRefresh:(id)arg1;
- (void)finderLandScapeVideoView:(id)arg1 didSelectContentVM:(id)arg2 refreshRelatedRecommentList:(_Bool)arg3;
- (void)finderLandScapeVideoView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (void)_refreshRelatedListForContentVM:(id)arg1;
- (id)finderLandScapeVideoViewGetCurrentViewController;
- (long long)finderLandScapeVideoViewGetNextContinuePlayableFeedIndexOfTid:(id)arg1;
- (long long)finderLandScapeVideoView:(id)arg1 getIndexOfTid:(id)arg2;
- (id)finderLandScapeVideoViewGetNextContinuePlayableContentVM;
- (id)finderLandScapeVideoView:(id)arg1 contentVMAtFeedListRow:(long long)arg2;
- (long long)numberOfRowsInLandScapeVideoViewFeedList:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)reportCellExpose;
- (void)viewDidPushOrPresent:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)onLimitedClicked;
- (void)updateRightBarButtonItems;
- (void)reportPageAction;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupSubViews;
- (void)setupViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)setupWithTid:(id)arg1 encryptTid:(id)arg2 nonceId:(id)arg3 finderDataItem:(id)arg4 params:(id)arg5;
- (id)initWithFinderDataItem:(id)arg1 params:(id)arg2;
- (id)initWithEncryptTid:(id)arg1 nonceId:(id)arg2 params:(id)arg3;
- (id)initWithTid:(id)arg1 nonceId:(id)arg2 params:(id)arg3;
- (id)initWithTid:(id)arg1 nonceId:(id)arg2;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onMinimizeTransitionWillEnd:(unsigned int)arg1 isComplete:(_Bool)arg2;
- (_Bool)isMinimizeTransitioning;
- (id)getMinimizationTransitionContext;
- (_Bool)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (_Bool)isSupportNavigationInteractive;
- (_Bool)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (id)minimizeContext:(_Bool)arg1;
- (void)setupMinimizeTransitionGesture;
- (void)setupMinimizeTransitionController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

