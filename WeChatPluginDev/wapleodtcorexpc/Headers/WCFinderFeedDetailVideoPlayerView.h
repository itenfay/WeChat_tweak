//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCFinderAnimationLoadingView, WCFinderFeedContentVM, WCFinderFeedDetailVideoProgressView, WCFinderGradientView, WCFinderPanMaskView, WCFinderSimplePlayerView;
@protocol WCFinderFeedDetailVideoPlayerViewDelegate;

@interface WCFinderFeedDetailVideoPlayerView : UIView
{
    _Bool _fullScreenState;
    id <WCFinderFeedDetailVideoPlayerViewDelegate> _delegate;
    WCFinderSimplePlayerView *_playerView;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderFeedDetailVideoProgressView *_progressView;
    UIView *_progressTintBarBG;
    UIView *_progressTintBar;
    WCFinderPanMaskView *_panMaskView;
    WCFinderGradientView *_gradientView;
    double _totalTime;
    double _panStartPosX;
    double _panStartVideoTime;
    unsigned long long _panningDirection;
    WCFinderFeedContentVM *_contentVM;
    struct CGSize _mediaSize;
    struct CGRect _layoutBounds;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect layoutBounds; // @synthesize layoutBounds=_layoutBounds;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) _Bool fullScreenState; // @synthesize fullScreenState=_fullScreenState;
@property(nonatomic) unsigned long long panningDirection; // @synthesize panningDirection=_panningDirection;
@property(nonatomic) double panStartVideoTime; // @synthesize panStartVideoTime=_panStartVideoTime;
@property(nonatomic) double panStartPosX; // @synthesize panStartPosX=_panStartPosX;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(retain, nonatomic) WCFinderGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) WCFinderPanMaskView *panMaskView; // @synthesize panMaskView=_panMaskView;
@property(retain, nonatomic) UIView *progressTintBar; // @synthesize progressTintBar=_progressTintBar;
@property(retain, nonatomic) UIView *progressTintBarBG; // @synthesize progressTintBarBG=_progressTintBarBG;
@property(retain, nonatomic) WCFinderFeedDetailVideoProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderSimplePlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <WCFinderFeedDetailVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onFinderDetailProgressViewHiddenStateChange:(_Bool)arg1;
- (void)onFinderDetailProgressViewExitFullScreen;
- (void)onFinderDetailProgressViewExitIPhoneLandscape;
- (void)onFinderDetailProgressViewClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderDetailProgressViewClickBulletInputBtn;
- (void)onFinderDetailProgressViewClickBulletBtn;
- (void)onFinderDetailProgressViewClickFullScreenBtn;
- (void)onFinderDetailProgressViewClickPauseBtn:(_Bool)arg1;
- (void)onFinderDetailProgressViewClickPlayRateButton;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoHiddenBufferingView;
- (void)onVideoShowBufferingView;
- (void)updateProgressWithCurrentTime:(double)arg1 totalTime:(double)arg2 withAnimation:(_Bool)arg3;
- (void)resumeVideoIfNeededAfterPan;
- (void)onPanInProgressView:(id)arg1;
- (void)onTapInProgressView;
- (_Bool)pointAtPanableArea:(struct CGPoint)arg1;
- (void)showProgressPanelIfNeeded;
- (void)setProgressHidden:(_Bool)arg1 autoHide:(_Bool)arg2;
- (void)updateBulletState;
- (_Bool)isPlayingVideo;
- (void)resumeVideo;
- (void)pauseVideoWithPauseButton:(_Bool)arg1;
- (void)stopVideo;
- (void)setPlayRate:(double)arg1;
- (void)seekToTime:(double)arg1;
- (void)playVideoWithStartTime:(double)arg1;
- (id)getPlayerView;
- (void)updateFullScreenState:(_Bool)arg1;
- (void)updateWithContentVM:(id)arg1;
- (_Bool)currentSceneLandscape;
- (void)layoutSubviews;
- (void)layoutViews;
- (id)gradientColorsWithHiddenState:(_Bool)arg1;
- (void)setupGestures;
- (void)setupViews;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

