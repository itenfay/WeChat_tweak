//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCCanvasAdControlView, WCCanvasClickEventManager, WCCanvasFullScreenVideoViewController, WCMediaItem, WCPlayerPlayArgs, WCPlayerView;

@interface WCCanvasGeneralVideoComponent
{
    _Bool _isInFullScreen;
    _Bool _componentHasInit;
    WCPlayerPlayArgs *_playInfo;
    WCCanvasAdControlView *_controlView;
    UIButton *_voiceIconButton;
    WCPlayerView *_wcPlayerView;
    WCMediaItem *_mediaData;
    WCCanvasFullScreenVideoViewController *_fullscreenVC;
    unsigned long long _playActionState;
    WCCanvasClickEventManager *_clickManager;
    struct CGSize _videoPlayerSize;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasClickEventManager *clickManager; // @synthesize clickManager=_clickManager;
@property(nonatomic) unsigned long long playActionState; // @synthesize playActionState=_playActionState;
@property(nonatomic) _Bool componentHasInit; // @synthesize componentHasInit=_componentHasInit;
@property(nonatomic) _Bool isInFullScreen; // @synthesize isInFullScreen=_isInFullScreen;
@property(nonatomic) struct CGSize videoPlayerSize; // @synthesize videoPlayerSize=_videoPlayerSize;
@property(retain, nonatomic) WCCanvasFullScreenVideoViewController *fullscreenVC; // @synthesize fullscreenVC=_fullscreenVC;
@property(retain, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
@property(retain, nonatomic) WCPlayerView *wcPlayerView; // @synthesize wcPlayerView=_wcPlayerView;
@property(retain, nonatomic) UIButton *voiceIconButton; // @synthesize voiceIconButton=_voiceIconButton;
@property(retain, nonatomic) WCCanvasAdControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerPlayArgs *playInfo; // @synthesize playInfo=_playInfo;
- (void)showFloatJumpView:(_Bool)arg1;
- (_Bool)shouldAutoPlayVideo;
- (long long)fetchWCPlayerContentMode;
- (unsigned long long)fetchPlayerModeIfNotExist;
- (id)fetchFloatBarActionItem;
- (void)setAllowVoiceFlag:(_Bool)arg1;
- (_Bool)isAllowVoice;
- (_Bool)isVideoFileExist;
- (void)quitFromFullScreen;
- (void)turnToFullScreen;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (void)canvasCloseBtnClick;
- (id)fetchRelatedComponent;
- (void)reportFullscreenVideoPlayStart;
- (void)reportFullscreenVideoPlayEnd;
- (void)reportFloatAreaClickWithFullClick:(_Bool)arg1;
- (void)reportFloatAreaExposedDataWithFloatAreaStayTime:(unsigned long long)arg1 floatAreaExposureCount:(unsigned int)arg2 buttonStayTime:(unsigned long long)arg3 buttonExposureCount:(unsigned int)arg4;
- (void)reportGeneralVideoInitState;
- (void)onComponentClickForCid:(id)arg1;
- (void)onFullscreenVideoDisappearAndResetVideoPlayer:(id)arg1 andControlView:(id)arg2 andAutoPlay:(_Bool)arg3;
- (void)onCanvasFullscreenVideoCloseBtnClick;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (_Bool)shouldHideVoiceBtn;
- (_Bool)shouldAdaptProgressBarFrame;
- (void)onControlViewDoubleTap;
- (void)onControlViewSingleTap;
- (void)onFullscreenBtnClick:(_Bool)arg1;
- (void)onProgressBarActionBtnClick:(_Bool)arg1;
- (void)onAudioButtonClick:(_Bool)arg1;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onToolViewAutoClose;
- (void)onLoopPlayToEnd;
- (void)onVideoPause;
- (void)onTapSightIconView;
- (void)onVoiceIconBtnClick:(id)arg1;
- (void)setDownArrowIconVisible:(_Bool)arg1;
- (void)updateVoiceButtonState:(_Bool)arg1;
- (void)setControllerViewVisible:(_Bool)arg1;
- (void)hideControlView;
- (void)showControlView;
- (void)initThumbImageView;
- (void)standardizedPlayerArgsInfo:(id)arg1 mute:(_Bool)arg2;
- (_Bool)shouldVideoLayerRasterize;
- (void)standardizedPlayerView:(id)arg1;
- (id)createPlayerArgsWithPlayMode:(unsigned long long)arg1;
- (id)createMediaItem;
- (void)tryToAutoPauseVideo;
- (void)tryToAutoResumeVideo;
- (void)tryToStartWCPlayerWithAutoPlay:(_Bool)arg1;
- (void)tryToLoadVideo;
- (void)clearWCSightView;
- (void)createAndSetupPlayer;
- (_Bool)isPause;
- (_Bool)isPlaying;
- (void)tryToPauseVideo;
- (void)tryToPlayVideo;
- (_Bool)shouldVideoComponentTryToPlay;
- (void)tryToSetVideoPlayingState:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (_Bool)shouldForbidDelegateShowFloatActionBtn;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)initAllSubviews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

