//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMUILabel, UIButton, WXVideoSlider;
@protocol VideoProgressBarDelegate;

@interface MMLivePlayerProgressBar : UIView
{
    _Bool _isPlaying;
    _Bool _isMinimized;
    _Bool _isSliderScrubbing;
    id <VideoProgressBarDelegate> _m_delegate;
    UIView *_containerView;
    UIButton *_operateButton;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_totalTimeLabel;
    WXVideoSlider *_videoSlider;
    MMTimer *_progressUpdateTimer;
    double _totalTime;
    unsigned long long _updateTimerCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long updateTimerCount; // @synthesize updateTimerCount=_updateTimerCount;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) _Bool isSliderScrubbing; // @synthesize isSliderScrubbing=_isSliderScrubbing;
@property(nonatomic) _Bool isMinimized; // @synthesize isMinimized=_isMinimized;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) MMTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
@property(retain, nonatomic) WXVideoSlider *videoSlider; // @synthesize videoSlider=_videoSlider;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIButton *operateButton; // @synthesize operateButton=_operateButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <VideoProgressBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)setLabelColor:(id)arg1;
- (void)updateProgress;
- (void)onSliderScrubbEnd;
- (void)onSliderScrubbBegin;
- (void)onSliderChange;
- (void)onPlayButtonClick;
- (void)onStopButtonClick;
- (void)onPlayStop;
- (void)onPlayStart;
- (void)updateTotalTime:(double)arg1;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)onFocused:(_Bool)arg1;
- (void)onClickAtBackgroud;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2;

@end

