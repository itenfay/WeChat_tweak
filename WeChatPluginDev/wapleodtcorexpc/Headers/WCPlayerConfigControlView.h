//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSObject, NSString, SightIconView, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, WCC2CPlayerProgressBar, WCPlayerConfig;
@protocol WCPlayerConfigDelegate;

@interface WCPlayerConfigControlView
{
    _Bool _fullScreen;
    _Bool _shrink;
    NSObject<WCPlayerConfigDelegate> *_delegate;
    UIView *_toolPanView;
    UIImageView *_bottomToolView;
    WCC2CPlayerProgressBar *_progressBar;
    SightIconView *_iconView;
    UILabel *_hintLabel;
    MMUIButton *_closeButton;
    MMUILabel *_errorLabel;
    UIButton *_attachButton;
    WCPlayerConfig *_playerConfig;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool shrink; // @synthesize shrink=_shrink;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) WCPlayerConfig *playerConfig; // @synthesize playerConfig=_playerConfig;
@property(retain, nonatomic) UIButton *attachButton; // @synthesize attachButton=_attachButton;
@property(retain, nonatomic) MMUILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCC2CPlayerProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIImageView *bottomToolView; // @synthesize bottomToolView=_bottomToolView;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
@property(nonatomic) __weak NSObject<WCPlayerConfigDelegate> *delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onProgressBarChangePlayRate:(float)arg1 currentPlayRate:(float)arg2;
- (void)onProgressBarHidden;
- (void)updateProgressDuration:(float)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)hiddenDownloadPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)showDownloadPercentView;
- (void)onTapSightIconView;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)updateVideoSize:(struct CGSize)arg1;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)setProgress:(double)arg1;
- (void)onPlayerCreated;
- (void)onProgressEnd;
- (void)hideToolView;
- (void)showToolView;
- (_Bool)isVideoPlaying;
- (void)setAttachButtonTitle:(id)arg1;
- (void)showErrorTipsWithText:(id)arg1;
- (void)onCloseButtonTap:(id)arg1;
- (void)updateBottomToolViewWithEdgeInsets:(struct UIEdgeInsets)arg1;
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

