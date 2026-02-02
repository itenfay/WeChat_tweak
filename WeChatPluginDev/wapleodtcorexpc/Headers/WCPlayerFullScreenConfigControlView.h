//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSObject, NSString, SightIconView, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView, WCPlayerFullScreenConfig, WCPlayerFullScreenProgressBarBase, WCPlayerProgressTimeLabel, WCPlayerShareableButton;
@protocol WCPlayerConfigDelegate;

@interface WCPlayerFullScreenConfigControlView
{
    _Bool _fullScreen;
    _Bool _shrink;
    float _progressSliderStartTime;
    NSObject<WCPlayerConfigDelegate> *_delegate;
    UIView *_toolPanView;
    UIImageView *_topToolView;
    UIImageView *_bottomToolView;
    WCPlayerFullScreenProgressBarBase *_progressBar;
    WCPlayerProgressTimeLabel *_progressTimeLabel;
    SightIconView *_iconView;
    UILabel *_hintLabel;
    UIButton *_closeButton;
    MMUILabel *_errorLabel;
    UIButton *_attachButton;
    WCPlayerFullScreenConfig *_playerConfig;
    WCPlayerShareableButton *_shareableButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) float progressSliderStartTime; // @synthesize progressSliderStartTime=_progressSliderStartTime;
@property(retain, nonatomic) WCPlayerShareableButton *shareableButton; // @synthesize shareableButton=_shareableButton;
@property(nonatomic) _Bool shrink; // @synthesize shrink=_shrink;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) WCPlayerFullScreenConfig *playerConfig; // @synthesize playerConfig=_playerConfig;
@property(retain, nonatomic) UIButton *attachButton; // @synthesize attachButton=_attachButton;
@property(retain, nonatomic) MMUILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCPlayerProgressTimeLabel *progressTimeLabel; // @synthesize progressTimeLabel=_progressTimeLabel;
@property(retain, nonatomic) WCPlayerFullScreenProgressBarBase *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIImageView *bottomToolView; // @synthesize bottomToolView=_bottomToolView;
@property(retain, nonatomic) UIImageView *topToolView; // @synthesize topToolView=_topToolView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
@property(nonatomic) __weak NSObject<WCPlayerConfigDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)onUpdateTotalTime:(double)arg1;
- (void)onUpdateCurrentTime:(double)arg1;
- (void)onSetPlayBackRate:(double)arg1;
- (void)onSliderActive:(_Bool)arg1;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarHidden;
- (void)setPlayBackRate:(double)arg1;
- (void)updateProgressDuration:(float)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)hiddenDownloadPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)showDownloadPercentView;
- (void)onTapSightIconView;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onClickShareButton:(id)arg1;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)updateVideoSize:(struct CGSize)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)setProgress:(double)arg1;
- (void)onProgressEnd;
- (void)setAttachButtonTitle:(id)arg1;
- (void)showErrorTipsWithText:(id)arg1;
- (void)onCloseButtonTap:(id)arg1;
- (void)updateBottomToolViewWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)setProgressBarViewHidden:(_Bool)arg1;
- (void)hideProgressBarView;
- (void)showProgressBarView;
- (void)updateTopToolViewWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1 Delegate:(id)arg2 Config:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

