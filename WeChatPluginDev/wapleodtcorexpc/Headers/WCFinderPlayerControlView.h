//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, WCFinderAnimationLoadingView, WCPlayerView, WCPlayerVolumeObserver, WXVideoSlider;
@protocol WCFinderPlayerControlViewDelegate;

@interface WCFinderPlayerControlView : UIView
{
    _Bool _isBufferingViewLoading;
    WCPlayerView *playerView;
    id <WCFinderPlayerControlViewDelegate> _delegate;
    UIView *_coverMask;
    WCFinderAnimationLoadingView *_loadingView;
    double _progress;
    unsigned long long _loadingLocation;
    double _loadingTopOffset;
    double _maxPlayVideoTime;
    WCPlayerVolumeObserver *_volumeObserver;
    WXVideoSlider *_volumeSlider;
    UIView *_volumePanel;
    UIView *_volumeBgView;
    UIImageView *_volumeIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *volumeIconView; // @synthesize volumeIconView=_volumeIconView;
@property(retain, nonatomic) UIView *volumeBgView; // @synthesize volumeBgView=_volumeBgView;
@property(retain, nonatomic) UIView *volumePanel; // @synthesize volumePanel=_volumePanel;
@property(retain, nonatomic) WXVideoSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) WCPlayerVolumeObserver *volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property(nonatomic) double maxPlayVideoTime; // @synthesize maxPlayVideoTime=_maxPlayVideoTime;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
@property(nonatomic) unsigned long long loadingLocation; // @synthesize loadingLocation=_loadingLocation;
@property(nonatomic) _Bool isBufferingViewLoading; // @synthesize isBufferingViewLoading=_isBufferingViewLoading;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *coverMask; // @synthesize coverMask=_coverMask;
@property(nonatomic) __weak id <WCFinderPlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView;
- (void)hiddenVolumePanel;
- (void)onVolumeDidChange:(double)arg1;
- (_Bool)hasPlayToAppearTime;
- (void)setProgressBarStatus:(id)arg1;
- (id)progressBarStatus;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(id)arg1;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)updateVideoTotalTime:(double)arg1;
- (void)reset;
- (void)updateVideoCurrentTime:(double)arg1;
- (double)getPlayVideoTotalTime;
- (void)hiddenThumbImageView;
- (void)showThumbImageView;
- (void)hiddenPercentView;
- (void)showPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onCreateThumbImage:(id)arg1;
- (void)onReceiveAllVideoData;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)stopObserveVolume;
- (void)startObserveVolume;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerView:(id)arg1 stopDisplayOnPipWindow:(long long)arg2;
- (void)onPlayerView:(id)arg1 startDisplayOnPipWindow:(long long)arg2;
- (void)onPipStateRePlayWithPlayerView:(id)arg1;
- (void)onPipStatePauseWithPlayerView:(id)arg1;
- (void)onPipStatePlayWithPlayerView:(id)arg1;
- (void)onPlayerView:(id)arg1 pipSeekFromTime:(double)arg2 toTime:(double)arg3;
- (void)onPlayerView:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayerRestoreUserInterfaceForPictureInPictureStop:(id)arg1;
- (id)getVolumeIconName;
- (void)layoutSubviews;
- (void)addWCPlayerSubview;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

