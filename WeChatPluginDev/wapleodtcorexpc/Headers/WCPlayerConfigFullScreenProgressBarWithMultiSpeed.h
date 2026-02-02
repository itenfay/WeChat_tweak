//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMUIButton, MMUILabel, NSArray, NSMutableArray, UIImageView, UIView, WCPlayerConfigFullScreenProgressBarParams, WXVideoSlider;

@interface WCPlayerConfigFullScreenProgressBarWithMultiSpeed
{
    _Bool _isPlaying;
    _Bool _isMinimized;
    _Bool _isStartTimeSetupFinish;
    _Bool _hasGlowEffectplayRateButton;
    int _curPlayRateIndex;
    UIView *_containerView;
    MMUILabel *_currentTimeLabel;
    UIImageView *_separatorLine;
    MMUILabel *_totalTimeLabel;
    WXVideoSlider *_videoSlider;
    MMTimer *_progressUpdateTimer;
    double _totalTime;
    NSMutableArray *_customizeAccessibilityElements;
    MMUIButton *_playRateButton;
    NSArray *_supportedPlayRateArr;
    WCPlayerConfigFullScreenProgressBarParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerConfigFullScreenProgressBarParams *params; // @synthesize params=_params;
@property(nonatomic) int curPlayRateIndex; // @synthesize curPlayRateIndex=_curPlayRateIndex;
@property(retain, nonatomic) NSArray *supportedPlayRateArr; // @synthesize supportedPlayRateArr=_supportedPlayRateArr;
@property(retain, nonatomic) MMUIButton *playRateButton; // @synthesize playRateButton=_playRateButton;
@property(retain, nonatomic) NSMutableArray *customizeAccessibilityElements; // @synthesize customizeAccessibilityElements=_customizeAccessibilityElements;
@property(readonly, nonatomic) _Bool hasGlowEffectplayRateButton; // @synthesize hasGlowEffectplayRateButton=_hasGlowEffectplayRateButton;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) _Bool isStartTimeSetupFinish; // @synthesize isStartTimeSetupFinish=_isStartTimeSetupFinish;
@property(nonatomic) _Bool isMinimized; // @synthesize isMinimized=_isMinimized;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) MMTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
@property(retain, nonatomic) WXVideoSlider *videoSlider; // @synthesize videoSlider=_videoSlider;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UIImageView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)handlePanGesture:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateProgressWithoutAnimation;
- (void)updateProgress;
- (void)resetSliderToHLStatus;
- (void)resetSliderToNMStatus;
- (void)onSliderScrubbEnd;
- (void)onSliderScrubbBegin;
- (void)onSliderValueChanged;
- (void)playRatebuttonHighlighted:(id)arg1;
- (void)resetPlayRate;
- (void)resetPlayRateButtonIfNeed;
- (void)playRatebuttonButtonTapped:(id)arg1;
- (void)dealloc;
- (void)onPlayStop;
- (void)onPlayStart;
- (float)currentProgress;
- (void)updateTotalTime:(double)arg1;
- (void)reloadSliderStartTime;
- (void)updateCurrentTimeLabel:(double)arg1;
- (id)formatStrOfTime:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureSliderNormalSizeAndLayout;
- (void)configureSliderDragingSizeAndLayout;
- (void)setProgressBarType:(unsigned long long)arg1;
- (id)getSliderDotImage:(unsigned long long)arg1;
- (float)getSliderHeight:(unsigned long long)arg1;
- (void)addPlayRateButtonGlowEffect;
- (id)accessibilityElements;
- (void)initSubviews;
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2 delegate:(id)arg3 params:(id)arg4;

@end

