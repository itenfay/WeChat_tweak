//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVPlayerItem, NSString, WCPipSupportPlayer, WCPlayerLayerView;

@interface WCPipContentSourcePlayer_FakePlayer
{
    _Bool _isCreatingFakeAsset;
    WCPipSupportPlayer *_player;
    AVPlayerItem *_playerItem;
    WCPlayerLayerView *_displayLayerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerLayerView *displayLayerView; // @synthesize displayLayerView=_displayLayerView;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) WCPipSupportPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool isCreatingFakeAsset; // @synthesize isCreatingFakeAsset=_isCreatingFakeAsset;
- (double)getMainCurrentTime;
- (void)onPipPlayerRePlay;
- (void)handleBackGroundPlayerComplete;
- (void)handleBackGroundPlayerPaused;
- (void)handleBackGroundPlayerPlaying;
- (void)handleBackGroundPlayerOnPrepared;
- (void)onPipPlayerStateDidChange:(long long)arg1;
- (void)onRequireSyncToPipPlayerTime:(double)arg1;
- (void)setIsPipPlaying:(_Bool)arg1;
- (void)onStartDisplayOnPipWindow:(long long)arg1;
- (void)onPlayerDidPlayToEnd;
- (void)onPlayerEnterErrorState;
- (void)setLoopBack:(_Bool)arg1;
- (void)setRate:(double)arg1;
- (void)onBufferingComplete;
- (void)onStartBuffering;
- (void)seekTo:(double)arg1;
- (void)pause:(_Bool)arg1;
- (void)play;
- (void)tryClosePipWhenAppActive;
- (void)createPipContentRes;
- (void)createPipResouce;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)arg1;
- (void)occupyAudioModuleSucc:(_Bool)arg1;
- (void)unregisterPipResourcre;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 playArgs:(id)arg2 playbackInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

