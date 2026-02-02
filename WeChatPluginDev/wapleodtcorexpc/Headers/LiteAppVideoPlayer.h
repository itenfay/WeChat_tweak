//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPlayerItemVideoOutput, CADisplayLink, FlutterEventChannel, LiteAppVideoPlayerFrameUpdater, MAVEffectRenderer, NSString, TXLivePlayer, WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerView;

@interface LiteAppVideoPlayer : NSObject
{
    _Bool _checkCache;
    _Bool _disposed;
    _Bool _dataCompleted;
    _Bool _buffering;
    _Bool _muted;
    _Bool _loop;
    WCPlayerView *playerView;
    WCPlayerPlaybackInfo *playbackInfo;
    WCPlayerPlayArgs *playerArgs;
    FlutterEventChannel *_eventChannel;
    LiteAppVideoPlayerFrameUpdater *_frameUpdater;
    WCPlayerView *_player;
    TXLivePlayer *_livePlayer;
    MAVEffectRenderer *_effectRender;
    AVPlayerItemVideoOutput *_AVPlayerOutput;
    CADisplayLink *_displayLink;
    double _bufferValue;
    NSString *_url;
    NSString *_referer;
    NSString *_cacheKey;
    long long _rotate;
    CDUnknownBlockType _eventSink;
    struct __CVBuffer *_lastBuffer;
    struct __CVBuffer *_latestPixelBuffer;
    NSObject *_initialEvent;
    NSObject *_errorEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *errorEvent; // @synthesize errorEvent=_errorEvent;
@property(retain, nonatomic) NSObject *initialEvent; // @synthesize initialEvent=_initialEvent;
@property(nonatomic) struct __CVBuffer *latestPixelBuffer; // @synthesize latestPixelBuffer=_latestPixelBuffer;
@property(nonatomic) struct __CVBuffer *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) CDUnknownBlockType eventSink; // @synthesize eventSink=_eventSink;
@property(nonatomic) long long rotate; // @synthesize rotate=_rotate;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSString *referer; // @synthesize referer=_referer;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool buffering; // @synthesize buffering=_buffering;
@property(nonatomic) _Bool dataCompleted; // @synthesize dataCompleted=_dataCompleted;
@property(nonatomic) double bufferValue; // @synthesize bufferValue=_bufferValue;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) AVPlayerItemVideoOutput *AVPlayerOutput; // @synthesize AVPlayerOutput=_AVPlayerOutput;
@property(retain, nonatomic) MAVEffectRenderer *effectRender; // @synthesize effectRender=_effectRender;
@property(retain, nonatomic) TXLivePlayer *livePlayer; // @synthesize livePlayer=_livePlayer;
@property(retain, nonatomic) WCPlayerView *player; // @synthesize player=_player;
@property(nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
@property(nonatomic) _Bool checkCache; // @synthesize checkCache=_checkCache;
@property(retain, nonatomic) LiteAppVideoPlayerFrameUpdater *frameUpdater; // @synthesize frameUpdater=_frameUpdater;
@property(retain, nonatomic) FlutterEventChannel *eventChannel; // @synthesize eventChannel=_eventChannel;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (void)onTextureUnregistered:(id)arg1;
- (struct __CVBuffer *)copyPixelBuffer;
- (void)enqueueEvent:(id)arg1;
- (_Bool)onPlayerPixelBuffer:(struct __CVBuffer *)arg1;
- (void)onNetStatus:(id)arg1;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayerCreated;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)onPlayerSeekFail:(float)arg1;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onReceiveAllVideoData;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)hiddenPercentView;
- (void)showPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoFristFrameRendered;
- (void)onAudioFirstFrameRendered;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onScrubbedToTime:(double)arg1;
- (void)onSliderScrubbingDidStart;
- (void)forceSetPlayerToMuted:(_Bool)arg1;
- (void)setPlayerLoop:(_Bool)arg1;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)setPlayBackRate:(float)arg1;
- (double)currentTime;
- (void)pauseVideo;
- (void)playVideo;
- (void)clearLeakPlayer;
- (void)clearPlayer;
- (void)stopPlayer;
- (void)startPlayer;
- (id)generateDownloadArgsWrap;
- (id)createPlayArgs:(_Bool)arg1;
- (void)dispose;
- (void)disposePlayer;
- (void)createPlayer:(_Bool)arg1 isLive:(_Bool)arg2;
- (id)initWithFrameUpdater:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

