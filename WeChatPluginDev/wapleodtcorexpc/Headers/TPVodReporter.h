//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, TPPlayerLogContext;

@interface TPVodReporter
{
    _Bool _playDone;
    _Bool _seeking;
    _Bool _buffering;
    _Bool _pausing;
    float _playSpeed;
    int _seekBufferingTotalCount;
    int _seekTotalCount;
    int _bufferingTotalCount;
    TPPlayerLogContext *_logCtx;
    long long _prepapreTimeSinceBootMs;
    long long _playerFirstStartTimeSinceBootMs;
    long long _pauseBeginTimeSinceBootMs;
    long long _pauseTotalDurationMs;
    NSMutableDictionary *_selectTrackInfos;
    long long _seekStartTimeSinceBootMs;
    long long _seekBufferingTotalDurationMs;
    long long _bufferingStartTimeSinceBootMs;
    long long _bufferingTotalDurationMs;
}

- (void).cxx_destruct;
@property(nonatomic) long long bufferingTotalDurationMs; // @synthesize bufferingTotalDurationMs=_bufferingTotalDurationMs;
@property(nonatomic) int bufferingTotalCount; // @synthesize bufferingTotalCount=_bufferingTotalCount;
@property(nonatomic) long long bufferingStartTimeSinceBootMs; // @synthesize bufferingStartTimeSinceBootMs=_bufferingStartTimeSinceBootMs;
@property(nonatomic) int seekTotalCount; // @synthesize seekTotalCount=_seekTotalCount;
@property(nonatomic) long long seekBufferingTotalDurationMs; // @synthesize seekBufferingTotalDurationMs=_seekBufferingTotalDurationMs;
@property(nonatomic) int seekBufferingTotalCount; // @synthesize seekBufferingTotalCount=_seekBufferingTotalCount;
@property(nonatomic) long long seekStartTimeSinceBootMs; // @synthesize seekStartTimeSinceBootMs=_seekStartTimeSinceBootMs;
@property(retain, nonatomic) NSMutableDictionary *selectTrackInfos; // @synthesize selectTrackInfos=_selectTrackInfos;
@property(nonatomic) float playSpeed; // @synthesize playSpeed=_playSpeed;
@property(nonatomic) long long pauseTotalDurationMs; // @synthesize pauseTotalDurationMs=_pauseTotalDurationMs;
@property(nonatomic) long long pauseBeginTimeSinceBootMs; // @synthesize pauseBeginTimeSinceBootMs=_pauseBeginTimeSinceBootMs;
@property(nonatomic) long long playerFirstStartTimeSinceBootMs; // @synthesize playerFirstStartTimeSinceBootMs=_playerFirstStartTimeSinceBootMs;
@property(nonatomic) long long prepapreTimeSinceBootMs; // @synthesize prepapreTimeSinceBootMs=_prepapreTimeSinceBootMs;
@property(retain, nonatomic) TPPlayerLogContext *logCtx; // @synthesize logCtx=_logCtx;
@property(nonatomic, getter=isPausing) _Bool pausing; // @synthesize pausing=_pausing;
@property(nonatomic, getter=isBuffering) _Bool buffering; // @synthesize buffering=_buffering;
@property(nonatomic, getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic, getter=isPlayDone) _Bool playDone; // @synthesize playDone=_playDone;
- (void)onAppBackGround:(id)arg1;
- (void)onAppForeGround:(id)arg1;
- (void)onDrmInfo:(id)arg1;
- (void)onSetPlaySpeed:(id)arg1;
- (void)onSelectTrackEnd:(id)arg1;
- (void)onSelectTrackStart:(id)arg1;
- (void)onBufferEnd:(id)arg1;
- (void)onBufferStart:(id)arg1;
- (void)onSeekEnd:(id)arg1;
- (void)onSeekStart:(id)arg1;
- (void)fillVodFlowEventParmas:(id)arg1 withDynamicStatisticParams:(id)arg2;
- (void)fillVodFlowEventParmas:(id)arg1 withGeneralPlayFlowParams:(id)arg2;
- (void)fillVodFlowEventParmasWithRunTimeParams:(id)arg1;
- (void)reportVodFlowEvent:(id)arg1;
- (void)fillVodEndEventParmas:(id)arg1 withGeneralPlayFlowParams:(id)arg2 withErrorCode:(long long)arg3;
- (id)getTPDynamicStatisticParams:(id)arg1;
- (id)getTPGeneralPlayFlowParams:(id)arg1;
- (void)reportVodEndEvent:(id)arg1;
- (void)handlePlayerEnd:(id)arg1;
- (void)onPlayerError:(id)arg1;
- (void)onPlayerEnd:(id)arg1;
- (void)onPlayerPause:(id)arg1;
- (void)onPlayerStart:(id)arg1;
- (void)onPrepareEnd:(id)arg1;
- (id)invocationWithMethod:(SEL)arg1;
- (id)eventHandlerTable;
- (void)onEvent:(unsigned long long)arg1 withEvent:(id)arg2;
- (id)init;

@end

