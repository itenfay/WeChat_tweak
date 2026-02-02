//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSContextPlugin_operateMusic
{
    NSString *_currentMusic;
}

- (void).cxx_destruct;
@property(retain) NSString *currentMusic; // @synthesize currentMusic=_currentMusic;
- (void)onRemoteControlMusicShouldPlayPrevTrack;
- (void)onRemoteControlMusicShouldPlayNextTrack;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onPlayMusic:(id)arg1 fromScene:(long long)arg2;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)setMusicMinimizationViewVisibleIfOccupied:(_Bool)arg1;
- (_Bool)curPlayerIsPlaying;
- (_Bool)monopolizeMusicPlayer;
- (id)getCurrentMusicId;
- (id)generateMusicId:(id)arg1;
- (double)getDuration;
- (void)seekPlay:(float)arg1;
- (void)stopMusic;
- (void)resumeMusic;
- (void)pauseMusic;
- (_Bool)isPlaying;
- (_Bool)isPaused;
- (void)playMusic:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

