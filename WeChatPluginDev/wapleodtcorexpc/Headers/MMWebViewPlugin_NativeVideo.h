//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableDictionary, NSString;

@interface MMWebViewPlugin_NativeVideo
{
    NSMutableDictionary *m_viewsDict;
    NSMutableDictionary *m_contextDict;
    MMUIButton *m_exitFullscreenBtn;
    long long m_lastOrientation;
    _Bool m_shouldForbidWebViewBottomBar;
    _Bool m_isVideoInFullScreen;
    NSMutableDictionary *_dictLocalFinderPlayInfos;
    NSMutableDictionary *_dictLocalFinderFeedInfos;
}

+ (unsigned int)playerCountGlobal;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictLocalFinderFeedInfos; // @synthesize dictLocalFinderFeedInfos=_dictLocalFinderFeedInfos;
@property(retain, nonatomic) NSMutableDictionary *dictLocalFinderPlayInfos; // @synthesize dictLocalFinderPlayInfos=_dictLocalFinderPlayInfos;
- (void)finderMPVideoInteractionUpdate:(id)arg1;
- (id)MPVideoFinderInfoWithLocalFeedId:(id)arg1;
- (void)changeFeedFavStatusWithJSON:(id)arg1 isFav:(_Bool)arg2;
- (void)changeFeedLikeStatusWithJSON:(id)arg1 isLike:(_Bool)arg2;
- (void)pushPlayerView:(unsigned int)arg1 localId:(id)arg2 jsEvent:(id)arg3 extInfo:(id)arg4;
- (void)exchangeFinderData:(id)arg1 jsEvent:(id)arg2;
- (_Bool)isActive;
- (id)takeVideoSnapshot:(unsigned int)arg1;
- (void)onVideoFullScreenStateChangedTo:(_Bool)arg1;
- (void)onAppBecomeActive;
- (void)onAppResignActive;
- (void)onVolumeDidChange:(id)arg1;
- (void)onBrightnessDidChange:(id)arg1;
- (int)orientationForJSAPI:(long long)arg1;
- (void)didRotate:(id)arg1;
- (void)onExitFullscreenBtnClicked;
- (void)initExitFullscreenBtnIfNeed;
- (void)setExitFullscreenBtnHidden:(_Bool)arg1 image:(id)arg2 frame:(struct CGRect)arg3;
- (_Bool)handleOtherPluginEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (_Bool)handleLifeCyclePluginEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (_Bool)handleFullScreenPluginEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (void)resumeAllVideosWhenAppear;
- (void)pauseAllVideosAndResumeWhenAppear;
- (void)removePlayerView:(unsigned int)arg1;
- (id)playContextOfViewId:(unsigned int)arg1;
- (_Bool)isPlaying:(unsigned int)arg1;
- (void)setPlayBackRate:(double)arg1 viewId:(unsigned int)arg2;
- (void)seek:(unsigned int)arg1 pos:(float)arg2;
- (void)stop:(unsigned int)arg1;
- (void)pause:(unsigned int)arg1;
- (void)play:(unsigned int)arg1;
- (void)dispatchEventToAllViews:(id)arg1 params:(id)arg2 onlyToWebCompt:(_Bool)arg3;
- (void)dispatchEventToAllViews:(id)arg1 params:(id)arg2;
- (void)dispatchEvent:(id)arg1 params:(id)arg2 toViewId:(unsigned int)arg3 onlyToWebCompt:(_Bool)arg4;
- (void)dispatchEvent:(id)arg1 params:(id)arg2 toViewId:(unsigned int)arg3;
- (_Bool)isNeedInfoLogForEvent:(id)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1 LocalizedErrorDes:(id)arg2 viewId:(unsigned int)arg3;
- (void)onVideoBufferingPercent:(double)arg1 viewId:(unsigned int)arg2;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onPlayerSeekCompelete:(unsigned int)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1 viewId:(unsigned int)arg2 params:(id)arg3;
- (void)onPlayerStateChanged:(unsigned long long)arg1 viewId:(unsigned int)arg2;
- (void)onVideoPause:(unsigned int)arg1;
- (void)onVideoDidPlayToEndTime:(unsigned int)arg1;
- (void)onVideoCurrTimeChanged:(double)arg1 totalDuration:(double)arg2 viewId:(unsigned int)arg3;
- (void)onVideoBeginPlay:(unsigned int)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1;
- (_Bool)shouldForbidWebViewBottomBar;
- (id)genPlayerViewWithViewId:(unsigned int)arg1;
- (id)getVideoPlayer:(unsigned int)arg1;
- (void)updateFrame:(struct CGRect)arg1 animDuration:(double)arg2 view:(id)arg3;
- (void)updatePlayerConfigWithParamsDict:(id)arg1 playerView:(id)arg2 errMsg:(id *)arg3;
- (void)updateVideoWithParamsDict:(id)arg1 errMsg:(id *)arg2;
- (void)insertPlayerView:(id)arg1 jsContext:(id)arg2 errMsg:(id *)arg3;
- (void)resetAllStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

