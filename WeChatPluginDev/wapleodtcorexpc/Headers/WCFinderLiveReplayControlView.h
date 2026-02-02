//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveReplaySeekTimeView, MMFinderLiveReplayTask, MMFinderLiveTaskId, MMUIButton, NSDictionary, NSString, UIView, WCFinderLiveReplayPreviewContainer, WCFinderLiveReplayProgressBar;
@protocol WCFinderLiveReplayControlDelegate;

@interface WCFinderLiveReplayControlView
{
    _Bool _useSeekTimeView;
    _Bool _useDualLineProgressBarInPortrait;
    unsigned int _externalProgressManipulationInitialTime;
    WCFinderLiveReplayProgressBar *_replayProgressBar;
    id <WCFinderLiveReplayControlDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    MMUIButton *_operateButton;
    UIView *_backTapView;
    MMFinderLiveReplaySeekTimeView *_seekTimeView;
    WCFinderLiveReplayPreviewContainer *_previewContainer;
    NSDictionary *_greateTimeDict;
    struct CGSize _replayVideoInitSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *greateTimeDict; // @synthesize greateTimeDict=_greateTimeDict;
@property(retain, nonatomic) WCFinderLiveReplayPreviewContainer *previewContainer; // @synthesize previewContainer=_previewContainer;
@property(retain, nonatomic) MMFinderLiveReplaySeekTimeView *seekTimeView; // @synthesize seekTimeView=_seekTimeView;
@property(retain, nonatomic) UIView *backTapView; // @synthesize backTapView=_backTapView;
@property(nonatomic) unsigned int externalProgressManipulationInitialTime; // @synthesize externalProgressManipulationInitialTime=_externalProgressManipulationInitialTime;
@property(retain, nonatomic) MMUIButton *operateButton; // @synthesize operateButton=_operateButton;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool useDualLineProgressBarInPortrait; // @synthesize useDualLineProgressBarInPortrait=_useDualLineProgressBarInPortrait;
@property(nonatomic) struct CGSize replayVideoInitSize; // @synthesize replayVideoInitSize=_replayVideoInitSize;
@property(nonatomic) _Bool useSeekTimeView; // @synthesize useSeekTimeView=_useSeekTimeView;
@property(nonatomic) __weak id <WCFinderLiveReplayControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderLiveReplayProgressBar *replayProgressBar; // @synthesize replayProgressBar=_replayProgressBar;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)onPlayButtonClick;
- (void)onStopButtonClick;
- (void)onSingleTapGestureRecognizer:(id)arg1;
- (void)onInvokeScheduleAutoUpdatePreviewData;
- (id)getNearestGreateTimeModelWithTime:(double)arg1;
- (void)onPreviewContainterInvokeToSlider:(double)arg1;
- (void)onPreviewContainterSizeChanged:(struct CGSize)arg1;
- (id)tryGetGreateTimeModelWithTime:(double)arg1;
- (void)playVideo;
- (void)pauseVideo;
@property(readonly, nonatomic) MMFinderLiveReplayTask *replayTask;
- (_Bool)shouldConsumeTouchFromFullScreenGesture:(id)arg1 fromView:(id)arg2;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderBarTap;
- (void)onGreateTimeDotTap:(double)arg1;
- (void)onSliderChangeToPercent:(float)arg1;
- (void)onTotalDisplayTimeUpdate:(unsigned int)arg1;
- (void)onCurrentTimeUpdate:(unsigned int)arg1;
- (void)onSliderScrubbEnd:(unsigned long long)arg1 time:(float)arg2;
- (void)onSliderScrubbBegin:(unsigned long long)arg1;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)handleForReplayMomentsViewClosed;
- (void)handleForReplayMomentsViewOpened;
- (_Bool)isPreviewContainerShow;
- (void)updateGreateTimeList:(id)arg1;
- (void)endExternalProgressManipulation;
- (double)getLinearChangeUnit:(_Bool)arg1;
- (int)getTargetTimeWithPanRatio:(double)arg1 slowChange:(_Bool)arg2;
- (void)externalProgressManipulationWithPanRatio:(double)arg1 slowChange:(_Bool)arg2;
- (void)beginExternalProgressManipulation;
- (void)onExitLive;
- (void)hideBottomToolView;
- (void)showBottomToolView;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)setProgress:(double)arg1;
- (void)hidePreviewContainer;
- (void)updatePreviewContainer:(double)arg1;
- (void)showPreviewContainer:(double)arg1 bySlider:(_Bool)arg2;
- (void)updatePreviewContainerOrigin;
- (void)createPreviewContainer;
- (void)layoutPreviewContainer;
- (void)updateOperateButton;
- (_Bool)needShowOperateButton;
- (void)layoutOperateButton;
- (void)layoutProgressBar;
- (void)layoutBackTapView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initNotifications;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

