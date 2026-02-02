//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavAudioInfo, MMTimer, NSDate, NSString;
@protocol AudioPlayerProtocol;

@interface FavAudioPlayer
{
    FavAudioInfo *m_curAudioInfo;
    FavAudioInfo *m_lastAudioInfo;
    unsigned int m_uiAudioOffset;
    int m_playStat;
    MMTimer *m_playTimer;
    NSDate *m_lastStartTime;
    unsigned int m_uiLastPlayedTime;
    id <AudioPlayerProtocol> _audioPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <AudioPlayerProtocol> audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) FavAudioInfo *m_lastAudioInfo; // @synthesize m_lastAudioInfo;
@property(retain, nonatomic) FavAudioInfo *m_curAudioInfo; // @synthesize m_curAudioInfo;
@property(retain, nonatomic) NSDate *m_lastStartTime; // @synthesize m_lastStartTime;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onAudioPlaying;
- (void)startTimer;
- (void)stopTimer;
- (void)onPlayError;
- (void)onEndPlaying;
- (void)onBeginPlaying;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)audioPlayerBeginPlaying:(id)arg1 success:(_Bool)arg2;
- (double)getAudioOffset;
- (id)getCurAudioInfo;
- (int)getPlayStat;
- (_Bool)isPlaying;
- (_Bool)ReStartPlay;
- (_Bool)PausePlay;
- (_Bool)StopPlay;
- (void)setProgress:(unsigned int)arg1;
- (void)StartPlayFromOffsetms:(unsigned int)arg1;
- (void)SetAndPlayFavAudio:(id)arg1 startFromOffsetms:(unsigned int)arg2;
- (void)SetAndPlayFavAudio:(id)arg1;
- (id)generatePlayerWithFormat:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

