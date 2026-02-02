//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableDictionary, NSString;

@interface WCCanvasMusicMgr : NSObject
{
    _Bool _isCanvasPageVisible;
    _Bool _isActive;
    NSMutableDictionary *_musicPlayDic;
    MMTimer *_playMonitorTimer;
    NSString *_pausedMusicIdWhenNotVisible;
    unsigned long long _lastSeekTimestampMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastSeekTimestampMs; // @synthesize lastSeekTimestampMs=_lastSeekTimestampMs;
@property(retain, nonatomic) NSString *pausedMusicIdWhenNotVisible; // @synthesize pausedMusicIdWhenNotVisible=_pausedMusicIdWhenNotVisible;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) MMTimer *playMonitorTimer; // @synthesize playMonitorTimer=_playMonitorTimer;
@property(retain, nonatomic) NSMutableDictionary *musicPlayDic; // @synthesize musicPlayDic=_musicPlayDic;
@property(nonatomic) _Bool isCanvasPageVisible; // @synthesize isCanvasPageVisible=_isCanvasPageVisible;
- (void)onPlayMonitorTimerFired;
- (void)stopPlayMonitorTimer;
- (void)setupPlayMonitorTimer;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onMusicPlayStatusChanged;
- (void)seekPlayer:(double)arg1 playAuto:(_Bool)arg2;
- (void)resumePlayer;
- (void)pausePlayer;
- (void)stopPlayer;
- (void)startPlayer:(id)arg1;
- (_Bool)isPendingToPlayWhenVisible:(id)arg1;
- (_Bool)isPlayingState:(long long)arg1;
- (void)checkPlayerStartTime;
- (void)checkAndSetupPlayMonitorTimer;
- (void)checkAndUpdatePlayState;
- (void)notifyVoiceComponentHasPlayWithSound:(id)arg1;
- (void)notifyMusicPlayError:(id)arg1 errorInfo:(id)arg2;
- (void)notifyMusicPlayTimeChanged:(id)arg1 currentTime:(double)arg2 duration:(double)arg3;
- (void)notifyMusicPlayStatusChanged:(id)arg1 playState:(long long)arg2;
- (_Bool)isCurrentPlayer:(id)arg1;
- (_Bool)hasMusicPlayInfoForCurrentPlayer;
- (id)getMusicPlayInfoForCurrentPlayer;
- (long long)getCurrentPlayerPlayState;
- (id)getCurrentPlayerMusicId;
- (_Bool)hasMusicPlayInfo:(id)arg1;
- (id)getMusicPlayInfo:(id)arg1;
- (id)getAllMusicPlayInfo;
- (_Bool)isCanvasMusicPlaying;
- (_Bool)isPlaying:(id)arg1;
- (double)getCurrentTime:(id)arg1;
- (double)getDuration:(id)arg1;
- (long long)getPlayState:(id)arg1;
- (void)stopCurrentPlayer;
- (void)stopAllMusic;
- (void)seekMusic:(id)arg1 seekTime:(double)arg2;
- (void)stopMusic:(id)arg1;
- (void)pauseMusic:(id)arg1;
- (void)playOrResumeMusic:(id)arg1;
- (void)playMusic:(id)arg1;
- (void)removeMusic:(id)arg1;
- (void)setMusicComponentItem:(id)arg1 andMusicInfo:(id)arg2 andDefaultDuration:(double)arg3 forMusicId:(id)arg4;
- (void)tryToResumeWhenAppear;
- (void)tryToPauseWhenDisappear;
- (void)becomeActive;
- (void)resignActive;
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

