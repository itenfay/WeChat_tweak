//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiveInfo, MMLivePlayerProgressBar, MMLiveTaskId, MMUIButton, MMUILabel, NSString, WCPlayerConfigControlView, WCPlayerPlayArgs, WCPlayerView, WXFullScreenGestureRecognizer;

@interface MMLiveReplayViewController
{
    _Bool _toolViewHidden;
    MMLiveTaskId *_liveTaskId;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
    MMLivePlayerProgressBar *_progressBar;
    WCPlayerView *_hlsPlayer;
    WCPlayerPlayArgs *_playerInfo;
    WCPlayerConfigControlView *_controlView;
    LiveInfo *_liveInfo;
    double _currentProgress;
    WXFullScreenGestureRecognizer *_fullScreenGesture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool toolViewHidden; // @synthesize toolViewHidden=_toolViewHidden;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGesture; // @synthesize fullScreenGesture=_fullScreenGesture;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) LiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) WCPlayerConfigControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCPlayerView *hlsPlayer; // @synthesize hlsPlayer=_hlsPlayer;
@property(retain, nonatomic) MMLivePlayerProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (void)onFullScreenSingleTap;
- (void)onHiddenBufferingView;
- (void)onShowBufferingView;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onToolViewAutoClose;
- (void)onVideoPlay;
- (void)onTapAttachButton:(id)arg1;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapSightIconView;
- (void)onSightIconProgressEnd;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarHidden;
- (void)onCloseButtonClicked;
- (void)pause;
- (void)stopPlay;
- (void)startPlay;
- (void)layoutHeader;
- (id)createPlayerInfo;
- (id)createHLSPlayerConfig;
- (void)setupHLSPlayer;
- (_Bool)shouldInteractivePop;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

