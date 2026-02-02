//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVPlayer, NSString;
@protocol IWAAudioPlayerDelegate;

@interface WAAudioPlayer
{
    long long _state;
    _Bool _autoLoop;
    _Bool _autoPlay;
    _Bool _isSeeking;
    _Bool _readyToPlay;
    id <IWAAudioPlayerDelegate> _delegate;
    AVPlayer *_player;
    NSString *_appId;
    NSString *_audioId;
    NSString *_src;
    double _startTime;
    double _startPostion;
    double _bufferTime;
    double _playbackRate;
}

- (void).cxx_destruct;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) _Bool readyToPlay; // @synthesize readyToPlay=_readyToPlay;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool autoLoop; // @synthesize autoLoop=_autoLoop;
@property(nonatomic) double bufferTime; // @synthesize bufferTime=_bufferTime;
@property(nonatomic) double startPostion; // @synthesize startPostion=_startPostion;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IWAAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPlayerItemFailedToPlayToEndTime:(id)arg1;
- (void)onPlayerDidFinishPlaying;
- (void)tryToSeekAfterReadyToPlay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setState:(long long)arg1;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) double volume;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double curTime;
- (_Bool)isIdle;
- (_Bool)isWaiting;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isSet;
- (void)seekTo:(double)arg1;
- (void)stop;
- (void)forcePause;
- (void)pause;
- (void)realPlay;
- (void)play;
- (void)setPlayerWithSrc:(id)arg1 url:(id)arg2 startTime:(double)arg3 autoPlay:(_Bool)arg4 loop:(_Bool)arg5 obeyMuteSwitch:(_Bool)arg6 volume:(double)arg7 fileData:(id)arg8 playbackRate:(double)arg9 referrer:(id)arg10;
- (id)initWithAudioId:(id)arg1 appId:(id)arg2 delegate:(id)arg3;
- (void)removeObserver;
- (void)addObserver;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

