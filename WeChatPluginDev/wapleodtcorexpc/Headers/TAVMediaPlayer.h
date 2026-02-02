//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerItem, NSError, NSHashTable, NSLock, NSMutableArray;

@interface TAVMediaPlayer : NSObject
{
    _Bool _shouldRepeat;
    _Bool _shouldResume;
    _Bool _needPlaying;
    _Bool _isSeeking;
    _Bool _refreshing;
    AVPlayer *_player;
    AVPlayerItem *_currentItem;
    NSError *_error;
    long long _currentState;
    double _speed;
    double _volume;
    long long _previousState;
    double _lastPlaybackRate;
    long long _tryCount;
    id _timeObserver;
    NSLock *_lock;
    NSHashTable *_observerList;
    NSMutableArray *_seekBlocks;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _progressInterval;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _targetTime;
    CDStruct_e83c9415 _validRange;
}

+ (void)setAdvancedRefreshEnabled:(_Bool)arg1;
+ (_Bool)isAdvancedRefreshEnabled;
+ (id)playerWithPlayerItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) CDStruct_1b6d18a9 targetTime; // @synthesize targetTime=_targetTime;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(retain, nonatomic) NSMutableArray *seekBlocks; // @synthesize seekBlocks=_seekBlocks;
@property(retain, nonatomic) NSHashTable *observerList; // @synthesize observerList=_observerList;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool needPlaying; // @synthesize needPlaying=_needPlaying;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(nonatomic) long long tryCount; // @synthesize tryCount=_tryCount;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double lastPlaybackRate; // @synthesize lastPlaybackRate=_lastPlaybackRate;
@property(nonatomic) long long previousState; // @synthesize previousState=_previousState;
@property(nonatomic) _Bool shouldResume; // @synthesize shouldResume=_shouldResume;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) CDStruct_1b6d18a9 progressInterval; // @synthesize progressInterval=_progressInterval;
@property(nonatomic) CDStruct_e83c9415 validRange; // @synthesize validRange=_validRange;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) AVPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)handlePlaybackLikelyToKeepUpChange;
- (void)handlePlaybackBufferEmptyChange;
- (void)handlePlaybackRateChange;
- (void)handlePlayerItemStatusChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)notifySpeedDidChange;
- (void)notifyDidPlayToEnd;
- (void)notifyCurrentTimeChanged:(CDStruct_1b6d18a9)arg1;
- (void)notifyStateDidChange;
- (void)notifyItemDidChange;
- (void)notifyPlayerDidReset;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (void)removeObserverForCurrentItem;
- (void)addObserverForCurrentItem;
- (void)removeTimeObserver;
- (void)addTimeObserverForPlayer;
- (void)removeObserverForPlayer;
- (void)addObserverForPlayer;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)updateMediaDuration;
- (_Bool)canUseAdvancedRefresh;
- (_Bool)shouldRestart;
- (CDStruct_1b6d18a9)startTimeForRepeat;
- (_Bool)shouldTryToResume;
- (void)resetRateIfNeeded;
- (void)tryToChangeState:(long long)arg1;
- (void)resume;
- (void)refresh;
- (void)destory;
- (void)stop;
- (void)replay;
- (void)pause;
- (void)playAtTime:(CDStruct_1b6d18a9)arg1;
- (void)play;
- (void)seekBackToValidTimeRangeStart;
- (CDStruct_1b6d18a9)reviseSeekTime:(CDStruct_1b6d18a9)arg1;
- (void)callAllCompletions;
- (void)cancelSeeking;
- (void)handleSeekingWithCompletions:(id)arg1 seekTime:(CDStruct_1b6d18a9)arg2 finished:(_Bool)arg3;
- (void)innerSeekToTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)prepareToPlay;
- (void)resetPlayerItem:(id)arg1;
- (void)dealloc;
- (id)initWithPlayerItem:(id)arg1;
- (id)init;

@end

