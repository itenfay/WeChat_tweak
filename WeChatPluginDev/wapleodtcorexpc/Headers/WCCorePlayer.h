//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock, WCDownloadArgsWrap, WCPlayerLayerView, WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerReporter, WCPlayerResourceLoader;
@protocol WCCorePlayerDelegate;

@interface WCCorePlayer : NSObject
{
    _Bool _isPreparing;
    _Bool _isPrepared;
    _Bool _isBuffering;
    _Bool _isSeeking;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerLayerView *_displayView;
    WCPlayerPlaybackInfo *_playbackInfo;
    WCDownloadArgsWrap *_downloadArgsWrap;
    WCPlayerResourceLoader *_resourceloader;
    WCPlayerReporter *_reporter;
    id <WCCorePlayerDelegate> _delegate;
    CDUnknownBlockType _playbackCallback;
    double _seekTime;
    long long _seekCount;
    NSRecursiveLock *_lock;
    double _seekingTime;
}

- (void).cxx_destruct;
@property(nonatomic) double seekingTime; // @synthesize seekingTime=_seekingTime;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long seekCount; // @synthesize seekCount=_seekCount;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(nonatomic) _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
@property(copy, nonatomic) CDUnknownBlockType playbackCallback; // @synthesize playbackCallback=_playbackCallback;
@property(nonatomic) __weak id <WCCorePlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCPlayerResourceLoader *resourceloader; // @synthesize resourceloader=_resourceloader;
@property(retain, nonatomic) WCDownloadArgsWrap *downloadArgsWrap; // @synthesize downloadArgsWrap=_downloadArgsWrap;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) WCPlayerLayerView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
- (void)seekToTime:(double)arg1 isAccurate:(_Bool)arg2 isNoCallbackSeek:(_Bool)arg3;
- (void)seekToTime:(double)arg1 isAccurate:(_Bool)arg2;
- (void)seekNoCallbackToTime:(double)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (_Bool)isEnableCallbackVideoFrame;
- (id)getAVPlayer;
- (id)getPlayerItem;
- (id)getPlayerAsset;
- (void)setCallbackVideoFrameEnable:(_Bool)arg1;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setPlayerLoop:(_Bool)arg1;
- (_Bool)muted;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)switchResourceloaderDelegate:(id)arg1 resourceUrl:(id)arg2 resourceType:(long long)arg3 swithMode:(long long)arg4;
- (void)captureVideoWithFinishBlock:(CDUnknownBlockType)arg1;
- (id)getPlayerItemVideoOutput;
- (struct __CVBuffer *)getCurrentPixelBuffer;
- (void)forceResumePlayWhenHaveBuffer;
- (long long)videoFrameRate;
- (id)syncCaptureVideo;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (void)setVideoRenderInBackgroundEnable:(_Bool)arg1;
- (void)removeTimeObserver;
- (void)addPeriodicTimeObserver;
- (void)resumeBuffering;
- (void)pauseBuffering;
- (void)releasePlayer;
- (void)pause;
- (void)stop;
- (void)start;
- (void)prepareAsync;
- (void)setPlaybackRate:(float)arg1;
- (float)playbackRate;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)presentationSize;
- (double)getVolume;
- (void)setVolume:(double)arg1;
- (double)playablePos;
- (double)currentTime;
- (long long)videoRenderFrmCnt;
- (long long)videoDecodeFrmCnt;
- (float)audioBitrate;
- (float)videoBitrate;
- (double)duration;
- (void)dealloc;
- (id)initWithPlayerArgs:(id)arg1 playbackInfo:(id)arg2 downloadArgsWrap:(id)arg3 resourceloader:(id)arg4;

@end

