//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSObject, VideoStreamInfo, VideoStreamMoniterObject;
@protocol NSObject><AVPlayerStateControlDelegate;

@interface VideoStreamPlayerView
{
    _Bool _forbidAutoPlayWhenEnterForeGround;
    float _currentPlayedSec;
    VideoStreamInfo *_videoInfo;
    VideoStreamMoniterObject *_stateMoniterObject;
    id <NSObject><AVPlayerStateControlDelegate> _controlDelegate;
    NSObject *_playbackTimeObserver;
    NSArray *_arrBufferTimes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrBufferTimes; // @synthesize arrBufferTimes=_arrBufferTimes;
@property(retain, nonatomic) NSObject *playbackTimeObserver; // @synthesize playbackTimeObserver=_playbackTimeObserver;
@property(nonatomic) float currentPlayedSec; // @synthesize currentPlayedSec=_currentPlayedSec;
@property(nonatomic) __weak id <NSObject><AVPlayerStateControlDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
@property(nonatomic) _Bool forbidAutoPlayWhenEnterForeGround; // @synthesize forbidAutoPlayWhenEnterForeGround=_forbidAutoPlayWhenEnterForeGround;
@property(retain, nonatomic) VideoStreamMoniterObject *stateMoniterObject; // @synthesize stateMoniterObject=_stateMoniterObject;
@property(retain, nonatomic) VideoStreamInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
- (void)onDownloadProgress:(unsigned int)arg1;
- (_Bool)isStreamingPlayMode;
- (void)OnSnsVideoChanged;
- (void)onDownloadSuccess;
- (void)onDownloadVideoReturn:(id)arg1;
- (void)OnVideoDownloadErrorExpired:(_Bool)arg1;
- (void)tryToBeginPlayVideo;
- (void)tryToPlayAndStopLoading;
- (void)tryToPauseAndStartLoading;
- (void)genThumbIfNeed;
- (void)updateVideoArgs;
- (double)getVideoCurrentSeconde;
- (double)getVideoBufferedTime;
- (id)getAVPlayerItem;
- (id)getAVPlayer;
- (void)makeSureVideoPauseWhenNextAppActivePlay;
- (void)resetPlayerToLocalPlay;
- (void)reportKVArgs:(id)arg1;
- (void)calculateDataBufferState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)monitoringPlayback:(id)arg1;
- (void)playToEnd:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)appBecomeActive:(id)arg1;
- (id)getFormalVideoPath;
- (void)startBuffering;
- (void)seekTo:(float)arg1;
- (void)performPauseForce:(_Bool)arg1;
- (void)startPlayer;
- (void)stopDownloadVideo;
- (unsigned long long)startDownloadVideo;
- (void)setDisableResumeMusicPlayAfterPause:(_Bool)arg1;
- (id)generatePlayerItem;
- (void)initPlayer;
- (void)clearPlayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

