//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MVStat22259, NSString;

@interface MVStatService
{
    _Bool _needRefreshSameSongSessionidAfterMusicStop;
    NSString *_sessionId;
    NSString *_playSameSongSessionId;
    NSString *_editSessionId;
    MVStat22259 *_editInfo;
    double _lastTotalDuration;
    double _lastStartTimestamp;
    NSString *_musicId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needRefreshSameSongSessionidAfterMusicStop; // @synthesize needRefreshSameSongSessionidAfterMusicStop=_needRefreshSameSongSessionidAfterMusicStop;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) double lastStartTimestamp; // @synthesize lastStartTimestamp=_lastStartTimestamp;
@property(nonatomic) double lastTotalDuration; // @synthesize lastTotalDuration=_lastTotalDuration;
@property(retain, nonatomic) MVStat22259 *editInfo; // @synthesize editInfo=_editInfo;
@property(copy, nonatomic) NSString *editSessionId; // @synthesize editSessionId=_editSessionId;
@property(copy, nonatomic) NSString *playSameSongSessionId; // @synthesize playSameSongSessionId=_playSameSongSessionId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (unsigned int)p_totalMusicPlayDuration;
- (unsigned int)totalMusicPlayDurationWhenExitWithMusicid:(id)arg1;
- (unsigned int)totalMusicPlayDurationWhenEnterWithMusicid:(id)arg1;
- (void)onMusicStop;
- (void)onMusicPause;
- (void)onMusicPlayWithMusicid:(id)arg1;
- (void)beginEditWithMusicInfo:(id)arg1 songId:(id)arg2 partNum:(int)arg3 createType:(unsigned long long)arg4;
- (void)exitPlayer;
- (void)enterPlayer;
- (void)refreshSessionIdWithMusicId:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

