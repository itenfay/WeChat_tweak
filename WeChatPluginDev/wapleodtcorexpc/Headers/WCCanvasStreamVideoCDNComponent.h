//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasStreamVideoCDNComponent
{
    _Bool _waitForUserClickToPlay;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
@property(nonatomic) _Bool waitForUserClickToPlay; // @synthesize waitForUserClickToPlay=_waitForUserClickToPlay;
- (void)tryToAutoPauseVideo;
- (void)tryToAutoResumeVideo;
- (void)doOnPlayEnd;
- (void)createAndSetupPlayer;
- (void)reportFullscreenVideoPlayStart;
- (void)reportFullscreenVideoPlayEnd;
- (void)reportFloatAreaClickWithFullClick:(_Bool)arg1;
- (void)reportFloatAreaExposedDataWithFloatAreaStayTime:(unsigned long long)arg1 floatAreaExposureCount:(unsigned int)arg2 buttonStayTime:(unsigned long long)arg3 buttonExposureCount:(unsigned int)arg4;
- (void)doStreamVideoReport:(int)arg1;
- (_Bool)shouldAutoPlayStreamVideo;
- (void)onControlViewDoubleTap;
- (void)onControlViewSingleTap;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onProgressBarActionBtnClick:(_Bool)arg1;
- (void)onAudioButtonClick:(_Bool)arg1;
- (void)onTapSightIconView;
- (void)onFullscreenBtnClick:(_Bool)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)tryToSetVideoPlayingState:(_Bool)arg1;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)tryToLoadVideo;
- (void)initThumbImageView;
- (_Bool)shouldLandscapeWhenTurnToFullscreen;
- (long long)fetchWCPlayerContentMode;
- (id)createMediaItem;
- (id)fetchFloatBarActionItem;
- (void)setAllowVoiceFlag:(_Bool)arg1;
- (_Bool)isAllowVoice;
- (_Bool)tryToPauseVideo;
- (_Bool)tryToPlayVideo;
- (_Bool)tryToStartWCPlayerWithAutoPlayFlag:(_Bool)arg1;
- (void)initAllSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
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

