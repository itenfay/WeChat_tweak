//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TPContext, TPPlayerLogContext, TPPlayerQueue, TPPlayerTrackInfo, TPPluginManager, TPProxyPlayManager, TPReportController, TPReportPlugin, TPTimer, TPVideoInfo, TPWorkerQueue, UIView;
@protocol ITPBusinessReportManager, ITPPlayerAdapter, ITPPlayerDelegate, ITPPlayerDetailInfoDelegate, ITPPlayerProxy;

@interface TPPlayer : NSObject
{
    _Bool _enableSuggestedBitrateCallBack;
    _Bool _isPlayerForceStopped;
    id <ITPPlayerDelegate> delegate;
    id <ITPPlayerDetailInfoDelegate> detailInfoDelegate;
    TPPlayerLogContext *_log;
    id <ITPPlayerAdapter> _adapter;
    TPVideoInfo *_playVideoInfo;
    TPProxyPlayManager *_playProxyManager;
    TPPlayerQueue *_playerQueue;
    TPPlayerQueue *_delegateQueue;
    TPWorkerQueue *_imageCaptureQueue;
    TPPluginManager *_pluginManager;
    TPReportPlugin *_reportPlugin;
    NSString *_cdnUrl;
    TPPlayerTrackInfo *_selectedAudioTrack;
    long long _donwloadPlayableDurationMs;
    long long _currentDownloadSizeByte;
    long long _totalFileSizeByte;
    long long _startTimeMs;
    long long _skipEndTimeMs;
    TPTimer *_playingTimer;
    NSMutableDictionary *_uniqueIdToOpaqueMap;
    long long _uniqueIdCounter;
    TPContext *_context;
    TPReportController *_reportController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlayerForceStopped; // @synthesize isPlayerForceStopped=_isPlayerForceStopped;
@property(retain, nonatomic) TPReportController *reportController; // @synthesize reportController=_reportController;
@property(retain, nonatomic) TPContext *context; // @synthesize context=_context;
@property(nonatomic) long long uniqueIdCounter; // @synthesize uniqueIdCounter=_uniqueIdCounter;
@property(retain, nonatomic) NSMutableDictionary *uniqueIdToOpaqueMap; // @synthesize uniqueIdToOpaqueMap=_uniqueIdToOpaqueMap;
@property(nonatomic) _Bool enableSuggestedBitrateCallBack; // @synthesize enableSuggestedBitrateCallBack=_enableSuggestedBitrateCallBack;
@property(retain, nonatomic) TPTimer *playingTimer; // @synthesize playingTimer=_playingTimer;
@property(nonatomic) long long skipEndTimeMs; // @synthesize skipEndTimeMs=_skipEndTimeMs;
@property(nonatomic) long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
@property(nonatomic) long long totalFileSizeByte; // @synthesize totalFileSizeByte=_totalFileSizeByte;
@property(nonatomic) long long currentDownloadSizeByte; // @synthesize currentDownloadSizeByte=_currentDownloadSizeByte;
@property(nonatomic) long long donwloadPlayableDurationMs; // @synthesize donwloadPlayableDurationMs=_donwloadPlayableDurationMs;
@property(retain, nonatomic) TPPlayerTrackInfo *selectedAudioTrack; // @synthesize selectedAudioTrack=_selectedAudioTrack;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) TPReportPlugin *reportPlugin; // @synthesize reportPlugin=_reportPlugin;
@property(retain, nonatomic) TPPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(retain, nonatomic) TPWorkerQueue *imageCaptureQueue; // @synthesize imageCaptureQueue=_imageCaptureQueue;
@property(retain, nonatomic) TPPlayerQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) TPPlayerQueue *playerQueue; // @synthesize playerQueue=_playerQueue;
@property(retain, nonatomic) TPProxyPlayManager *playProxyManager; // @synthesize playProxyManager=_playProxyManager;
@property(retain, nonatomic) TPVideoInfo *playVideoInfo; // @synthesize playVideoInfo=_playVideoInfo;
@property(retain, nonatomic) id <ITPPlayerAdapter> adapter; // @synthesize adapter=_adapter;
@property(nonatomic) __weak id <ITPPlayerDetailInfoDelegate> detailInfoDelegate; // @synthesize detailInfoDelegate;
@property(nonatomic) __weak id <ITPPlayerDelegate> delegate; // @synthesize delegate;
- (id)getDynamicStatisticParams:(_Bool)arg1;
- (id)getGeneralPlayFlowParams;
- (id)getExtendReportController;
- (void)checkPlayerIsPlaying;
- (void)invaliPlayingTimer;
- (void)pausePlayingTimer;
- (void)startPlayingTimer;
- (id)trackInfoForTrackIndex:(long long)arg1 witType:(unsigned long long)arg2;
- (id)selectedTracksWithType:(unsigned long long)arg1;
- (void)pushEventToPluginWithEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (void)pushEventToPluginWithPlayerInfo:(unsigned long long)arg1 extra1:(long long)arg2 extra2:(long long)arg3 extraObject:(id)arg4;
- (void)onPlayerInfoToOnPlayerDetailInfo:(unsigned long long)arg1;
- (void)onPlayFlowEventWithDetailInfoType:(long long)arg1;
- (void)onPlayFlowEventWithDetailInfo:(id)arg1;
- (void)samplingPlayFlowEvent:(long long)arg1;
- (void)pushEventToDownloadProxyWithPlayerInfo:(unsigned long long)arg1 extra1:(long long)arg2 extra2:(long long)arg3 extraObject:(id)arg4;
- (void)handlePlayerInfo:(unsigned long long)arg1 extra1:(long long)arg2 extra2:(long long)arg3 extraObject:(id)arg4;
- (void)setTPPlayerOptionalParam:(id)arg1;
- (id)startPlayTasksWithUrl:(id)arg1 httpHeader:(id)arg2;
- (void)publishPrepareEvent:(id)arg1;
- (void)publishSetDataSourceEvent:(id)arg1 resourceLoaderActive:(_Bool)arg2;
- (long long)getOpaqueFromUniqueId:(long long)arg1 logTag:(id)arg2;
- (long long)assignUniqueIdForOpaque:(long long)arg1 logTag:(id)arg2;
- (void)handleOnPreparedWithProxyAvailable:(_Bool)arg1;
- (void)updateStartAndSkipEndTimeMsForDownloadParam:(id)arg1 startTimeMs:(long long)arg2 skipEndTimeMs:(long long)arg3;
- (long long)internalStop;
- (long long)getCurrentPlayOffset;
- (id)getPlayInfo:(id)arg1;
- (int)getCurrentPlayClipNo;
- (long long)getCurrentPosition;
- (long long)getPlayerBufferLength;
- (void)onDownloadProtocolUpdateWithProtocol:(id)arg1 protocolVer:(id)arg2;
- (void)onDownloadStatusUpdateWithStatusCode:(int)arg1;
- (void)onDownloadCdnUrlExpiredWithKVInfo:(id)arg1;
- (void)onDownloadCdnUrlInfoUpdateWithUrl:(id)arg1 cdnIP:(id)arg2 uIP:(id)arg3 errcodeStr:(id)arg4;
- (void)onDownloadCdnUrlUpdate:(id)arg1;
- (id)onPlayCallbackWithMessageType:(unsigned long long)arg1 ext1:(id)arg2 ext2:(id)arg3 ext3:(id)arg4 ext4:(id)arg5;
- (void)onDownloadErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(id)arg3;
- (void)onDownloadFinish;
- (void)onDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4 extraInfo:(id)arg5;
- (void)onStateChange:(id)arg1 preState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (void)onPlayer:(id)arg1 detailInfo:(id)arg2;
- (void)onPlayer:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayer:(id)arg1 airplayErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 airplayDidActive:(_Bool)arg2;
- (id)onPlayer:(id)arg1 assembleAVAssetWithUrl:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onDemuxerPauseContinueBufferingCompleted;
- (id)onSdpExchange:(id)arg1 localSdp:(id)arg2 ids:(int)arg3;
- (id)onPlayer:(id)arg1 audioProcessFrameOut:(id)arg2;
- (id)onPlayer:(id)arg1 videoProcessFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 audioFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 videoFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 subtitleData:(id)arg2;
- (void)onVideoSizeChanged:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)onSeekComplete:(id)arg1;
- (void)onPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3;
- (void)onCompletion:(id)arg1;
- (void)onPrepared:(id)arg1;
- (void)setRichMediaSynchronizer:(id)arg1;
- (long long)stopPictureInPicture;
- (long long)startPictureInPicture;
- (_Bool)pictureInPictureSupported;
@property(readonly, nonatomic) _Bool pictureInPictureActive;
@property(readonly, nonatomic) _Bool pictureInPicturePossible;
@property(nonatomic) unsigned long long externalPlaybackVideoGravity;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool allowsExternalPlayback;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
- (id)getPlayer;
- (id)getPropertyString:(long long)arg1;
- (long long)getPropertyLong:(long long)arg1;
- (void)captureVideoWithFinishBlock:(CDUnknownBlockType)arg1;
- (id)syncCaptureVideo;
- (void)captureWithMode:(unsigned long long)arg1;
- (void)captureVideo;
- (long long)switchDefinitionWithMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3 mode:(long long)arg4 resourceLoaderDelegate:(id)arg5 delegateQueue:(id)arg6;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3 httpHeader:(id)arg4;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (long long)setLoopback:(_Bool)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (long long)setLoopback:(_Bool)arg1;
- (long long)seekTo:(long long)arg1 mode:(long long)arg2;
- (long long)seekTo:(long long)arg1;
- (long long)releasePlayer;
- (long long)reset;
- (void)stopAsync;
- (long long)stop;
- (long long)getPlayerState;
- (long long)pause;
- (long long)start;
- (long long)prepareAsync;
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (id)getProgramInfo;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (id)getTrackInfo;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2 downloadParamData:(id)arg3;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3 downloadParamData:(id)arg4;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3;
- (long long)setVideoInfo:(id)arg1;
- (long long)setDataSourceWithMediaAsset:(id)arg1;
- (long long)setDataSource:(id)arg1 httpHeader:(id)arg2;
- (long long)setDataSource:(id)arg1 resourceLoaderDelegate:(id)arg2 delegateQueue:(id)arg3;
- (long long)setDataSource:(id)arg1;
- (long long)setPlayerOptionalParam:(id)arg1;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
@property(nonatomic) _Bool enableResourceLoader; // @dynamic enableResourceLoader;
@property(nonatomic) unsigned long long videoGravity; // @dynamic videoGravity;
@property(readonly, nonatomic) unsigned long long videoHeight; // @dynamic videoHeight;
@property(readonly, nonatomic) unsigned long long videoWidth; // @dynamic videoWidth;
@property(readonly, nonatomic) long long playableDurationMs;
@property(readonly, nonatomic) double bufferPercent; // @dynamic bufferPercent;
@property(readonly, nonatomic) unsigned long long currentState; // @dynamic currentState;
@property(readonly, nonatomic) long long currentPositionMs; // @dynamic currentPositionMs;
@property(readonly, nonatomic) long long durationMs; // @dynamic durationMs;
@property(readonly, nonatomic) double maxPlaySpeedRatio;
@property(nonatomic) double playSpeedRatio; // @dynamic playSpeedRatio;
@property(copy, nonatomic) NSString *audioNormalizeVolumeParams;
@property(nonatomic) double audioGainRatio; // @dynamic audioGainRatio;
@property(nonatomic) _Bool outputMute; // @dynamic outputMute;
@property(retain, nonatomic) UIView *playerView; // @dynamic playerView;
@property(readonly, nonatomic) id <ITPBusinessReportManager> reportManager;
@property(readonly, nonatomic) id <ITPPlayerProxy> proxy;
- (void)setupPluginManger;
- (id)initWithPlayingQueue:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithPlayingQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

