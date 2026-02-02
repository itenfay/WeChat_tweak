//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMUILabel, UIButton, WXVideoSlider;
@protocol WCCanvasAdVideoProgressBarDelegate;

@interface WCCanvasAdVideoProgressBar : UIView
{
    _Bool _isPlaying;
    _Bool _isMinimized;
    _Bool _isSliderScrubbing;
    id <WCCanvasAdVideoProgressBarDelegate> _m_delegate;
    UIView *_bgView;
    UIView *_containerView;
    UIButton *_operateButton;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_totalTimeLabel;
    WXVideoSlider *_videoSlider;
    UIButton *_voiceBtn;
    UIButton *_fullScreenBtn;
    MMTimer *_progressUpdateTimer;
    double _totalTime;
    unsigned long long _playerMode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long playerMode; // @synthesize playerMode=_playerMode;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) _Bool isSliderScrubbing; // @synthesize isSliderScrubbing=_isSliderScrubbing;
@property(nonatomic) _Bool isMinimized; // @synthesize isMinimized=_isMinimized;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) MMTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
@property(retain, nonatomic) UIButton *fullScreenBtn; // @synthesize fullScreenBtn=_fullScreenBtn;
@property(retain, nonatomic) UIButton *voiceBtn; // @synthesize voiceBtn=_voiceBtn;
@property(retain, nonatomic) WXVideoSlider *videoSlider; // @synthesize videoSlider=_videoSlider;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIButton *operateButton; // @synthesize operateButton=_operateButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <WCCanvasAdVideoProgressBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (_Bool)canSlider;
- (_Bool)ignoreEdgeInset;
- (_Bool)isVideoExist;
- (_Bool)isBtnValid;
- (void)updateProgress;
- (void)onOperationBtnClick;
- (void)onFullscreenButtonClick;
- (void)onVoiceIconBtnClick;
- (void)onSliderScrubbEnd;
- (void)onSliderScrubbBegin;
- (void)onSliderChange;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)setAudioBtn:(_Bool)arg1;
- (_Bool)isPlayBtnOn;
- (_Bool)isFullScreen;
- (_Bool)isAudioOn;
- (void)setFullScreenBtnVisible:(_Bool)arg1;
- (void)setFullScreenBtnState:(_Bool)arg1;
- (void)setAudioBtnState:(_Bool)arg1;
- (void)updateTotalTime:(double)arg1;
- (void)onPlayStop;
- (void)onPlayStart;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andPlayerMode:(unsigned long long)arg2;

@end

