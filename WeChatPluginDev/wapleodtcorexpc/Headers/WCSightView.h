//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIWindow, NSString, UIImageView, UIView, WCADVideoPlayInfo, WCDataItem, WCMediaItem, WCPlayerPlayArgs, WCPlayerView, WCSNSADPlayerControlView, WCSightFullPlayViewController;
@protocol WCSightViewDelegate;

@interface WCSightView
{
    _Bool m_bIsLongPressHandled;
    WCDataItem *m_dataItem;
    MMUIWindow *m_fullScreenWindow;
    UIImageView *_thumbImageView;
    WCSightFullPlayViewController *m_attachFullPlayViewController;
    _Bool m_fullScreenPlaying;
    _Bool m_bfullScreenPlayAttachVideo;
    _Bool m_bTimelineScene;
    int m_currentPage;
    _Bool m_closeForViewDetail;
    NSString *_nsFromVCName;
    WCADVideoPlayInfo *m_adPlayInfo;
    _Bool m_isImageReady;
    _Bool _tryingToPlay;
    WCMediaItem *m_mediaData;
    id <WCSightViewDelegate> m_delegate;
    WCSNSADPlayerControlView *_controlView;
    WCPlayerView *_wcPlayerView;
    WCPlayerPlayArgs *_playerInfo;
    UIView *_controlViewContainer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *controlViewContainer; // @synthesize controlViewContainer=_controlViewContainer;
@property(nonatomic) _Bool tryingToPlay; // @synthesize tryingToPlay=_tryingToPlay;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCPlayerView *wcPlayerView; // @synthesize wcPlayerView=_wcPlayerView;
@property(retain, nonatomic) WCSNSADPlayerControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCADVideoPlayInfo *m_adPlayInfo; // @synthesize m_adPlayInfo;
@property(nonatomic) _Bool m_bTimelineScene; // @synthesize m_bTimelineScene;
@property(readonly, nonatomic) _Bool m_isImageReady; // @synthesize m_isImageReady;
@property(nonatomic) __weak id <WCSightViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
- (double)fetchTotalPlaybackTime;
- (double)fetchCurrentPlaybackTime;
- (id)getCurrentSnapshot;
- (id)getThumbImageView;
- (void)attachStreamVideoPlayer;
- (void)onCanvasPageViewAnimationSetContentHidden:(_Bool)arg1;
- (void)onCanvasViewDidBePushed;
- (void)onCanvasViewDidBePoped;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)checkWCSightViewState;
- (void)onWCPlayerPlayEnd:(_Bool)arg1;
- (void)updatePlayerSubviewsLayout;
- (void)downLoadThumbIfNeeded;
- (void)setContentHidden:(_Bool)arg1;
- (void)asyncShowPauseIcon;
- (void)hideControlViewIcon;
- (void)hidePauseIcon;
- (void)showPauseIcon;
- (void)layoutPauseIcon;
- (void)seekWCPlayerToTime:(double)arg1;
- (void)exitVideoPlay;
- (void)pauseWCPlayer;
- (_Bool)isWCPlayerLocalAndNotPlaying;
- (_Bool)isAdWCDownloadingAndEnableJump;
- (_Bool)isWCPlayerSlientPlaying;
- (_Bool)isWCPlayerPlaying;
- (void)updateControlViewForPlaying;
- (void)startWCPlayer;
- (void)setupWCPlayerView;
- (void)layoutControlView;
- (unsigned long long)fetchPlayModeIfVideoNotExist;
- (void)customPlayerInfo:(id)arg1;
- (void)sightViewDidEndDecelerating;
- (void)sightViewWillDisappear;
- (void)sightViewDidEndDisplaying;
- (void)sightViewDidBeClicked;
- (void)sightViewOnClick;
- (void)endViewStreamVideo;
- (void)tryRotateOrientation;
- (void)tryResetAdAttachVideoEndPlayTime;
- (void)tryAddAdAttachVideoPlayCount;
- (void)tryLogAdAttachVideoStartPlayTime;
- (void)mergeWCPlaybackInfo;
- (void)updateWCPlayTotalTime:(double)arg1;
- (id)fetchVideoPlayInfo;
- (void)tryResetAdShortVideoEndPlayTime;
- (void)tryAddAdShortVideoPlayCount;
- (void)tryLogAdShortVideoStartPlayTime;
- (void)exitFullScreenPlay;
- (void)clickFullScreenWindow;
- (void)stopAndCloseFullScreenWindow;
- (void)playLongVideoAdInFullScreen;
- (void)playInFullScreen;
- (void)playAttachVideoInFullScreen;
- (_Bool)processClickToPlayAttachVideoInFullScreenMode;
- (void)initFullPlayWindow;
- (void)clearShortVideo;
- (void)stopPlayShortVideo;
- (void)playShortVideo;
- (void)willAnimateRotation:(_Bool)arg1;
- (void)onPausePlayer;
- (void)onStartPlayer;
- (void)onShareVideoToTimeline:(_Bool)arg1;
- (void)onCancelShareVideoToFriend;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onClickFavVideoMenu;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClosePlayer;
- (void)stopPlayAttachVideo;
- (void)endViewVideo;
- (void)clearAttachVideoResource;
- (void)onLongPressFullPlayView;
- (id)getDetailButtonTitle;
- (_Bool)shouldShowDetailButton;
- (void)onClickDetailButton;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onClickFullPlayView;
- (void)onOrientationChanged;
- (_Bool)isFullScreenPlaying;
- (void)tryPlayVideoInFullScreen;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (void)onClick;
- (void)LongPressEvents:(id)arg1;
- (void)animationShow:(_Bool)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onTimeLineVcWillPop;
- (void)onDoubleClickWCSight:(id)arg1;
- (void)onClickWCSight:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)isAutoPlayVideo;
- (void)reloadSightPreviewImage;
- (id)getImage;
- (_Bool)isSightVideoExist;
- (void)registerGestureRecognizers;
- (void)onMainWindowFrameChanged;
- (void)layoutPlayerContents;
- (void)dealloc;
- (id)initWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2 dataItem:(id)arg3 bTimelineScene:(_Bool)arg4 adPlayInfo:(id)arg5;
- (id)initWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2 dataItem:(id)arg3 bTimelineScene:(_Bool)arg4;
- (id)initWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)initWithMediaData:(id)arg1;
- (void)initData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

