//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMVSafeSlider, MMMusicInfo, MMTimer, MMUILabel, NSString;
@protocol MMMusicLiveMusicOperationViewDelegate;

@interface MMMusicLiveMusicOperationView : UIView
{
    _Bool _isSliding;
    _Bool _isSeekNotSuccRefreshUIFlag;
    _Bool _isSeekNotSuccPlayAuto;
    id <MMMusicLiveMusicOperationViewDelegate> _delegate;
    MMMusicInfo *_musicInfo;
    MMMVSafeSlider *_slider;
    MMTimer *_sliderTimer;
    MMUILabel *_playedTimeLabel;
    MMUILabel *_dividerLabel;
    MMUILabel *_totalTimeLabel;
    double _musicTimeInSecondPerPx;
    double _lastSeekTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSeekNotSuccPlayAuto; // @synthesize isSeekNotSuccPlayAuto=_isSeekNotSuccPlayAuto;
@property(nonatomic) _Bool isSeekNotSuccRefreshUIFlag; // @synthesize isSeekNotSuccRefreshUIFlag=_isSeekNotSuccRefreshUIFlag;
@property(nonatomic) double lastSeekTime; // @synthesize lastSeekTime=_lastSeekTime;
@property(nonatomic) double musicTimeInSecondPerPx; // @synthesize musicTimeInSecondPerPx=_musicTimeInSecondPerPx;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *dividerLabel; // @synthesize dividerLabel=_dividerLabel;
@property(retain, nonatomic) MMUILabel *playedTimeLabel; // @synthesize playedTimeLabel=_playedTimeLabel;
@property(retain, nonatomic) MMTimer *sliderTimer; // @synthesize sliderTimer=_sliderTimer;
@property(retain, nonatomic) MMMVSafeSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) _Bool isSliding; // @synthesize isSliding=_isSliding;
@property(nonatomic) __weak id <MMMusicLiveMusicOperationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canSeek:(unsigned long long)arg1;
- (void)trySeekMusic:(double)arg1 playAuto:(_Bool)arg2;
- (void)updateSliderThumbImage;
- (void)actionTapSlider:(id)arg1;
- (void)onSliderScrubbEnd;
- (void)onSliderScrubbBegin;
- (void)onSliderChange;
- (void)onNeedUpdatePlayedTimeWhenSetProgressEnd;
- (void)onNeedUpdatePlayedTime;
- (void)updateProgress;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onMusicPlayStatusChanged;
- (double)getMusicTimeInSecondPerPx;
- (unsigned int)setProgressEnd;
- (void)setProgress:(double)arg1;
- (void)updateCurrentPlayTimeInSeconds:(double)arg1 totalDuration:(double)arg2;
- (void)onPlayMusicBtnClicked;
- (void)layoutSubviews;
@property(nonatomic) _Bool progressHidden;
- (void)initViews;
- (id)initWithMusicInfo:(id)arg1 andFrame:(struct CGRect)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

