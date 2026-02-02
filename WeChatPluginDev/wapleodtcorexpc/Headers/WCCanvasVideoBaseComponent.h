//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasAdControlView, WCCanvasClickEventManager, WCCanvasFullScreenVideoViewController, WCMediaItem, WCPlayerPlayArgs, WCPlayerView;

@interface WCCanvasVideoBaseComponent
{
    _Bool _isInFullScreen;
    _Bool _isVideoPauseByUserOperation;
    _Bool _componentHasInit;
    WCPlayerPlayArgs *_playInfo;
    WCCanvasAdControlView *_controlView;
    WCPlayerView *_wcplayerView;
    WCMediaItem *_mediaData;
    WCCanvasFullScreenVideoViewController *_fullscreenVC;
    WCCanvasClickEventManager *_clickManager;
    struct CGSize _videoPlayerSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasClickEventManager *clickManager; // @synthesize clickManager=_clickManager;
@property(nonatomic) _Bool componentHasInit; // @synthesize componentHasInit=_componentHasInit;
@property(nonatomic) struct CGSize videoPlayerSize; // @synthesize videoPlayerSize=_videoPlayerSize;
@property(nonatomic) _Bool isVideoPauseByUserOperation; // @synthesize isVideoPauseByUserOperation=_isVideoPauseByUserOperation;
@property(nonatomic) _Bool isInFullScreen; // @synthesize isInFullScreen=_isInFullScreen;
@property(retain, nonatomic) WCCanvasFullScreenVideoViewController *fullscreenVC; // @synthesize fullscreenVC=_fullscreenVC;
@property(retain, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
@property(retain, nonatomic) WCPlayerView *wcplayerView; // @synthesize wcplayerView=_wcplayerView;
@property(retain, nonatomic) WCCanvasAdControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerPlayArgs *playInfo; // @synthesize playInfo=_playInfo;
- (void)standardizedPlayerArgsInfo:(id)arg1 mute:(_Bool)arg2;
- (void)standardizedPlayerView:(id)arg1;
- (_Bool)shouldVideoLayerRasterize;
- (void)quitFromFullScreen;
- (void)turnToFullScreen;
- (void)clearWCSightView;
- (void)showOrHideDownArrowIconInner:(_Bool)arg1;
- (void)showOrHideControllerViewInner:(_Bool)arg1;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (id)fetchRelatedComponent;
- (void)reportFullscreenVideoPlayStart;
- (void)reportFullscreenVideoPlayEnd;
- (void)reportFloatAreaClickWithFullClick:(_Bool)arg1;
- (void)reportFloatAreaExposedDataWithFloatAreaStayTime:(unsigned long long)arg1 floatAreaExposureCount:(unsigned int)arg2 buttonStayTime:(unsigned long long)arg3 buttonExposureCount:(unsigned int)arg4;
- (void)onComponentClickForCid:(id)arg1;
- (void)onFullscreenVideoDisappearAndResetVideoPlayer:(id)arg1 andControlView:(id)arg2 andAutoPlay:(_Bool)arg3;
- (void)onCanvasFullscreenVideoCloseBtnClick;
- (id)createControlViewWithFrame:(struct CGRect)arg1 andPlayerMode:(unsigned long long)arg2;
- (_Bool)shouldHideVoiceBtn;
- (_Bool)shouldAdaptProgressBarFrame;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onLoopPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onToolViewAutoClose;
- (_Bool)shouldVideoComponentTryToPlay;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (_Bool)shouldLandscapeWhenTurnToFullscreen;
- (id)fetchFloatBarActionItem;
- (void)setAllowVoiceFlag:(_Bool)arg1;
- (id)createMediaItem;
- (_Bool)isAllowVoice;
- (_Bool)isForbiddenControlViewShow;
- (long long)fetchWCPlayerContentMode;
- (void)initAllSubviews;
- (void)doOnPlayEnd;
- (_Bool)tryToPauseVideo;
- (_Bool)tryToPlayVideo;
- (id)createPlayerArgsWithPlayMode:(unsigned long long)arg1;
- (_Bool)shouldForbidDelegateShowFloatActionBtn;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (void)showFloatJumpView:(_Bool)arg1;
- (void)hideControlView;
- (void)showControlView;
- (_Bool)isPause;
- (_Bool)isPlaying;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

