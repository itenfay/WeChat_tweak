//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, TingSafeWeakProxy, TingTPResourceLoader, WCAudioInfo;
@protocol ITPPlayer;

@interface TingTPPlayer
{
    _Bool _hasCallPrepared;
    _Bool _isPreload;
    _Bool _hasCallStoped;
    _Bool _hasCallStartPlayBeforePrepared;
    _Bool _isSeeking;
    id <ITPPlayer> _player;
    WCAudioInfo *_audioInfo;
    MMTimer *_progressCheckTimer;
    long long _lagTime;
    TingTPResourceLoader *_resourceLoader;
    double _lastRecordCurrentTime;
    long long _stuckTimerCheckTimes;
    TingSafeWeakProxy *_safeProxy;
}

+ (int)tpKernelStateToTingEvent:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TingSafeWeakProxy *safeProxy; // @synthesize safeProxy=_safeProxy;
@property(nonatomic) long long stuckTimerCheckTimes; // @synthesize stuckTimerCheckTimes=_stuckTimerCheckTimes;
@property(nonatomic) double lastRecordCurrentTime; // @synthesize lastRecordCurrentTime=_lastRecordCurrentTime;
@property(retain, nonatomic) TingTPResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(nonatomic) long long lagTime; // @synthesize lagTime=_lagTime;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) _Bool hasCallStartPlayBeforePrepared; // @synthesize hasCallStartPlayBeforePrepared=_hasCallStartPlayBeforePrepared;
@property(nonatomic) _Bool hasCallStoped; // @synthesize hasCallStoped=_hasCallStoped;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) _Bool hasCallPrepared; // @synthesize hasCallPrepared=_hasCallPrepared;
@property(retain, nonatomic) MMTimer *progressCheckTimer; // @synthesize progressCheckTimer=_progressCheckTimer;
@property(retain, nonatomic) WCAudioInfo *audioInfo; // @synthesize audioInfo=_audioInfo;
@property(retain, nonatomic) id <ITPPlayer> player; // @synthesize player=_player;
- (void)onResourceDownloadFinished;
- (void)onResourceDownloadFailWithCode:(int)arg1 expired:(_Bool)arg2;
- (_Bool)isBuffering;
- (long long)durationInSeconds;
- (void)onSeekComplete:(id)arg1;
- (void)onPlayer:(id)arg1 videoFrameOut:(id)arg2;
- (void)onPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (void)onStateChange:(id)arg1 preState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (void)onPlayer:(id)arg1 errorType:(long long)arg2 errorCode:(long long)arg3 arg1:(long long)arg4 arg2:(long long)arg5;
- (void)onCompletion:(id)arg1;
- (void)onPrepared:(id)arg1;
- (void)checkSetPlayRate;
- (void)setVolume:(float)arg1;
- (void)setPlayRate:(float)arg1;
- (double)bufferedTime;
- (double)displayTime;
- (double)currentTime;
- (double)duration;
- (_Bool)canSeek;
- (void)seekToTime:(double)arg1;
- (_Bool)shouldDeleteTargetFileWhenStop;
- (void)stop;
- (_Bool)checkForceStopedState;
- (void)safePlayStart;
- (void)resume;
- (void)pause;
- (void)play;
- (id)genVideoInfo:(id)arg1;
- (void)setupDataSource;
- (void)prepareToPlay;
- (void)reset;
- (id)view;
- (int)playerKernelType;
- (void)onProgressCheckTimerCallback;
- (void)stopProgressCheckTimer;
- (void)startProgressCheckTimer;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

