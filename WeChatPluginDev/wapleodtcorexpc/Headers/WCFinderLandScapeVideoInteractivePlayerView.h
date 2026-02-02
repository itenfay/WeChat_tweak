//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, NSString, WCFinderAnimationLoadingView, WCFinderBlurBubbleView, WCFinderFeedContentVM, WCFinderLandScapePlayCompleteTipsView, WCFinderLandScapePlayerParam, WCFinderLandScapeVideoInteractivePlayerViewInitParams, WCFinderLandScapeVideoProgressDisplayView, WCFinderNormalProgressBar, WCFinderPanMaskView, WCFinderPlaybackSpeedView, WCFinderSimplePlayerView;
@protocol WCFinderLandScapeVideoInteractivePlayerViewDelegate;

@interface WCFinderLandScapeVideoInteractivePlayerView
{
    id <WCFinderLandScapeVideoInteractivePlayerViewDelegate> _delegate;
    WCFinderSimplePlayerView *_playerView;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderLandScapeVideoProgressDisplayView *_progressDisplayView;
    WCFinderPanMaskView *_panMaskView;
    WCFinderLandScapePlayCompleteTipsView *_playCompleteTipsView;
    CAGradientLayer *_gradientLayer;
    double _totalTime;
    double _panStartPosX;
    double _panStartVideoTime;
    unsigned long long _panLockState;
    WCFinderLandScapePlayerParam *_param;
    WCFinderPlaybackSpeedView *_playbackSpeedView;
    WCFinderNormalProgressBar *_outerProgressBar;
    WCFinderLandScapeVideoInteractivePlayerViewInitParams *_setupParams;
    WCFinderFeedContentVM *_contentVM;
    WCFinderBlurBubbleView *_eduBlurBubbleView;
    struct CGSize _mediaSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBlurBubbleView *eduBlurBubbleView; // @synthesize eduBlurBubbleView=_eduBlurBubbleView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderLandScapeVideoInteractivePlayerViewInitParams *setupParams; // @synthesize setupParams=_setupParams;
@property(retain, nonatomic) WCFinderNormalProgressBar *outerProgressBar; // @synthesize outerProgressBar=_outerProgressBar;
@property(retain, nonatomic) WCFinderPlaybackSpeedView *playbackSpeedView; // @synthesize playbackSpeedView=_playbackSpeedView;
@property(retain, nonatomic) WCFinderLandScapePlayerParam *param; // @synthesize param=_param;
@property(nonatomic) unsigned long long panLockState; // @synthesize panLockState=_panLockState;
@property(nonatomic) double panStartVideoTime; // @synthesize panStartVideoTime=_panStartVideoTime;
@property(nonatomic) double panStartPosX; // @synthesize panStartPosX=_panStartPosX;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WCFinderLandScapePlayCompleteTipsView *playCompleteTipsView; // @synthesize playCompleteTipsView=_playCompleteTipsView;
@property(retain, nonatomic) WCFinderPanMaskView *panMaskView; // @synthesize panMaskView=_panMaskView;
@property(retain, nonatomic) WCFinderLandScapeVideoProgressDisplayView *progressDisplayView; // @synthesize progressDisplayView=_progressDisplayView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderSimplePlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <WCFinderLandScapeVideoInteractivePlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)finderLandScapePlayCompleteTipsViewLastCompletedDataItem;
- (void)finderLandScapePlayCompleteTipsViewDidCountdownActionOver:(id)arg1;
- (void)finderLandScapePlayCompleteTipsViewDidClickNextBtnWithDataItem:(id)arg1;
- (void)finderLandScapePlayCompleteTipsViewDidClickReturnBtn;
- (void)finderLandScapePlayCompleteTipsViewDidClickReplayBtn;
- (void)onFinderLandScapeProgressViewDidClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderLandScapeProgressViewDidClickBulletBtn;
- (void)onFinderLandScapeProgressViewDidClickRuturnBtn;
- (void)onFinderLandScapeProgressViewDidClickRotateBtn;
- (void)onFinderLandScapeProgressViewDidClickPauseBtn:(_Bool)arg1;
- (void)onFinderLandScapeProgressViewPlayRateDidChange:(double)arg1;
- (void)onFinderLandScapeProgressViewHiddenStateChange:(_Bool)arg1;
- (void)onSimplePlayerView:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)tryShowContinuePlayTips:(id)arg1;
- (id)colorsOfHiddenState:(_Bool)arg1;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoHiddenBufferingView;
- (void)onVideoShowBufferingView;
- (double)getCurrentPlayVideoTime;
- (void)showCompleteTipsWithNextPlayableDataItem:(id)arg1;
- (double)viewPlayRate;
- (void)stopSpeedPlayTriggerByGesture:(_Bool)arg1;
- (void)stopSpeedPlay;
- (void)startSpeedPlay;
- (void)lightImpact;
- (void)onLongPressMedia:(id)arg1;
- (void)updateProgressWithCurrentTime:(double)arg1 totalTime:(double)arg2 forbidProgressBarMovAni:(_Bool)arg3;
- (void)onPanInProgressView:(id)arg1;
- (void)onTapInProgressView;
- (void)changeToolBarHiddenState:(_Bool)arg1;
- (void)changeToolBarHiddenState;
- (void)hidePanMaskView;
- (void)showPanMaskView;
- (void)layoutSubviews;
- (id)getFinderPlayerView:(_Bool)arg1;
- (void)restorePlayerView:(id)arg1;
- (id)getPlayerViewAndClear;
- (void)updateBulletState;
- (void)landScapeStateWillChange:(_Bool)arg1;
- (_Bool)isPlayingVideo;
- (void)resumeVideo;
- (void)pauseVideo;
- (void)stopVideo;
- (void)playVideoWithStartTime:(double)arg1 isSilencePlay:(_Bool)arg2;
- (void)playVideo;
- (id)getPlayerView;
- (void)_triggerAntiAddictCheckLogic;
- (void)updateWithContentVM:(id)arg1 param:(id)arg2;
- (void)updateWithDataItem:(id)arg1 param:(id)arg2;
- (void)setupGesture;
- (void)setupViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 param:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

