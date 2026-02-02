//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OMJMoviePlayer, UIView;

@interface MJTemplateMoviePlayer
{
    _Bool _isAudioEnabled;
    int _loopCount;
    NSString *_clipBundleID;
    unsigned long long _playStatus;
    OMJMoviePlayer *_maasMoviePlayer;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _lastStoppedTime;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_1b6d18a9 lastStoppedTime; // @synthesize lastStoppedTime=_lastStoppedTime;
@property(nonatomic) _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) OMJMoviePlayer *maasMoviePlayer; // @synthesize maasMoviePlayer=_maasMoviePlayer;
@property(readonly, nonatomic) unsigned long long playStatus; // @synthesize playStatus=_playStatus;
@property(readonly, copy, nonatomic) NSString *clipBundleID; // @synthesize clipBundleID=_clipBundleID;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillResignActive;
- (void)setupNotification;
- (void)moviePlayer:(id)arg1 playbackTimeDidChange:(CDStruct_1b6d18a9)arg2 mediaTimeRange:(CDStruct_e83c9415)arg3;
- (void)playbackDidFinishInMoviePlayer:(id)arg1;
- (CDStruct_1b6d18a9)currentPlaybackTime;
- (void)_didChangePlayStatusTo:(unsigned long long)arg1;
- (void)didShutDownPlayback;
- (void)_shutDownPlaybackWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)shutDownPlaybackWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didStopPlaying;
- (void)willStopPlaying;
- (void)_stopPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didStartPlaying;
- (void)_startPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startPlayingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setTimeRange:(CDStruct_e83c9415)arg1 startTime:(CDStruct_1b6d18a9)arg2 loopCount:(int)arg3 isAudioEnabled:(_Bool)arg4;
- (void)setTimeRange:(CDStruct_e83c9415)arg1 startTime:(CDStruct_1b6d18a9)arg2 loopCount:(int)arg3 isAudioEnabled:(_Bool)arg4;
- (void)_startPlaybackCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didStartPlayback;
- (void)startPlaybackCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startCreationWithClipBundleID:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startCreationWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cleanUpMaasPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_tearDownMaasPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cleanUpMaasSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_createMaasMoviePlayer;
- (_Bool)createMaasSession;
@property(readonly, nonatomic) UIView *maasRenderView;
- (id)initWithClipBundleID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

