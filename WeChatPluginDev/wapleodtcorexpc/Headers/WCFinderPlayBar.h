//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, WCPlayerView, WXVideoSlider;
@protocol WCFinderPlayBarDelegate;

@interface WCFinderPlayBar : UIView
{
    _Bool _isPlaying;
    WCPlayerView *playerView;
    id <WCFinderPlayBarDelegate> _playerDelegate;
    UIButton *_playButton;
    WXVideoSlider *_playSlider;
    UILabel *_countTimeLabel;
    UILabel *_timeLabel;
    double _moveBeginProgress;
}

+ (id)playBarWithMakeView:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) double moveBeginProgress; // @synthesize moveBeginProgress=_moveBeginProgress;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *countTimeLabel; // @synthesize countTimeLabel=_countTimeLabel;
@property(retain, nonatomic) WXVideoSlider *playSlider; // @synthesize playSlider=_playSlider;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak id <WCFinderPlayBarDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)stopObserveVolume;
- (void)startObserveVolume;
- (void)onPlaybackCurTimeUpdate:(double)arg1;
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
- (void)onVideoPrepareToPlay:(id)arg1;
- (double)getPlayVideoTotalTime;
- (void)updateTimeLabelAt:(double)arg1;
- (void)movePositionEnd;
- (void)movePositionChange:(double)arg1;
- (void)movePositionBegin;
- (void)onSliderScrubbEnd:(id)arg1;
- (void)onSliderChange:(id)arg1;
- (void)onSliderScrubbBegin;
- (void)onPlay;
- (void)onPause;
- (void)onPlayToggle;
- (void)setPlayPosition:(double)arg1 andLength:(double)arg2;
- (double)playPosition;
- (void)stop;
- (void)stopLoading;
- (void)startLoading;
- (void)pause;
- (void)play;
- (void)layoutSubviews;
- (void)reMake:(CDUnknownBlockType)arg1;
- (void)setupUIWithMakeView:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

