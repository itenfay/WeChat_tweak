//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveContentVM, MMFinderLiveReplayLogic, MMFinderLiveReplayOperationView, MMFinderLiveReplayTask, MMFinderLiveReplayTaskId, MMFinderLiveReplayView, MMLiveFullScreenTipsView, MMLiveTaskId, MMLiveView, NSString, UIImageView, UINavigationController, UIView;
@protocol MMLiveContainerDisplayViewProtocol, MMLiveViewControllerDelegate;

@interface MMFinderLiveReplayViewController
{
    _Bool _isForcePortraitForExtend;
    MMFinderLiveReplayTaskId *_replayTaskId;
    MMFinderLiveReplayView *_replayView;
    id <MMLiveViewControllerDelegate> _delegate;
    UINavigationController *_navControl;
    UIImageView *_blurView;
    MMLiveFullScreenTipsView *_privateJoinBlockView;
    long long _currOrientation;
    MMFinderLiveReplayOperationView *_operationView;
    NSString *_lastFromVC;
    MMFinderLiveReplayLogic *_replayLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveReplayLogic *replayLogic; // @synthesize replayLogic=_replayLogic;
@property(retain, nonatomic) NSString *lastFromVC; // @synthesize lastFromVC=_lastFromVC;
@property(retain, nonatomic) MMFinderLiveReplayOperationView *operationView; // @synthesize operationView=_operationView;
@property(nonatomic) long long currOrientation; // @synthesize currOrientation=_currOrientation;
@property(retain, nonatomic) MMLiveFullScreenTipsView *privateJoinBlockView; // @synthesize privateJoinBlockView=_privateJoinBlockView;
@property(nonatomic) _Bool isForcePortraitForExtend; // @synthesize isForcePortraitForExtend=_isForcePortraitForExtend;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak UINavigationController *navControl; // @synthesize navControl=_navControl;
@property(nonatomic) __weak id <MMLiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveReplayView *replayView; // @synthesize replayView=_replayView;
@property(retain, nonatomic) MMFinderLiveReplayTaskId *replayTaskId; // @synthesize replayTaskId=_replayTaskId;
- (void)didFinderLiveMoveToNewScene:(id)arg1;
@property(readonly, nonatomic) unsigned int initialPlayTime;
@property(readonly, nonatomic) MMFinderLiveReplayTask *replayLiveTask;
@property(readonly, nonatomic) MMFinderLiveContentVM *contentVM;
- (void)minimizeLive:(CDUnknownBlockType)arg1;
- (void)trySharingWithBlock:(CDUnknownBlockType)arg1;
- (void)shareToMoment;
- (void)shareToFriend;
- (void)close;
- (void)onConnectMicStateUpdated:(id)arg1 connectMicStateValid:(_Bool)arg2 anchorInAudioMode:(_Bool)arg3 isScreenSharing:(_Bool)arg4;
- (void)onGetReplayPreviewResolutionInfo:(id)arg1;
- (void)onReplayLiveInfoUpdate;
- (void)onGetReplayPreviewLowBitrateUrl:(id)arg1 resolutionChanged:(_Bool)arg2;
- (void)onGetReplayPreviewThumbList:(id)arg1;
- (void)onGetDetailDataItem;
- (void)onPauseReplay;
- (void)onWillMinimizeByInteractivePan;
- (void)handleGetLiveInfoDone;
- (void)onGetLiveInfo;
- (void)onMMLiveReplayVideoSizeChange:(struct CGSize)arg1;
- (void)onMMLiveFullScreenTaped;
- (void)exitAndClearLive;
- (void)initReplayLogic;
- (void)initData;
- (void)layoutBlurView;
- (void)layoutReplayView;
- (void)updateReplayOperationViewFrame;
- (void)createReplayOperationView;
- (void)layoutOperationView;
- (void)layoutUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)shouldInteractivePop;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)unDisplayContent;
- (void)displayContent;
- (void)onMMLiveFullScreenTipsViewClose;
- (void)showReplayDeleteBlockView;
- (void)showPrivateJoinBlockView;
- (_Bool)checkReplayBlock;
- (void)enterLive;
- (long long)getCurrentOrientation;
- (void)closeWithoutNavigation;
- (void)closeDirectlyWithCompletion:(CDUnknownBlockType)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;
- (id)navigationController;
- (void)unMuteReplay;
- (void)muteReplay;
- (void)stopReplay;
- (void)startReplay;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)recordVCTrace:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (void)onWillTransitionToMinimize;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldShowCloseButtonWhenMinimized;
- (_Bool)shouldSupportLiveSwitchingWithGestureRecognizer:(id)arg1;
- (_Bool)shouldInvokeInteractiveTransition;
- (_Bool)shouldSupportInteractiveTransition;
- (void)hideView;
- (void)showView;
- (struct CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
@property(readonly, nonatomic) UIView *minimizeSrcView;
@property(readonly, nonatomic) MMLiveTaskId *liveTaskId;
@property(readonly, nonatomic) UIView<MMLiveContainerDisplayViewProtocol> *displayContentView;
- (void)unRegisterExtensionInReplayContainerLogicPart;
- (void)registerExtensionInReplayContainerLogicPart;
- (id)getCurrentPIPHandleLogic;
- (id)getPIPHandleLogic;
- (void)stopPictureInPicture;
- (void)configPIPHandleLogic;
- (void)startPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(_Bool)arg1;
- (void)checkNeedAutoStartPictureInPicture;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (void)onMinimizeWindowDismissLiveView:(id)arg1;
- (void)onMinimizeWindowAttachLiveView:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onLiveTaskUnMuteLiveForAudience:(id)arg1;
- (void)onLiveTaskMuteLiveForAudience:(id)arg1;
- (void)onLiveTaskResumeLiveForAudience:(id)arg1;
- (void)onLiveTaskPauseLiveForAudience:(id)arg1;
- (void)unRegisterExtensionInReplayTaskPart;
- (void)registerExtensionInReplayTaskPart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isPresentingWithCustomTransition;
@property(readonly, nonatomic) MMLiveView *liveView;
@property(readonly) Class superclass;

@end

