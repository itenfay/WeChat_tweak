//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, TPDynamicStatisticParams, TPGeneralPlayFlowParams, TPPlaybackInfo, TPPlaybackParams, TPPlayerLogContext, TPPlayerPictureInPictureHandler, TPPlayerQueue, TPPlayerStateStrategy, TPPlayerStateWrapper, UIView;
@protocol ITPInnerRichMediaSynchronizer, ITPPlayerAdapterDelegate, ITPPlayerBase, ITPPlayerBaseDelegate, ITPStrategy;

@interface TPPlayerAdapter : NSObject
{
    _Bool _enableSnapshot;
    id <ITPPlayerBaseDelegate> _delegate;
    long long _playerType;
    long long _playerId;
    id <ITPPlayerAdapterDelegate> _adapterPlayerDelegate;
    id <ITPPlayerBase> _player;
    id <ITPStrategy> _strategy;
    TPPlaybackParams *_playbackParams;
    TPPlaybackInfo *_playbackInfo;
    TPPlayerStateWrapper *_playerState;
    TPPlayerStateStrategy *_playerStateChecker;
    TPPlayerPictureInPictureHandler *_pipHandler;
    NSMutableSet *_filteredPlayInfo;
    NSMutableSet *_filteredDetailInfo;
    TPPlayerLogContext *_log;
    id <ITPInnerRichMediaSynchronizer> _innerRichMediaSynchronizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ITPInnerRichMediaSynchronizer> innerRichMediaSynchronizer; // @synthesize innerRichMediaSynchronizer=_innerRichMediaSynchronizer;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
@property(retain, nonatomic) NSMutableSet *filteredDetailInfo; // @synthesize filteredDetailInfo=_filteredDetailInfo;
@property(retain, nonatomic) NSMutableSet *filteredPlayInfo; // @synthesize filteredPlayInfo=_filteredPlayInfo;
@property(retain, nonatomic) TPPlayerPictureInPictureHandler *pipHandler; // @synthesize pipHandler=_pipHandler;
@property(retain, nonatomic) TPPlayerStateStrategy *playerStateChecker; // @synthesize playerStateChecker=_playerStateChecker;
@property(retain, nonatomic) TPPlayerStateWrapper *playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) TPPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) TPPlaybackParams *playbackParams; // @synthesize playbackParams=_playbackParams;
@property(retain, nonatomic) id <ITPStrategy> strategy; // @synthesize strategy=_strategy;
@property(retain) id <ITPPlayerBase> player; // @synthesize player=_player;
@property(nonatomic) __weak id <ITPPlayerAdapterDelegate> adapterPlayerDelegate; // @synthesize adapterPlayerDelegate=_adapterPlayerDelegate;
@property(nonatomic) _Bool enableSnapshot; // @synthesize enableSnapshot=_enableSnapshot;
@property(nonatomic) __weak id <ITPPlayerBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)onGetCurrentPlayPosition:(id)arg1;
- (_Bool)isPlayerInfoVerbose:(unsigned long long)arg1;
- (_Bool)shouldFilterOnDetailInfo:(long long)arg1;
- (_Bool)shouldFilterOnInfo:(unsigned long long)arg1;
- (id)currentStateString;
- (void)savePlayerStatus;
- (long long)handleReset;
- (long long)handleStop;
- (void)handleOnPrepared;
- (long long)handlePrepareAsync;
- (long long)handlePrepare;
- (void)retryWithPlayerType:(long long)arg1;
- (id)createPlayer:(long long)arg1;
- (long long)playerTypeForRetry;
- (long long)playerTypeForOpen;
- (long long)rePrepareWithPlayerType:(long long)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)onStateChange:(id)arg1 preState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (void)onPlayer:(id)arg1 drmInfo:(id)arg2;
- (void)onPlayer:(id)arg1 detailInfo:(id)arg2;
- (void)onPlayer:(id)arg1 airplayErrorDidOccur:(long long)arg2;
- (void)onPlayer:(id)arg1 airplayDidActive:(_Bool)arg2;
- (void)onPlayer:(id)arg1 stateChangedWhenPictureInPictureActive:(unsigned long long)arg2;
- (void)onPlayer:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureStateDidChange:(long long)arg2;
- (void)onPlayer:(id)arg1 pictureInPictureErrorDidOccur:(long long)arg2;
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
- (void)onPrepared:(id)arg1;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3;
- (void)onCompletion:(id)arg1;
- (void)setRichMediaSynchronizer:(id)arg1;
- (long long)reopenPlayer;
- (long long)forceStopPlayer;
- (long long)switchDefinitionWithUrlDataSource:(id)arg1 definitionId:(long long)arg2 mode:(long long)arg3;
- (long long)switchDefinitionWithUrlDataSource:(id)arg1 definitionId:(long long)arg2;
- (long long)setUrlDataSource:(id)arg1;
- (long long)setVideoInfo:(id)arg1;
@property(readonly, nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(readonly, nonatomic) _Bool pictureInPicturePossible;
@property(readonly, nonatomic) _Bool pictureInPictureActive;
@property(readonly, nonatomic) _Bool pictureInPictureSupported;
- (long long)stopPictureInPicture;
- (long long)startPictureInPicture;
@property(nonatomic) unsigned long long externalPlaybackVideoGravity;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool allowsExternalPlayback;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
- (id)videoPlusSubtitleSnapshot;
- (id)subtitleSnapshot;
- (id)snapshot;
- (void)updateContext:(id)arg1;
- (long long)seekTo:(long long)arg1 mode:(long long)arg2;
- (long long)seekTo:(long long)arg1;
- (long long)releasePlayer;
- (long long)reset;
- (long long)stop;
- (long long)pause;
- (long long)start;
- (long long)prepareAsync;
- (long long)prepare;
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (long long)getPlayerState;
- (id)getProgramInfo;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (id)getTrackInfo;
- (id)getPropertyString:(long long)arg1;
- (long long)getPropertyLong:(long long)arg1;
- (long long)switchDefinitionWithMediaAsset:(id)arg1 definitionId:(long long)arg2;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2;
- (long long)setLoopback:(_Bool)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (long long)setLoopback:(_Bool)arg1;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2 httpHeader:(id)arg3;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3 httpHeader:(id)arg4;
- (long long)setPlayerOptionalParam:(id)arg1;
- (long long)setDataSourceWithMediaAsset:(id)arg1;
- (long long)setDataSource:(id)arg1 httpHeader:(id)arg2;
- (long long)setDataSource:(id)arg1;
@property(readonly, nonatomic) TPGeneralPlayFlowParams *generalPlayFlowParams;
- (id)getDynamicStatisticParamsAndReset;
@property(readonly, nonatomic) TPDynamicStatisticParams *dynamicStatisticParams;
@property(readonly, nonatomic) long long demuxerOffsetInFile;
- (id)getPlayer;
@property(retain, nonatomic) TPPlayerQueue *playerQueue; // @dynamic playerQueue;
@property(nonatomic) _Bool enableResourceLoader; // @dynamic enableResourceLoader;
@property(nonatomic) unsigned long long videoGravity; // @dynamic videoGravity;
@property(readonly, nonatomic) unsigned long long videoHeight; // @dynamic videoHeight;
@property(readonly, nonatomic) unsigned long long videoWidth; // @dynamic videoWidth;
@property(readonly, nonatomic) long long currentClipIndex;
@property(readonly, nonatomic) long long playableDurationMs;
@property(readonly, nonatomic) double bufferPercent; // @dynamic bufferPercent;
@property(readonly, nonatomic) unsigned long long currentState;
@property(readonly, nonatomic) long long currentPositionMs; // @dynamic currentPositionMs;
@property(readonly, nonatomic) long long durationMs; // @dynamic durationMs;
@property(readonly, nonatomic) double maxPlaySpeedRatio;
@property(nonatomic) double playSpeedRatio; // @dynamic playSpeedRatio;
@property(copy, nonatomic) NSString *audioNormalizeVolumeParams;
@property(nonatomic) double audioGainRatio; // @dynamic audioGainRatio;
@property(nonatomic) _Bool outputMute; // @dynamic outputMute;
@property(retain, nonatomic) UIView *playerView; // @dynamic playerView;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) long long playerId; // @synthesize playerId=_playerId;
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

