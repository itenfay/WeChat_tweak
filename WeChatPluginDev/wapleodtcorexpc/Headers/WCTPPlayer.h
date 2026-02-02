//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPVideoInfo, UIView;
@protocol ITPPlayer, OS_dispatch_source, WCTPPlayerDelegate;

@interface WCTPPlayer : NSObject
{
    _Bool _enableCallbackVideoFrame;
    _Bool _outputAudioFrame;
    _Bool _enableSEICallback;
    _Bool _enableRenderOptYuv420;
    _Bool _muted;
    _Bool _bInitialSeekAccurate;
    _Bool _bBeginFrameRendered;
    _Bool _bStopped;
    _Bool _isLoopback;
    _Bool _isPrepared;
    _Bool _isOpenAudioQueueNewLatency;
    float _expectBufferLen;
    float _playbackInterval;
    float _initialSeekPos;
    float _bufferMinDurationWhenNoData;
    unsigned int _taskId;
    unsigned int _switchCount;
    unsigned long long _previousState;
    unsigned long long _playerState;
    id <WCTPPlayerDelegate> _delegate;
    long long _videoFrameRate;
    long long _enableRendererSharpen;
    long long _enableRendererLucid;
    long long _enableRendererClarity;
    long long _audioSpeedProcessorType;
    long long _decoderStrategy;
    NSString *_hlsPemKey;
    UIView *_displayView;
    id <ITPPlayer> _player;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    CDUnknownBlockType _intervalCallBackBlock;
    TPVideoInfo *_videoInfo;
    long long _callbackPosition;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isOpenAudioQueueNewLatency; // @synthesize isOpenAudioQueueNewLatency=_isOpenAudioQueueNewLatency;
@property(nonatomic) long long callbackPosition; // @synthesize callbackPosition=_callbackPosition;
@property(nonatomic) unsigned int switchCount; // @synthesize switchCount=_switchCount;
@property(retain, nonatomic) TPVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(nonatomic) _Bool isLoopback; // @synthesize isLoopback=_isLoopback;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
@property _Bool bStopped; // @synthesize bStopped=_bStopped;
@property _Bool bBeginFrameRendered; // @synthesize bBeginFrameRendered=_bBeginFrameRendered;
@property(nonatomic) float bufferMinDurationWhenNoData; // @synthesize bufferMinDurationWhenNoData=_bufferMinDurationWhenNoData;
@property(nonatomic) _Bool bInitialSeekAccurate; // @synthesize bInitialSeekAccurate=_bInitialSeekAccurate;
@property(nonatomic) float initialSeekPos; // @synthesize initialSeekPos=_initialSeekPos;
@property(copy, nonatomic) CDUnknownBlockType intervalCallBackBlock; // @synthesize intervalCallBackBlock=_intervalCallBackBlock;
@property(nonatomic) float playbackInterval; // @synthesize playbackInterval=_playbackInterval;
@property(retain) NSObject<OS_dispatch_source> *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property(retain, nonatomic) id <ITPPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak UIView *displayView; // @synthesize displayView=_displayView;
@property(nonatomic) NSString *hlsPemKey; // @synthesize hlsPemKey=_hlsPemKey;
@property(nonatomic) long long decoderStrategy; // @synthesize decoderStrategy=_decoderStrategy;
@property(nonatomic) long long audioSpeedProcessorType; // @synthesize audioSpeedProcessorType=_audioSpeedProcessorType;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) long long enableRendererClarity; // @synthesize enableRendererClarity=_enableRendererClarity;
@property(nonatomic) long long enableRendererLucid; // @synthesize enableRendererLucid=_enableRendererLucid;
@property(nonatomic) long long enableRendererSharpen; // @synthesize enableRendererSharpen=_enableRendererSharpen;
@property(nonatomic) _Bool enableRenderOptYuv420; // @synthesize enableRenderOptYuv420=_enableRenderOptYuv420;
@property(nonatomic) _Bool enableSEICallback; // @synthesize enableSEICallback=_enableSEICallback;
@property(nonatomic) _Bool outputAudioFrame; // @synthesize outputAudioFrame=_outputAudioFrame;
@property(nonatomic) long long videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(nonatomic) _Bool enableCallbackVideoFrame; // @synthesize enableCallbackVideoFrame=_enableCallbackVideoFrame;
@property(nonatomic) float expectBufferLen; // @synthesize expectBufferLen=_expectBufferLen;
@property(nonatomic) __weak id <WCTPPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(nonatomic) unsigned long long previousState; // @synthesize previousState=_previousState;
- (void)onVideoSizeChanged:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)onPlayer:(id)arg1 audioFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 videoFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 subtitleData:(id)arg2;
- (void)onPlayerDownloadUpdate:(id)arg1;
- (void)onPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (void)onDemuxerPauseContinueBufferingCompleted;
- (void)onSeekComplete:(id)arg1;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3 arg1:(long long)arg4 arg2:(long long)arg5;
- (void)onPrepared:(id)arg1;
- (void)onCompletion:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)onStartRenderFrame;
- (long long)getAudioCodecID;
- (long long)getVideoCodecID;
- (void)setContentMode:(long long)arg1;
- (void)captureVideoWithFinishBlock:(CDUnknownBlockType)arg1;
- (id)syncCaptureVideo;
- (float)playbackPos;
- (float)playablePos;
- (float)bufferPos;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (void)setLoopback:(_Bool)arg1;
- (long long)videoRenderFrmCnt;
- (long long)videoDecodeFrmCnt;
- (long long)audioBitrate;
- (long long)videoBitrate;
- (struct CGSize)presentationSize;
- (double)currentTime;
- (float)duration;
- (void)setPlayerOptionalParams;
- (void)setVideoRenderInBackgroundEnable:(_Bool)arg1;
- (void)seekTo:(double)arg1 AccurateSeek:(_Bool)arg2;
- (void)seekTo:(double)arg1;
- (void)seekBeigin;
- (void)removePeriodicTimeObserver;
- (void)addPeriodicTimeObserverForInterval:(float)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)resumeBuffering;
- (void)pauseBuffering;
- (void)pause;
- (void)play;
- (void)prepareAsync;
- (void)cleanPlayer;
- (void)setResourceloaderDelegate:(id)arg1 delegateQueue:(id)arg2 resourceUrl:(id)arg3 resourceType:(long long)arg4;
- (void)setResourceloaderDelegate:(id)arg1 resourceUrl:(id)arg2 resourceType:(long long)arg3;
- (void)switchResourceloaderDelegate:(id)arg1 delegateQueue:(id)arg2 resourceUrl:(id)arg3 resourceType:(long long)arg4 swithMode:(long long)arg5;
- (void)switchResourceloaderDelegate:(id)arg1 resourceUrl:(id)arg2 resourceType:(long long)arg3 swithMode:(long long)arg4;
@property(nonatomic) float playSpeedRatio; // @dynamic playSpeedRatio;
- (id)generateNewVideoInfo:(id)arg1 resourceType:(long long)arg2;
- (double)getVolume;
- (void)setVolume:(double)arg1;
- (void)setInitialSeekPos:(float)arg1 Accurate:(_Bool)arg2;
- (void)setLoopback:(_Bool)arg1 startPos:(float)arg2 endPos:(float)arg3;
- (void)setPlayerDisplayView:(id)arg1;
- (void)dealloc;
- (id)initWithTaskId:(unsigned int)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

