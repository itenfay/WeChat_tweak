//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVQueuePlayer, NSArray, NSDate, NSError, NSMutableArray, NSString, NSTimer, TPAVPlayerLayerView, TPAVQueuePlayerSlice, TPFBKVOController, TPFairPlayMgr, TPPlayerLayerViewContainer, TPPlayerLogContext, TPPlayerVideo;

@interface TPAVQueuePlayer : NSObject
{
    _Bool isCaching;
    _Bool enableAccurateStartPos;
    _Bool enableVideoFrameOutput;
    _Bool enableLoopback;
    _Bool enableSnapshot;
    _Bool enableResourceLoader;
    _Bool _allowsExternalPlayback;
    _Bool _usesExternalPlaybackWhileExternalScreenIsActive;
    _Bool isPlayInPIP;
    _Bool enableAutoPictureInPicture;
    _Bool _firstSlicePrepared;
    _Bool _isLoadingNextSlice;
    _Bool _enableSnapshotOutput;
    _Bool _usePlayerLayer;
    _Bool _airplayActive;
    _Bool _isResumeing;
    _Bool _shouldNotifyClipStartWhenPlaying;
    float _volume;
    float _rate;
    int playerID;
    TPPlayerLayerViewContainer *_view;
    id _delegate;
    TPPlayerVideo *currentVideo;
    long long duration;
    long long currentTime;
    double currentTimeBase;
    long long playbackState;
    NSError *error;
    long long loopbackStartPos;
    long long loopbackSkipEndPos;
    NSString *_videoGravity;
    NSString *_externalPlaybackVideoGravity;
    long long _currentClipIndex;
    long long _preferredForwardBufferDurationMs;
    unsigned long long _allowedAudioSpatializationFormats;
    NSMutableArray *_queuePlayerSlices;
    TPAVQueuePlayerSlice *_currentQueuePlayerSlice;
    long long _seekingTime;
    AVQueuePlayer *_player;
    TPAVPlayerLayerView *_playerLayer;
    TPFairPlayMgr *_fairplayMgr;
    long long _startPosition;
    long long _skipEndPosition;
    long long _playableDuration;
    long long _retryCount;
    TPFBKVOController *_playerKVOController;
    CDUnknownBlockType _playerTimeObserverBlock;
    id _playerTimeObserver;
    NSTimer *_outputFrameTimer;
    NSDate *_outputPauseStart;
    NSDate *_outputPreviousFireDate;
    double _lastGotFrameTime;
    long long _seekSource;
    NSArray *_trackInfoArray;
    TPPlayerLogContext *_log;
    struct CGSize _presentationSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
@property(nonatomic) _Bool shouldNotifyClipStartWhenPlaying; // @synthesize shouldNotifyClipStartWhenPlaying=_shouldNotifyClipStartWhenPlaying;
@property(nonatomic) _Bool isResumeing; // @synthesize isResumeing=_isResumeing;
@property(retain, nonatomic) NSArray *trackInfoArray; // @synthesize trackInfoArray=_trackInfoArray;
@property(nonatomic) long long seekSource; // @synthesize seekSource=_seekSource;
@property(nonatomic) double lastGotFrameTime; // @synthesize lastGotFrameTime=_lastGotFrameTime;
@property(retain, nonatomic) NSDate *outputPreviousFireDate; // @synthesize outputPreviousFireDate=_outputPreviousFireDate;
@property(retain, nonatomic) NSDate *outputPauseStart; // @synthesize outputPauseStart=_outputPauseStart;
@property(retain, nonatomic) NSTimer *outputFrameTimer; // @synthesize outputFrameTimer=_outputFrameTimer;
@property(nonatomic) _Bool airplayActive; // @synthesize airplayActive=_airplayActive;
@property(retain, nonatomic) id playerTimeObserver; // @synthesize playerTimeObserver=_playerTimeObserver;
@property(copy, nonatomic) CDUnknownBlockType playerTimeObserverBlock; // @synthesize playerTimeObserverBlock=_playerTimeObserverBlock;
@property(retain, nonatomic) TPFBKVOController *playerKVOController; // @synthesize playerKVOController=_playerKVOController;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property long long playableDuration; // @synthesize playableDuration=_playableDuration;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(nonatomic) _Bool usePlayerLayer; // @synthesize usePlayerLayer=_usePlayerLayer;
@property(nonatomic) _Bool enableSnapshotOutput; // @synthesize enableSnapshotOutput=_enableSnapshotOutput;
@property(nonatomic) long long skipEndPosition; // @synthesize skipEndPosition=_skipEndPosition;
@property(nonatomic) long long startPosition; // @synthesize startPosition=_startPosition;
@property(retain, nonatomic) TPFairPlayMgr *fairplayMgr; // @synthesize fairplayMgr=_fairplayMgr;
@property(retain, nonatomic) TPAVPlayerLayerView *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVQueuePlayer *player; // @synthesize player=_player;
@property(nonatomic) long long seekingTime; // @synthesize seekingTime=_seekingTime;
@property(retain, nonatomic) TPAVQueuePlayerSlice *currentQueuePlayerSlice; // @synthesize currentQueuePlayerSlice=_currentQueuePlayerSlice;
@property(retain, nonatomic) NSMutableArray *queuePlayerSlices; // @synthesize queuePlayerSlices=_queuePlayerSlices;
@property(nonatomic) _Bool isLoadingNextSlice; // @synthesize isLoadingNextSlice=_isLoadingNextSlice;
@property(nonatomic) _Bool firstSlicePrepared; // @synthesize firstSlicePrepared=_firstSlicePrepared;
@property(nonatomic) _Bool enableAutoPictureInPicture; // @synthesize enableAutoPictureInPicture;
@property(nonatomic) _Bool isPlayInPIP; // @synthesize isPlayInPIP;
@property(nonatomic) long long preferredForwardBufferDurationMs; // @synthesize preferredForwardBufferDurationMs=_preferredForwardBufferDurationMs;
@property(nonatomic) long long currentClipIndex; // @synthesize currentClipIndex=_currentClipIndex;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive; // @synthesize usesExternalPlaybackWhileExternalScreenIsActive=_usesExternalPlaybackWhileExternalScreenIsActive;
@property(copy, nonatomic) NSString *externalPlaybackVideoGravity; // @synthesize externalPlaybackVideoGravity=_externalPlaybackVideoGravity;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) _Bool enableResourceLoader; // @synthesize enableResourceLoader;
@property(nonatomic) _Bool enableSnapshot; // @synthesize enableSnapshot;
@property(nonatomic) long long loopbackSkipEndPos; // @synthesize loopbackSkipEndPos;
@property(nonatomic) long long loopbackStartPos; // @synthesize loopbackStartPos;
@property(nonatomic) _Bool enableLoopback; // @synthesize enableLoopback;
@property(nonatomic) _Bool enableVideoFrameOutput; // @synthesize enableVideoFrameOutput;
@property(nonatomic) _Bool enableAccurateStartPos; // @synthesize enableAccurateStartPos;
@property(nonatomic) int playerID; // @synthesize playerID;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property long long playbackState; // @synthesize playbackState;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool isCaching; // @synthesize isCaching;
@property(nonatomic) double currentTimeBase; // @synthesize currentTimeBase;
@property(nonatomic) long long currentTime; // @synthesize currentTime;
@property(nonatomic) long long duration; // @synthesize duration;
@property(retain, nonatomic) TPPlayerVideo *currentVideo; // @synthesize currentVideo;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TPPlayerLayerViewContainer *view; // @synthesize view=_view;
- (void)onAVPlayerLayerViewFirstFrameRendered:(id)arg1;
- (void)outputFrameTimerFunc:(id)arg1;
- (void)stopOutputFrame;
- (void)resumeOutputFrame;
- (void)pauseOutputFrame;
- (void)startOutputFrame:(double)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)addAppDelegateNotification;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (void)advanceAndPlayNextSlice:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)playerItemTimeBaseChange:(id)arg1;
- (void)removeNotification;
- (void)addNotificationWithPlayerItem:(id)arg1;
- (void)removeKVOController;
- (void)addKVOWithPlayerItem:(id)arg1;
- (void)addKVOWithPlayer:(id)arg1;
- (void)handleLoadedTimeRagesChange;
- (void)handlePresentationSizeChange;
- (void)handlePlaybackStateChangeWithKeyPath:(id)arg1;
- (void)handleReadyToPlayWithPlayerItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)notifyClipStartIfNeededWhenPlaying;
- (void)notifyClipStartIfNeededWhenAdvanceToNext;
- (void)resetPlayerValues;
- (void)resetPlayerComponent;
- (void)resetPlayerView;
- (void)reset;
- (void)removeTimeObserverInternal;
- (long long)calculateSlicesDurationBeforeIndex:(unsigned long long)arg1;
- (void)setPlayerTimeObserverInternal;
- (void)judgeNotifyTimeBaseChanged;
- (void)setTimeObserverBlock:(CDUnknownBlockType)arg1;
- (void)didSeekCompleted;
- (void)didAirplayActiveChanged:(_Bool)arg1;
- (void)didErrorOccurred:(id)arg1;
- (void)changePlayerPlaybackState:(long long)arg1;
- (void)changePlayerLoadState:(long long)arg1;
- (void)configureExternalPlayback;
- (void)loadNextPlayerSliceIfNeeded;
- (id)findSliceWithPlayerItem:(id)arg1;
- (long long)findSliceIndexAtPosition:(long long)arg1;
- (void)replacePlayerItemWithSlice:(id)arg1;
- (void)initializePlayerItemInSlice:(id)arg1;
- (void)loadAssetWithQueuePlayerSlice:(id)arg1 requestedKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupPlayer;
- (void)startToPlayVideo;
- (_Bool)deselectTrackInfoWithoutCallback:(long long)arg1 opaque:(long long)arg2;
- (_Bool)deselectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (_Bool)selectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (unsigned long long)getAllowedSpatialFormatFromPlayerItem:(id)arg1;
- (void)setAllowedSpatialFormat:(unsigned long long)arg1 toPlayerItem:(id)arg2;
@property(nonatomic) unsigned long long allowedAudioSpatializationFormats; // @synthesize allowedAudioSpatializationFormats=_allowedAudioSpatializationFormats;
@property(nonatomic) long long bufferedDuration; // @dynamic bufferedDuration;
- (void)updateContext:(id)arg1;
- (id)snapshotUsingImageGeneratorWithCount:(long long)arg1 timeTolerance:(double)arg2 interval:(double)arg3 error:(id *)arg4;
- (id)snapshotUsingVideoOutput;
- (id)snapshot;
- (void)playerSlice:(id)arg1 seekToTime:(long long)arg2 mode:(long long)arg3 source:(long long)arg4;
- (void)seekInAnotherSlice:(id)arg1 seekTime:(long long)arg2 seekMode:(long long)arg3 seekSource:(long long)arg4 sliceIndex:(long long)arg5 nextSliceIndex:(unsigned long long)arg6;
- (void)seekInCurrentSlice:(id)arg1 seekTime:(long long)arg2 seekMode:(long long)arg3 seekSource:(long long)arg4 sliceIndex:(long long)arg5 nextSliceIndex:(unsigned long long)arg6;
- (void)seekToTime:(long long)arg1 mode:(long long)arg2 source:(long long)arg3;
- (void)seekToTime:(long long)arg1 mode:(long long)arg2;
- (void)stop;
- (void)pause;
- (void)play;
- (void)updateVideo:(id)arg1;
- (void)loadVideo:(id)arg1;
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

