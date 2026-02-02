//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class MMImageScrollViewHelper, NSArray, NSObject, NSRecursiveLock, NSString, UIImageView, WCCorePlayer, WCPipContentSourcePlayer, WCPlayerFairPlayResourceLoader, WCPlayerLayerView, WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerPredicter, WCPlayerReporter, WCPlayerResourceLoader;
@protocol TLProfileBaseMediaViewDelegate, WCPlayerControlProtocol, WCPlayerViewUIDelegate;

@interface WCPlayerView : UIScrollView
{
    _Bool _bAutoPlayWhenReady;
    _Bool _zoomEnabled;
    _Bool _isNotifyOthersAudioModule;
    _Bool _isPreviewingLivePhoto;
    _Bool _isRequireStartPlayWhenAppActive;
    unsigned int _taskId;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
    UIImageView *_thumbImageView;
    WCPlayerLayerView *_displayView;
    NSObject<WCPlayerControlProtocol> *_controller;
    id <WCPlayerViewUIDelegate> _uiDelegate;
    WCPlayerReporter *_reporter;
    unsigned long long _seekStartTime;
    WCPipContentSourcePlayer *_pipSourcePlayer;
    WCCorePlayer *_player;
    NSString *_groupName;
    NSRecursiveLock *_lock;
    WCPlayerPredicter *_predicter;
    WCPlayerResourceLoader *_resourceloader;
    WCPlayerResourceLoader *_switchingResourceloader;
    WCPlayerFairPlayResourceLoader *_fairPlayResourceloader;
    MMImageScrollViewHelper *_scrollViewHelper;
}

+ (id)generatePlayerWithFrame:(struct CGRect)arg1 PlayArgs:(id)arg2 Controller:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMImageScrollViewHelper *scrollViewHelper; // @synthesize scrollViewHelper=_scrollViewHelper;
@property(retain, nonatomic) WCPlayerFairPlayResourceLoader *fairPlayResourceloader; // @synthesize fairPlayResourceloader=_fairPlayResourceloader;
@property(retain, nonatomic) WCPlayerResourceLoader *switchingResourceloader; // @synthesize switchingResourceloader=_switchingResourceloader;
@property(retain, nonatomic) WCPlayerResourceLoader *resourceloader; // @synthesize resourceloader=_resourceloader;
@property(retain, nonatomic) WCPlayerPredicter *predicter; // @synthesize predicter=_predicter;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) WCCorePlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool isRequireStartPlayWhenAppActive; // @synthesize isRequireStartPlayWhenAppActive=_isRequireStartPlayWhenAppActive;
@property(retain, nonatomic) WCPipContentSourcePlayer *pipSourcePlayer; // @synthesize pipSourcePlayer=_pipSourcePlayer;
@property(nonatomic) _Bool isPreviewingLivePhoto; // @synthesize isPreviewingLivePhoto=_isPreviewingLivePhoto;
@property(nonatomic) _Bool isNotifyOthersAudioModule; // @synthesize isNotifyOthersAudioModule=_isNotifyOthersAudioModule;
@property(nonatomic) unsigned long long seekStartTime; // @synthesize seekStartTime=_seekStartTime;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) __weak id <WCPlayerViewUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(nonatomic) __weak NSObject<WCPlayerControlProtocol> *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) WCPlayerLayerView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) _Bool bAutoPlayWhenReady; // @synthesize bAutoPlayWhenReady=_bAutoPlayWhenReady;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (void)onDoubleTap:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)onWCAudioSessionSetActive:(_Bool)arg1;
- (void)onSuggestSwitchDataSourceWithMediaWrap:(id)arg1;
- (_Bool)audioModuleBindingWCPlayerPipSupport;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)recoverMuteWhenOtherAudioModuleInterruptEnd;
- (void)muteSelfWhenOtherAudioModuleInterruptStart;
- (void)asyncSetPlayerAudioPropertyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isReceiveAllVideoData;
- (void)checkTaskDownloadState;
- (struct CGSize)getPlayerPresentationSize;
- (void)releaseAudioModuleRegisterDuty;
- (void)deactiveAudioModule;
- (_Bool)activeAudioModuleWithOptions:(unsigned long long)arg1;
- (void)setAudioModuleGroupName:(id)arg1;
- (void)setNotifyOthersAudioModule:(_Bool)arg1;
- (_Bool)isAudioModuleActiving;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onPlayerProcessChange:(unsigned long long)arg1;
- (void)onPlayerStateChange:(unsigned long long)arg1;
- (void)onResourceloaderNoAnyLoadingRequest;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onSwitchDataSource:(id)arg1;
- (void)onM3u8Ready;
- (void)onVideoMoovReady;
- (void)onChangeVideoSource;
- (void)onVideoDownloadFail:(int)arg1;
- (void)onRecieveAllVideoData;
- (void)onRequestDataAvailable;
- (void)onRecieveSeekLoadingRequest;
- (void)onResponseDataToResourceLoaderFail:(id)arg1;
- (id)generateResourceloaderWithDownloadArgsWrap:(id)arg1;
- (id)generaterFairPlayResourceLoader;
- (void)destoryResourceLoader;
- (void)startWithPlayerMode:(unsigned long long)arg1;
- (void)onAudioFrameRendered:(id)arg1;
- (void)onVideoFrameRendered:(id)arg1;
- (void)onFirstVideoFrameRendered;
- (void)onFirstAudioFrameRendered;
- (void)onPlayerVideoSizeChange:(struct CGSize)arg1;
- (void)onPlayerStateReady;
- (void)onPlayerPlayablePosUpdate:(double)arg1;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onPlayerErrorWithType:(unsigned long long)arg1 errorCode:(long long)arg2 errorDesc:(id)arg3;
- (void)onPlayerDidPlayToEndTime;
- (void)onPlayerCurrentLoopEnd;
- (void)onPlayerCurrentLoopStart;
- (void)onPlayerBufferingEnd;
- (void)onPlayerBufferingStart;
- (void)onDataSourceChangeSuccess;
- (id)makeSwitchingResouloaderToFormat;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)onPlayerAssetCreated;
- (void)onLocalServerReinitFail;
- (void)onLocalServerReinit;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onScrubbedToTime:(double)arg1;
- (void)onSliderScrubbingDidStart;
- (double)maxSeekPosition;
- (void)onPipSourcePlayerRePlay;
- (void)onPipSourcePlayerPlay;
- (void)onPipSourcePlayerPause;
- (void)onPipPlayerSeekFromTime:(double)arg1 toTime:(double)arg2;
- (void)onFailToStartPictureInPictureWithError:(id)arg1;
- (void)onRestoreUIForPipStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onPipStateDidChange:(long long)arg1;
- (void)onPlayerStopDisplayOnPipWindow:(long long)arg1;
- (void)onPlayerStartDisplayOnPipWindow:(long long)arg1;
- (id)getPipDisplayView;
- (void)onRequireResumePlayWhenPipDidStart;
- (void)onRequirePauseWhenPipNotStartSucc;
- (void)notifyPipAudioModuleBecomeActive;
- (void)notifyPipAudioModuleResignActive;
- (void)interalSetPipSourceAudioModuleOccupyed:(_Bool)arg1;
- (void)tryClosePipVideoFrameCallback;
- (_Bool)isDownloadingData;
- (id)generatePipContentSourcePlayer;
- (void)tryCreatePipSoucePlayerAndRegisterPipResource;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (void)addNotification;
- (void)removeTimeObserver;
- (void)changeToDownloadFirstMode;
- (CDUnknownBlockType)getPlayCallBackBlock;
- (void)CaluDecStuck;
- (void)updateVideoPlayArgs:(_Bool)arg1;
- (void)updateBufferPercent:(double)arg1;
- (void)animateHiddenDisplayViewWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)tryDelayAnimateHiddenDisplayView;
- (void)tryAnimateShowDisplayViewWithFeedback;
- (void)internalPlayVideo;
- (_Bool)shouldOpenNetworkAdapter;
- (void)initPredicter;
- (_Bool)trySwitchToAVPlayer;
- (void)initPlayerWithType:(int)arg1;
- (void)initPlayer;
- (_Bool)shouldUpdatePlayArgs;
- (void)updateZoomInfo:(struct CGSize)arg1;
- (void)startBuffering;
- (id)parseVideoMetadata;
- (void)parseVideoMetaWithDefalut:(int)arg1;
- (int)getDynamicPlayerType;
- (void)resumePlayAfterInterrupt;
- (void)interruptPlay;
- (id)getAVPlayerItemVideoOutput;
- (struct __CVBuffer *)getCurrentPixelBuffer;
- (id)syncCaptureVideo;
- (void)captureVideoWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)setAutoPictureInPictureOpen:(_Bool)arg1;
- (void)setVideoRenderInBackgroundEnable:(_Bool)arg1;
- (_Bool)forceChangeToSwitchingDataSource;
- (void)switchDataSourceWithDownloadArgsWrap:(id)arg1 mode:(long long)arg2;
- (void)switchDataSourceWithDownloadArgsWrap:(id)arg1;
- (id)getPlayerItem;
- (id)getPlayerAsset;
- (void)setPreferredPeakBitRate:(double)arg1;
- (double)getVolume;
- (void)setVolume:(double)arg1;
- (void)setPlayBackRate:(float)arg1;
- (void)setPlayerLoop:(_Bool)arg1;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)forceSetPlayerToMuted:(_Bool)arg1;
- (void)setPlayBeginPos:(float)arg1 playEndPos:(float)arg2;
- (void)setPlayerAllowsExternalPlayback:(_Bool)arg1;
- (void)setPlayerMaxBufferLength:(unsigned int)arg1;
- (void)resumeVideoDownload;
- (void)stopVideoDowload;
- (void)resumeFetchAllVideoData;
- (void)stopFetchAllVideoData;
- (void)fetchAllVideoData;
- (double)currentTime;
- (void)checkStreamPlayerState;
- (void)pauseLivePhotoVideo;
- (void)pauseDemuxerBuffering;
- (void)pauseVideo:(_Bool)arg1;
- (void)pauseVideo;
- (void)playVideo;
- (void)clearLeakPlayer;
- (void)clearPlayer;
- (void)stopPlayer;
- (void)startAutoPlay;
- (void)startPlayer;
- (void)preload;
- (void)configPlayerWithFrame:(struct CGRect)arg1 controller:(id)arg2;
- (void)configWithPlayerInfo:(id)arg1 ControlView:(id)arg2;
- (void)configReporter;
- (void)displayWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resizeToCropDisplayView;
- (void)updateShowArea:(struct WCShowArea)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setThumbImageContentMode:(long long)arg1;
- (void)setThumbImageHidden:(_Bool)arg1;
- (void)setThumbImage:(id)arg1;
- (void)dealloc;
- (id)initPlayerViewWithPlayArgs:(id)arg1;
- (id)initPlayerWithFrame:(struct CGRect)arg1 PlayArgs:(id)arg2 Controller:(id)arg3;
- (_Bool)tl_invalid;
@property(nonatomic) _Bool tl_muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (void)tl_stopPlayMedia;
- (void)tl_pausePlayMedia;
- (void)tl_startPlayMedia;
@property(readonly, nonatomic) double tl_mediaAspectRatio;
- (_Bool)isPaused;
- (_Bool)isPlaying;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,N

@property(copy, nonatomic) NSArray *gestureRecognizers;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,C,N

@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) double minimumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(readonly) Class superclass;
@property(nonatomic) __weak id <TLProfileBaseMediaViewDelegate> tl_profileDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TLProfileBaseMediaViewDelegate>",?,W,N

@property(nonatomic) double zoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N


@end

