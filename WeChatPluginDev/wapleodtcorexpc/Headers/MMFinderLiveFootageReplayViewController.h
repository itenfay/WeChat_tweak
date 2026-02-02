//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFootageReplayModel, MMFinderLiveFootageReplayOperationView, MMFinderLiveFootageReplayReporter, MMFinderLiveReplayView, MMFinderLiveTaskId, MMUIButton, NSDictionary, NSString, UIImageView, UINavigationController;
@protocol MMLiveViewControllerDelegate;

@interface MMFinderLiveFootageReplayViewController
{
    _Bool _replayStartReported;
    unsigned int _viewStartTime;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveReplayView *_replayView;
    id <MMLiveViewControllerDelegate> _delegate;
    UINavigationController *_navControl;
    NSDictionary *_reportExtraInfo;
    UIImageView *_blurView;
    long long _currOrientation;
    MMFinderLiveFootageReplayOperationView *_operationView;
    MMUIButton *_backBarButton;
    MMFinderLiveFootageReplayModel *_footageReplayModel;
    long long _lastOrientation;
    CDUnknownBlockType _waitingPortraitBlock;
    MMFinderLiveFootageReplayReporter *_footageReplayReporter;
    unsigned long long _seekFromMediaTimeInMilliseconds;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool replayStartReported; // @synthesize replayStartReported=_replayStartReported;
@property(nonatomic) unsigned long long seekFromMediaTimeInMilliseconds; // @synthesize seekFromMediaTimeInMilliseconds=_seekFromMediaTimeInMilliseconds;
@property(retain, nonatomic) MMFinderLiveFootageReplayReporter *footageReplayReporter; // @synthesize footageReplayReporter=_footageReplayReporter;
@property(copy, nonatomic) CDUnknownBlockType waitingPortraitBlock; // @synthesize waitingPortraitBlock=_waitingPortraitBlock;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(retain, nonatomic) MMFinderLiveFootageReplayModel *footageReplayModel; // @synthesize footageReplayModel=_footageReplayModel;
@property(nonatomic) unsigned int viewStartTime; // @synthesize viewStartTime=_viewStartTime;
@property(retain, nonatomic) MMUIButton *backBarButton; // @synthesize backBarButton=_backBarButton;
@property(retain, nonatomic) MMFinderLiveFootageReplayOperationView *operationView; // @synthesize operationView=_operationView;
@property(nonatomic) long long currOrientation; // @synthesize currOrientation=_currOrientation;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSDictionary *reportExtraInfo; // @synthesize reportExtraInfo=_reportExtraInfo;
@property(nonatomic) __weak UINavigationController *navControl; // @synthesize navControl=_navControl;
@property(nonatomic) __weak id <MMLiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveReplayView *replayView; // @synthesize replayView=_replayView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onBecomeActive;
- (void)didChangeScreenCapture:(id)arg1;
- (void)onDoneButtonClicked;
- (id)liveTask;
- (void)close;
- (void)onFootageReplayReportCommentWithSequenceId:(unsigned long long)arg1 frameId:(id)arg2;
- (void)onFootageReplayGetVideoSize:(struct CGSize)arg1;
- (void)onFootageReplaySeekEndAtMediaTime:(double)arg1;
- (void)onFootageReplaySeekBegan;
- (void)onFootageReplayPaused;
- (void)onFootageReplayOrientationButtonTapped;
- (struct CGRect)onFootageReplayVideoFrameRequested;
- (void)onMMLiveReplayVideoSizeChange:(struct CGSize)arg1;
- (void)onMMLiveFullScreenTaped;
- (void)checkAndHandleUIOrientationChange;
- (void)clearCurrentBlock;
- (void)performBlockAfterPortrait;
- (void)performBlockAfterOrientationPortrait:(CDUnknownBlockType)arg1;
- (void)checkScreenCaptureState;
- (void)exitAndClearLive;
- (void)initData;
- (void)layoutBlurView;
- (void)layoutReplayView;
- (void)layoutBackBarButton;
- (void)updateReplayOperationViewFrame;
- (void)layoutOperationView;
- (void)layoutUI;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)shouldInteractivePop;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)enterLive;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)initWithTaskId:(id)arg1 footageReplayModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

