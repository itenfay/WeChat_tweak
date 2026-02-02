//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSString, NSTimer, TPPlayerLayerViewContainer, TPPlayerLogContext, TPPlayerVideo, TPSlicePlayer;

@interface TPClipPlayer : NSObject
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
    _Bool _enableAutoPictureInPicture;
    _Bool _isResuming;
    _Bool _shouldNotifyClipStartWhenPlaying;
    float _volume;
    float _rate;
    int playerID;
    TPPlayerVideo *_currentVideo;
    TPPlayerLayerViewContainer *_view;
    id _delegate;
    long long duration;
    long long currentTime;
    double currentTimeBase;
    long long bufferedDuration;
    long long playbackState;
    NSError *error;
    long long loopbackStartPos;
    long long loopbackSkipEndPos;
    NSString *_videoGravity;
    NSString *_externalPlaybackVideoGravity;
    long long _currentClipIndex;
    long long _preferredForwardBufferDurationMs;
    unsigned long long _allowedAudioSpatializationFormats;
    TPSlicePlayer *_player;
    TPPlayerVideo *_video;
    NSTimer *_playerSwitchTimer;
    long long _seekSource;
    long long _seekingTime;
    CDUnknownBlockType _playerTimeObserverBlock;
    TPPlayerLogContext *_log;
    struct CGSize _presentationSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
@property(nonatomic) _Bool shouldNotifyClipStartWhenPlaying; // @synthesize shouldNotifyClipStartWhenPlaying=_shouldNotifyClipStartWhenPlaying;
@property(nonatomic) _Bool isResuming; // @synthesize isResuming=_isResuming;
@property(copy, nonatomic) CDUnknownBlockType playerTimeObserverBlock; // @synthesize playerTimeObserverBlock=_playerTimeObserverBlock;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(nonatomic) long long seekingTime; // @synthesize seekingTime=_seekingTime;
@property(nonatomic) long long seekSource; // @synthesize seekSource=_seekSource;
@property(retain, nonatomic) NSTimer *playerSwitchTimer; // @synthesize playerSwitchTimer=_playerSwitchTimer;
@property(retain, nonatomic) TPPlayerVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) TPSlicePlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool enableAutoPictureInPicture; // @synthesize enableAutoPictureInPicture=_enableAutoPictureInPicture;
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
@property(nonatomic) long long bufferedDuration; // @synthesize bufferedDuration;
@property(nonatomic) _Bool isCaching; // @synthesize isCaching;
@property(nonatomic) double currentTimeBase; // @synthesize currentTimeBase;
@property(nonatomic) long long currentTime; // @synthesize currentTime;
@property(nonatomic) long long duration; // @synthesize duration;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TPPlayerLayerViewContainer *view; // @synthesize view=_view;
@property(retain, nonatomic) TPPlayerVideo *currentVideo; // @synthesize currentVideo=_currentVideo;
- (void)skipEndPosDidChange:(id)arg1;
- (void)startPosDidChange:(id)arg1;
- (void)slicePlayer:(id)arg1 changedToNewPlayer:(id)arg2;
- (void)player:(id)arg1 didFailedToPlayToEndWithError:(id)arg2;
- (void)player:(id)arg1 didDeselectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(id)arg1 didSelectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(id)arg1 videoEndOfOnePlayLoop:(id)arg2;
- (void)playerFirstFrameRendered:(id)arg1;
- (id)player:(id)arg1 assembleAVAssetWithIndex:(unsigned long long)arg2;
- (void)player:(id)arg1 naturalSizeAvailableWithSize:(struct CGSize)arg2;
- (void)player:(id)arg1 onVideoFrame:(struct __CVBuffer *)arg2;
- (void)player:(id)arg1 timeBaseValueChange:(double)arg2;
- (void)player:(id)arg1 airplayDidActive:(_Bool)arg2;
- (void)player:(id)arg1 seekCompleted:(_Bool)arg2;
- (void)player:(id)arg1 didErrorOccurred:(id)arg2;
- (void)player:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)player:(id)arg1 loadStateDidChange:(long long)arg2;
- (void)updateContext:(id)arg1;
- (void)notifyClipStartIfNeededWhenPlaying;
- (void)notifyClipStartIfNeededWhenAdvanceToNext;
@property(nonatomic) unsigned long long allowedAudioSpatializationFormats; // @synthesize allowedAudioSpatializationFormats=_allowedAudioSpatializationFormats;
- (void)getReadyToSwitchPlayer:(id)arg1;
- (void)checkCacheNext;
- (void)checkPlayerSwitchTimer;
- (_Bool)checkNeedSkipEnd;
- (void)onPlayerTimeObserverCalled:(CDStruct_1b6d18a9)arg1;
- (_Bool)deselectTrackInfoWithoutCallback:(long long)arg1 opaque:(long long)arg2;
- (_Bool)deselectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (_Bool)selectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (id)trackInfoArray;
- (void)changePlayerPlaybackState:(long long)arg1;
- (long long)getPreItemsTime:(long long)arg1;
- (void)setTimeObserverBlock:(CDUnknownBlockType)arg1;
- (void)resumeOutputFrame;
- (void)pauseOutputFrame;
- (void)stopOutputFrame;
- (void)startOutputFrame:(double)arg1;
- (long long)countSliceOrder:(long long)arg1;
- (id)snapshot;
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

