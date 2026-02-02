//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel, WCFinderDataItem, WCFinderFeedContentVM, WCFinderFeedImageView, WCFinderFeedMediaWrap, WCFinderMediaInfo, WCFinderPlayerControlView, WCFinderSimplePlayerInitParam, WCPlayerView;
@protocol WCFinderFeedContentMediaActionProtocol;

@interface WCFinderSimplePlayerView
{
    _Bool _canPlayMegaVideo;
    _Bool _bDisableAudioModule;
    _Bool _enableScalingInfo;
    _Bool _bLoop;
    _Bool _needsRestThumb;
    _Bool _disableProgressBar;
    id <WCFinderFeedContentMediaActionProtocol> _delegate;
    WCFinderFeedImageView *_thumbImageView;
    WCPlayerView *_playerView;
    WCFinderDataItem *_dataItem;
    WCFinderSimplePlayerInitParam *_params;
    WCFinderPlayerControlView *_playerConfigControlView;
    WCFinderFeedContentVM *_contentVM;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderMediaInfo *_mediaInfo;
    UIImageView *_retryImageView;
    UILabel *_retryLabel;
    NSString *_currentVideoTid;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableProgressBar; // @synthesize disableProgressBar=_disableProgressBar;
@property(copy, nonatomic) NSString *currentVideoTid; // @synthesize currentVideoTid=_currentVideoTid;
@property(nonatomic) _Bool needsRestThumb; // @synthesize needsRestThumb=_needsRestThumb;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderPlayerControlView *playerConfigControlView; // @synthesize playerConfigControlView=_playerConfigControlView;
@property(retain, nonatomic) WCFinderSimplePlayerInitParam *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCFinderFeedImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) _Bool bLoop; // @synthesize bLoop=_bLoop;
@property(nonatomic) _Bool enableScalingInfo; // @synthesize enableScalingInfo=_enableScalingInfo;
@property(nonatomic) _Bool bDisableAudioModule; // @synthesize bDisableAudioModule=_bDisableAudioModule;
@property(nonatomic) _Bool canPlayMegaVideo; // @synthesize canPlayMegaVideo=_canPlayMegaVideo;
@property(nonatomic) __weak id <WCFinderFeedContentMediaActionProtocol> delegate; // @synthesize delegate=_delegate;
- (CDUnknownBlockType)fakeStop;
- (void)restorePlayerView:(id)arg1;
- (unsigned long long)getPlayerState;
- (void)updateMetaModelWhenStop;
- (id)getPlayerViewAndClear;
- (void)unifiedURLIfNeeded:(id)arg1;
- (void)refreshImageIfFromShare;
- (_Bool)videoIsOnPlayState;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerMoovReady:(id)arg1;
- (long long)playerContentMode;
- (void)loadingRetry;
- (void)onPlayerRestoreUserInterfaceForPictureInPictureStop:(id)arg1;
- (void)onPlayerView:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(id)arg1;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(id)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoFrameOut:(id)arg1;
- (void)onFinderThumbDownloadFail:(id)arg1;
- (void)hideLoadingView;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoSeekActionWithDirection:(_Bool)arg1;
- (void)onHiddenBufferingView;
- (void)onShowBufferingView;
- (void)onVideoPlay;
- (void)onPlayToEnd;
- (struct CGSize)mediaSize;
- (void)resetCurrentVideoThumb;
- (double)getMaxPlayTime;
- (double)getActualPlayingTimeInMs;
- (double)getPlayVideoTotalTime;
- (double)getCurrentPlayVideoTime;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onSliderScrubbingDidStart;
- (void)setPlayRate:(double)arg1;
- (void)pauseVideoIfSupport;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (void)changeVideoSilenceStatue:(_Bool)arg1;
- (id)getCurrendThumb;
- (void)progressBarValueChange:(double)arg1 playVideo:(_Bool)arg2 pauseVideo:(_Bool)arg3 state:(struct WCFinderPlayerControlProgressState)arg4;
- (void)stopVideoIfSupport;
- (void)stopPlay;
- (CDUnknownBlockType)fakeStopPlay;
- (void)pauseVideoIfSupport:(_Bool)arg1;
- (void)playWithParams:(id)arg1;
- (void)play;
- (void)updateImage:(id)arg1;
- (struct CGSize)contentSizeForMediaInfo:(id)arg1;
- (void)resetVideoReloadHidden:(_Bool)arg1;
- (void)initVideoReloadAction;
- (id)generateConfig;
- (long long)getThumbMediaType;
- (void)changeDataSource:(id)arg1;
- (void)changeDataSourceWithContentVM:(id)arg1;
- (void)setup;
@property(readonly, nonatomic) _Bool isCurrentPlaying;
- (void)resume;
- (void)pause;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

