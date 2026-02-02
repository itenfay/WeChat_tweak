//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSTimer, WCFinderLiveReplaySliderBar;
@protocol WCFinderLiveReplayProgressBarDelegate;

@interface WCFinderLiveReplayProgressBar : UIView
{
    _Bool _isPlaying;
    _Bool _hideOperationButtonInPortrait;
    _Bool _isSliderScrubbing;
    unsigned int _timeLimit;
    unsigned int _currentTime;
    unsigned int _totalUIntTime;
    unsigned int _displayTotalTime;
    id <WCFinderLiveReplayProgressBarDelegate> _m_delegate;
    CDUnknownBlockType _sliderBarFrameChangeCallback;
    CDUnknownBlockType _greateTimeDotExposeCallback;
    MMUIButton *_operateButton;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_totalTimeLabel;
    WCFinderLiveReplaySliderBar *_sliderBar;
    NSTimer *_progressUpdateTimer;
    double _totalTime;
    long long _timeDisplayFormat;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(nonatomic) long long timeDisplayFormat; // @synthesize timeDisplayFormat=_timeDisplayFormat;
@property(nonatomic) unsigned int displayTotalTime; // @synthesize displayTotalTime=_displayTotalTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) _Bool isSliderScrubbing; // @synthesize isSliderScrubbing=_isSliderScrubbing;
@property(retain, nonatomic) NSTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
@property(retain, nonatomic) WCFinderLiveReplaySliderBar *sliderBar; // @synthesize sliderBar=_sliderBar;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) MMUIButton *operateButton; // @synthesize operateButton=_operateButton;
@property(nonatomic) _Bool hideOperationButtonInPortrait; // @synthesize hideOperationButtonInPortrait=_hideOperationButtonInPortrait;
@property(copy, nonatomic) CDUnknownBlockType greateTimeDotExposeCallback; // @synthesize greateTimeDotExposeCallback=_greateTimeDotExposeCallback;
@property(copy, nonatomic) CDUnknownBlockType sliderBarFrameChangeCallback; // @synthesize sliderBarFrameChangeCallback=_sliderBarFrameChangeCallback;
@property(nonatomic) __weak id <WCFinderLiveReplayProgressBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) unsigned int totalUIntTime; // @synthesize totalUIntTime=_totalUIntTime;
@property(nonatomic) unsigned int currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned int timeLimit; // @synthesize timeLimit=_timeLimit;
- (void)reportForGreateTimeDotExpose;
- (void)invokeStopButtonClick;
- (void)invokePlayButtonClick;
- (void)updateGreatTimeList:(id)arg1;
- (double)getPreviewViewCenterXWithTime:(double)arg1;
- (float)valueForTime:(double)arg1;
- (double)timeForValue:(float)arg1;
- (void)endExternalProgressManipulation;
- (void)beginExternalProgressManipulation;
- (void)clearSrc;
- (void)onPlayStop;
- (void)onPlayStart;
- (void)updateCurrentTime:(unsigned int)arg1;
- (void)updateTotalTimeLabel:(unsigned long long)arg1;
- (void)updateDisplayTotalTime:(unsigned int)arg1;
- (void)updateTotalTime:(double)arg1;
@property(readonly, nonatomic) _Bool enableShowControlWidgets;
@property(readonly, nonatomic) unsigned int totalDisplayUIntTime;
- (void)onSliderScrubbEnd:(unsigned long long)arg1;
- (void)onSliderScrubbBegin:(unsigned long long)arg1;
- (void)onSliderChange;
- (void)onPlayButtonClick;
- (void)onStopButtonClick;
- (void)onSliderScrubbingChanged;
- (void)updateTimeLabelSize:(struct CGSize)arg1;
- (void)updateProgress;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)showControlWidgets;
- (void)hideControlWidgets;
- (void)updateSliderBarOrigin;
- (void)layoutSliderBar;
- (void)updateTotalTimeLabelOrigin;
- (void)layoutTotalTimeLabel;
- (void)updateCurrentTimeLabelOrigin;
- (void)layoutCurrentTimeLabel;
- (void)updateOperateButton;
- (_Bool)needShowOperateButton;
- (void)layoutOperateButton;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

