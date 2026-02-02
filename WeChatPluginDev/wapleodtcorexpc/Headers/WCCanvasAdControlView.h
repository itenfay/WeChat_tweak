//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSObject, NSString, SightIconView, UIView, WCCanvasAdVideoProgressBar;
@protocol WCCanvasAdControlViewDelegate;

@interface WCCanvasAdControlView
{
    _Bool _ignoreEdgeInset;
    _Bool _withAudioButton;
    _Bool _isBufferViewShow;
    NSObject<WCCanvasAdControlViewDelegate> *_delegate;
    UIView *_toolPanView;
    WCCanvasAdVideoProgressBar *_progressBar;
    SightIconView *_iconView;
    MMTimer *_autoHideControlViewTimer;
    unsigned long long _playerMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBufferViewShow; // @synthesize isBufferViewShow=_isBufferViewShow;
@property(nonatomic) unsigned long long playerMode; // @synthesize playerMode=_playerMode;
@property(retain, nonatomic) MMTimer *autoHideControlViewTimer; // @synthesize autoHideControlViewTimer=_autoHideControlViewTimer;
@property(nonatomic) _Bool withAudioButton; // @synthesize withAudioButton=_withAudioButton;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCCanvasAdVideoProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIView *toolPanView; // @synthesize toolPanView=_toolPanView;
@property(nonatomic) __weak NSObject<WCCanvasAdControlViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool ignoreEdgeInset; // @synthesize ignoreEdgeInset=_ignoreEdgeInset;
- (void)onDoubleTap;
- (void)onSingleTap;
- (void)initSingleAndDoubleClick;
- (void)onVideoProcessBarClick;
- (void)triggleToHideControlView;
- (void)resetAutoHideTimer;
- (void)onHideControllerView;
- (_Bool)isBtnClickable;
- (_Bool)isVideoExist;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onShowControllerView;
- (void)onFullscreenBtnClick:(_Bool)arg1;
- (void)onVoiceBtnClick:(_Bool)arg1;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onVideoOperationBtnCLick:(_Bool)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)showDownloadPercentView;
- (void)onTapSightIconView;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)setProgress:(double)arg1;
- (_Bool)shouldHideVoiceBtn;
- (_Bool)needIgnoreEdgeInset;
- (void)onProgressEnd;
- (void)layoutSubviews;
- (void)hideFullScreenBtn;
- (void)hiddenIconView;
- (void)showPlayView;
- (_Bool)isToolBarShow;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)addSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andPlayerMode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

