//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface WAJSContextPlugin_operateTing
{
    NSString *_curClientId;
    NSMutableSet *_setMusicWhiteListAppid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *setMusicWhiteListAppid; // @synthesize setMusicWhiteListAppid=_setMusicWhiteListAppid;
@property(retain, nonatomic) NSString *curClientId; // @synthesize curClientId=_curClientId;
- (void)initConfigedMusicAppId;
- (void)onTingRecievePreTrackControl;
- (void)onTingRecieveNextTrackControl;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3 onEvent:(int)arg4 withContext:(id)arg5 withEventContext:(id)arg6 error:(id)arg7;
- (void)flowPlayer:(id)arg1 onPlayingContextUpdated:(id)arg2;
- (id)generateMusicId:(id)arg1 appTask:(id)arg2;
- (void)setMusicMinimizationViewVisibleIfOccupied:(_Bool)arg1;
- (_Bool)monopolizeMusicPlayer;
- (id)getCurrentMusicId;
- (double)getDuration;
- (void)seekPlay:(float)arg1;
- (void)resumeMusic;
- (void)stopMusic;
- (void)pauseMusic;
- (_Bool)isPause;
- (_Bool)isPlaying;
- (void)operateMusic:(id)arg1 param:(id)arg2;
- (id)currentPlayingPlayerState;
- (id)currentPlayingInfo;
- (_Bool)isWeAppAudioPlayingWithClientId:(id)arg1;
- (_Bool)isWeAppAudioPlaying;
- (_Bool)curPlayerIsPlaying;
- (_Bool)curPlayerTaskActive;
- (_Bool)canAccessCurPlayer;
- (void)playMusic:(id)arg1 referrer:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

