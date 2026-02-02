//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJTemplatePlayerView, NSString, WCMediaItem, WCMediaItemWrap, WCMomentsPlayerSourceController, WCMomentsPlayerViewContainer, WCPlayerConfigControlView, WCPlayerPlayArgs, WCPlayerView, WCWidgetPlayer, WXFullScreenGestureRecognizer;
@protocol WCAlbumSightFullPlayViewDelegate;

@interface WCAlbumSightFullPlayView : UIView
{
    _Bool _isSightVisible;
    _Bool _isStopped;
    _Bool _bIsLongPressHandled;
    _Bool _isImageReady;
    _Bool _isShowTemplatePlayerView;
    unsigned long long _index;
    long long _playScene;
    long long _browseScene;
    WCMediaItem *_mediaData;
    WCPlayerView *_playerView;
    WCWidgetPlayer *_customWidgetPlayer;
    id <WCAlbumSightFullPlayViewDelegate> _delegate;
    UIView *_fullScreenContent;
    WCMomentsPlayerViewContainer *_playerViewContainer;
    WXFullScreenGestureRecognizer *_fullScreenGesture;
    WCMomentsPlayerSourceController *_playerSourceController;
    WCPlayerPlayArgs *_playerInfo;
    WCPlayerConfigControlView *_controlView;
    WCMediaItemWrap *_mediaItemWrap;
    MJTemplatePlayerView *_templatePlayerView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowTemplatePlayerView; // @synthesize isShowTemplatePlayerView=_isShowTemplatePlayerView;
@property(retain, nonatomic) MJTemplatePlayerView *templatePlayerView; // @synthesize templatePlayerView=_templatePlayerView;
@property(retain, nonatomic) WCMediaItemWrap *mediaItemWrap; // @synthesize mediaItemWrap=_mediaItemWrap;
@property(retain, nonatomic) WCPlayerConfigControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WCMomentsPlayerSourceController *playerSourceController; // @synthesize playerSourceController=_playerSourceController;
@property(nonatomic) _Bool isImageReady; // @synthesize isImageReady=_isImageReady;
@property(nonatomic) _Bool bIsLongPressHandled; // @synthesize bIsLongPressHandled=_bIsLongPressHandled;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGesture; // @synthesize fullScreenGesture=_fullScreenGesture;
@property(retain, nonatomic) WCMomentsPlayerViewContainer *playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(retain, nonatomic) UIView *fullScreenContent; // @synthesize fullScreenContent=_fullScreenContent;
@property(nonatomic) __weak id <WCAlbumSightFullPlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCWidgetPlayer *customWidgetPlayer; // @synthesize customWidgetPlayer=_customWidgetPlayer;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
@property(nonatomic) _Bool isSightVisible; // @synthesize isSightVisible=_isSightVisible;
@property(nonatomic) long long browseScene; // @synthesize browseScene=_browseScene;
@property(nonatomic) long long playScene; // @synthesize playScene=_playScene;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)playerViewContainerDidZoom:(id)arg1;
- (void)onMuteForExternalPlaybackMode:(id)arg1;
- (void)resetPlayerContainer;
- (void)_cleanCustomWidgetPlayer;
- (void)_cleanVideo;
- (void)cleanPlayerView;
- (id)generateConfig;
- (void)_updateGestureContainerFrameWithVideoFrame:(struct CGRect)arg1;
- (void)_relayoutCustomWidgetPlayerWithVideoFrame:(struct CGRect)arg1;
- (void)_initCustomWidgetPlayer;
- (void)_initTemplatePlayerView;
- (void)_stopCustomWidgetPlayer;
- (void)_stopVideo;
- (void)_restartCustomWidgetPlayer;
- (void)_restartVideo;
- (void)_seekCustomWidetPlayerToTimeSec:(double)arg1;
- (void)_seekVideoToTimeSec:(double)arg1;
- (void)_pauseCunstomWidgetPlayer;
- (void)_pauseVideo;
- (void)_playCustomWidgetPlayer;
- (void)_playVideo;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onClickSightView:(id)arg1;
- (void)onLongPressSightView:(id)arg1;
- (void)resumePlay;
- (void)stopPlay;
- (void)playSight;
- (struct CGSize)originPlayerViewVideoSize;
- (struct CGSize)suitablePlayerViewSizeForVideoSize:(struct CGSize)arg1;
- (struct CGRect)suitablePlayerViewFrameForVideoSize:(struct CGSize)arg1;
- (struct CGRect)suitablePlayerViewFrame;
- (void)reloadSightPreviewImage;
- (id)getImage;
- (void)downloadImage;
- (void)dealloc;
- (void)createAndSetupWCPlayer;
- (void)createAndSetupTemplatePlayer;
- (void)createAndSetupPlayer;
- (void)willMoveToSuperview:(id)arg1;
- (void)setDataAndView:(id)arg1;
- (void)displaySightWithMediaItem:(id)arg1;
@property(nonatomic) _Bool enableDragToClose;
- (id)initWithMediaData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

