//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMUILabel, UIImageView, WCC2CPlayerRateLabel, WXVideoSlider;
@protocol WCC2CPlayerProgressBarDelegate;

@interface WCC2CPlayerProgressBar : UIView
{
    _Bool _bForbidAutoHidden;
    _Bool _isPlaying;
    _Bool _isSliderScrubbing;
    id <WCC2CPlayerProgressBarDelegate> _m_delegate;
    UIView *_containerView;
    MMUILabel *_currentTimeLabel;
    UIImageView *_separatorLine;
    MMUILabel *_totalTimeLabel;
    WCC2CPlayerRateLabel *_playRateLabel;
    WXVideoSlider *_videoSlider;
    MMUILabel *_currentTimeLabelForTracking;
    UIImageView *_separatorLineForTracking;
    MMUILabel *_totalTimeLabelForTracking;
    MMTimer *_progressUpdateTimer;
    double _totalTime;
    unsigned long long _updateTimerCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long updateTimerCount; // @synthesize updateTimerCount=_updateTimerCount;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) _Bool isSliderScrubbing; // @synthesize isSliderScrubbing=_isSliderScrubbing;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) MMTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
@property(retain, nonatomic) MMUILabel *totalTimeLabelForTracking; // @synthesize totalTimeLabelForTracking=_totalTimeLabelForTracking;
@property(retain, nonatomic) UIImageView *separatorLineForTracking; // @synthesize separatorLineForTracking=_separatorLineForTracking;
@property(retain, nonatomic) MMUILabel *currentTimeLabelForTracking; // @synthesize currentTimeLabelForTracking=_currentTimeLabelForTracking;
@property(retain, nonatomic) WXVideoSlider *videoSlider; // @synthesize videoSlider=_videoSlider;
@property(retain, nonatomic) WCC2CPlayerRateLabel *playRateLabel; // @synthesize playRateLabel=_playRateLabel;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UIImageView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool bForbidAutoHidden; // @synthesize bForbidAutoHidden=_bForbidAutoHidden;
@property(nonatomic) __weak id <WCC2CPlayerProgressBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)handlePanGesture:(id)arg1;
- (void)onSliderScrubbEnd;
- (void)onSliderChange;
- (void)onSliderScrubbBegin;
- (void)updateProgress;
- (void)onFocused:(_Bool)arg1;
- (void)resetPlayRate;
- (void)resetPlayRateIfNeed;
- (void)onPlayStop;
- (void)onPlayStart;
- (void)updateTotalTime:(double)arg1;
- (void)updateCurrentTimeLabel:(double)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2;

@end

