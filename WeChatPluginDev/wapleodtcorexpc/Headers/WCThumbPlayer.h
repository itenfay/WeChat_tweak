//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TPVideoFrameBuffer, WCTPPlayer;

@interface WCThumbPlayer
{
    _Bool _isNoCallbackSeek;
    _Bool _isLocalServerReinit;
    _Bool _isPauseBuffering;
    WCTPPlayer *_player;
    unsigned long long _seekStartTime;
    TPVideoFrameBuffer *_currentVideoFrameBuffer;
    struct _opaque_pthread_rwlock_t _pixelBufferLock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPauseBuffering; // @synthesize isPauseBuffering=_isPauseBuffering;
@property(nonatomic) _Bool isLocalServerReinit; // @synthesize isLocalServerReinit=_isLocalServerReinit;
@property(nonatomic) struct _opaque_pthread_rwlock_t pixelBufferLock; // @synthesize pixelBufferLock=_pixelBufferLock;
@property(retain, nonatomic) TPVideoFrameBuffer *currentVideoFrameBuffer; // @synthesize currentVideoFrameBuffer=_currentVideoFrameBuffer;
@property(nonatomic) _Bool isNoCallbackSeek; // @synthesize isNoCallbackSeek=_isNoCallbackSeek;
@property(nonatomic) unsigned long long seekStartTime; // @synthesize seekStartTime=_seekStartTime;
@property(retain, nonatomic) WCTPPlayer *player; // @synthesize player=_player;
- (void)onVideoDecoderPacketNoReceiveFrameWithDesc:(id)arg1;
- (void)onPlayerSeekComplete;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onSwitchDataSourceCompeleted;
- (void)onPlayerAudioFrameOut:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (unsigned long long)onPlayerErrorHappend:(long long)arg1 errorCode:(long long)arg2;
- (void)onPlayerErrorWithType:(long long)arg1 errorCode:(long long)arg2;
- (void)onPlayerCurrentLoopStart;
- (void)onPlayerCurrentLoopEnd;
- (void)onPlayerPauseContinueBufferingCompleted;
- (void)onPlayerBufferingEnd;
- (void)onPlayerBufferingStart;
- (void)onPlayerDidPlayToEndTime;
- (void)onPlayerStateReady;
- (void)onFirstVideoPacketRead;
- (void)onFirstVideoFrameRendered;
- (void)onFirstAudioFrameRendered;
- (void)onPlayerGetAudioDecoderType:(long long)arg1;
- (void)onPlayerGetVideoDecoderType:(long long)arg1;
- (void)onPlayerFirstVideoDecoderStart;
- (void)onPlayerFirstAudioDecoderStart;
- (void)onPlayerReinitWithReason:(long long)arg1;
- (void)removeTimeObserver;
- (void)addPeriodicTimeObserver;
- (void)setPlayerStartPos:(float)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setInfoWithPlayer:(id)arg1 args:(id)arg2 resourceloader:(id)arg3;
- (void)initPlayer;
- (long long)getAudioSpeedProcessorType;
- (void)switchResourceloaderDelegate:(id)arg1 resourceUrl:(id)arg2 resourceType:(long long)arg3 swithMode:(long long)arg4;
- (void)captureVideoWithFinishBlock:(CDUnknownBlockType)arg1;
- (id)syncCaptureVideo;
- (void)seekToTime:(double)arg1 isAccurate:(_Bool)arg2 isNoCallbackSeek:(_Bool)arg3;
- (void)seekToTime:(double)arg1 isAccurate:(_Bool)arg2;
- (void)seekNoCallbackToTime:(double)arg1;
- (void)resumeBuffering;
- (void)pauseBuffering;
- (void)releasePlayer;
- (void)pause;
- (void)stop;
- (void)start;
- (void)prepareAsync;
- (void)setVideoRenderInBackgroundEnable:(_Bool)arg1;
- (id)getPlayerItemVideoOutput;
- (struct __CVBuffer *)getCurrentPixelBuffer;
- (_Bool)isEnableCallbackVideoFrame;
- (void)setCallbackVideoFrameEnable:(_Bool)arg1;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (void)setPlayerLoop:(_Bool)arg1;
- (_Bool)muted;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)setPlaybackRate:(float)arg1;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)presentationSize;
- (long long)videoFrameRate;
- (long long)videoRenderFrmCnt;
- (long long)videoDecodeFrmCnt;
- (double)getVolume;
- (void)setVolume:(double)arg1;
- (float)videoBitrate;
- (float)audioBitrate;
- (float)playbackRate;
- (double)duration;
- (double)playablePos;
- (double)currentTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

