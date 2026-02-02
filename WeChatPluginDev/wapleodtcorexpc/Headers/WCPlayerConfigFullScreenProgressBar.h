//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMUILabel, UIView, WCPlayerConfigFullScreenProgressBarParams, WXHighlightableVideoSlider;

@interface WCPlayerConfigFullScreenProgressBar
{
    _Bool _isPlaying;
    _Bool _isMinimized;
    _Bool _isStartTimeSetupFinish;
    UIView *_containerView;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_totalTimeLabel;
    WXHighlightableVideoSlider *_videoSlider;
    MMTimer *_progressUpdateTimer;
    double _totalTime;
    unsigned long long _updateTimerCount;
    WCPlayerConfigFullScreenProgressBarParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerConfigFullScreenProgressBarParams *params; // @synthesize params=_params;
@property(nonatomic) unsigned long long updateTimerCount; // @synthesize updateTimerCount=_updateTimerCount;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) _Bool isStartTimeSetupFinish; // @synthesize isStartTimeSetupFinish=_isStartTimeSetupFinish;
@property(nonatomic) _Bool isMinimized; // @synthesize isMinimized=_isMinimized;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) MMTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
@property(retain, nonatomic) WXHighlightableVideoSlider *videoSlider; // @synthesize videoSlider=_videoSlider;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)resetPlayRateButtonIfNeed;
- (void)_updateProgressWithoutAnimation;
- (void)updateProgress;
- (void)resetSliderToHLStatus;
- (void)resetSliderToNMStatus;
- (void)onSliderScrubbEnd;
- (void)onSliderScrubbBegin;
- (void)onSliderValueChanged;
- (void)onPlayButtonClick;
- (void)onStopButtonClick;
- (void)onPlayStop;
- (void)onPlayStart;
- (float)currentProgress;
- (void)updateTotalTime:(double)arg1;
- (void)reloadSliderStartTime;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)onFocused:(_Bool)arg1;
- (void)onClickAtBackgroud;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2 delegate:(id)arg3 params:(id)arg4;

@end

