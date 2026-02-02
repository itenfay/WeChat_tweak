//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, NSObject, NSString, WCPlayerFairPlayResourceLoader;

@interface WCSystemPlayer
{
    _Bool _isNoCallbackSeek;
    float _lastPlayBackRate;
    WCPlayerFairPlayResourceLoader *_fairPlayResourceloader;
    NSString *_changeToPlayPath;
    AVAsset *_asset;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    NSObject *_playbackTimeObserver;
    AVPlayerItemVideoOutput *_snapshotOutput;
    double _playablePos;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNoCallbackSeek; // @synthesize isNoCallbackSeek=_isNoCallbackSeek;
@property(nonatomic) float lastPlayBackRate; // @synthesize lastPlayBackRate=_lastPlayBackRate;
@property(nonatomic) double playablePos; // @synthesize playablePos=_playablePos;
@property(retain, nonatomic) AVPlayerItemVideoOutput *snapshotOutput; // @synthesize snapshotOutput=_snapshotOutput;
@property(retain, nonatomic) NSObject *playbackTimeObserver; // @synthesize playbackTimeObserver=_playbackTimeObserver;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *changeToPlayPath; // @synthesize changeToPlayPath=_changeToPlayPath;
@property(retain, nonatomic) WCPlayerFairPlayResourceLoader *fairPlayResourceloader; // @synthesize fairPlayResourceloader=_fairPlayResourceloader;
- (void)onFristFrameRendered;
- (void)onTimeControlStatus:(id)arg1;
- (void)onPlayerRateChange:(id)arg1;
- (void)onPresentationSizeChange;
- (unsigned long long)onPlayerErrorHappend;
- (void)onVideoNewErrorLogEntry:(id)arg1;
- (void)onVideoPlaybackStalled:(id)arg1;
- (void)onPlaybackBufferFullChange;
- (void)onPlayerDidPlayToEndTime;
- (void)onPlaybackLikelyToKeepUpChange;
- (void)onLoadedTimeRangesChange;
- (void)onPlaybackBufferEmptyChange;
- (void)onStatusChange:(id)arg1;
- (void)onNewAccessLogEntry:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (void)checkBufferingState;
- (void)forceResumePlayWhenHaveBuffer;
- (void)removeTimeObserver;
- (void)addPeriodicTimeObserver;
- (void)removePlayerObserver;
- (void)addPlayerObserver;
- (void)addPlayerNotification;
- (void)createAVPlayerItem;
- (void)createAsset;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setVideoRenderInBackgroundEnable:(_Bool)arg1;
- (void)generateAVPlayer;
- (void)setPlayerStartPos:(float)arg1;
- (void)createPlayer;
- (void)initPlayer;
- (void)captureVideoWithFinishBlock:(CDUnknownBlockType)arg1;
- (id)syncCaptureVideo;
- (void)seekToTime:(double)arg1 isAccurate:(_Bool)arg2 isNoCallbackSeek:(_Bool)arg3;
- (void)seekToTime:(double)arg1 isAccurate:(_Bool)arg2;
- (void)seekNoCallbackToTime:(double)arg1;
- (void)releasePlayer;
- (void)pause;
- (void)stop;
- (void)start;
- (void)asyncSetCategroyForExternalPlayback:(CDUnknownBlockType)arg1;
- (void)prepareAsync;
- (struct __CVBuffer *)getCurrentPixelBuffer;
- (id)getPlayerItemVideoOutput;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (id)getAVPlayer;
- (id)getPlayerItem;
- (id)getPlayerAsset;
- (void)setPlayerLoop:(_Bool)arg1;
- (_Bool)muted;
- (void)setPreferredPeakBitRate:(double)arg1;
- (void)setPlayerToMuted:(_Bool)arg1;
- (void)setPlaybackRate:(float)arg1;
- (float)playbackRate;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)presentationSize;
- (double)getVolume;
- (void)setVolume:(double)arg1;
- (float)videoBitrate;
- (float)audioBitrate;
- (double)duration;
- (double)currentTime;

@end

