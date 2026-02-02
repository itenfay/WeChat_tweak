//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIButton, WCFinderProgressBar, WCFinderProgressControlPanelConfigParamsModel, WCFinderTimeLabel;
@protocol WCFinderProgressPanelViewDelegate;

@interface WCFinderProgressPanelView : UIView
{
    id <WCFinderProgressPanelViewDelegate> _delegate;
    MMUIButton *_pauseButton;
    UIButton *_playRateButton;
    UIButton *_bulletButton;
    MMUIButton *_subtitleButton;
    MMUIButton *_backButton;
    WCFinderProgressBar *_progressBar;
    UIButton *_playButton;
    WCFinderTimeLabel *_timeLabel;
    WCFinderProgressControlPanelConfigParamsModel *_paramsModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProgressControlPanelConfigParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(retain, nonatomic) WCFinderTimeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) WCFinderProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) MMUIButton *subtitleButton; // @synthesize subtitleButton=_subtitleButton;
@property(retain, nonatomic) UIButton *bulletButton; // @synthesize bulletButton=_bulletButton;
@property(retain, nonatomic) UIButton *playRateButton; // @synthesize playRateButton=_playRateButton;
@property(retain, nonatomic) MMUIButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(nonatomic) __weak id <WCFinderProgressPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isNewLoading;
- (_Bool)isAnimating;
- (void)stopLoading;
- (void)startLoading;
- (void)onClickBackButton:(id)arg1;
- (void)onClickSubtitleButton:(id)arg1;
- (void)onClickBulletButton:(id)arg1;
- (void)onChangePlayRate:(id)arg1;
- (void)onPlayToggle:(id)arg1;
- (void)onClickPauseButton:(id)arg1;
- (id)dynamicWhiteColor;
- (id)fontOfSize:(double)arg1;
- (id)dynamicFontOfSize:(double)arg1;
- (id)lightLink80Color;
- (id)lightWhiteColor;
- (void)onPlayerProgressBarCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (_Bool)isShowing;
- (void)resetUIViewState;
- (void)updateProgressBarValueWithCurrentPlayProgress:(double)arg1;
- (void)layoutProgressBar;
- (void)checkProgressBarStatus;
- (void)_udpateProgressSubViewHiddenState;
- (void)updateProgressElementsWithCurrentPlayPosition:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(_Bool)arg3 contentVM:(id)arg4 manual:(_Bool)arg5;
- (void)updateConfig;
- (void)updateTimeLabelWithCurrentPlayPos:(double)arg1 videoTotalTime:(double)arg2 layoutBlock:(CDUnknownBlockType)arg3;
- (void)updateSubviewsStyle;
- (void)updateUIStateWithPaused:(_Bool)arg1;
- (void)globalUpdatePanelWithParams:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)responseToHitGes:(struct CGPoint)arg1;

@end

