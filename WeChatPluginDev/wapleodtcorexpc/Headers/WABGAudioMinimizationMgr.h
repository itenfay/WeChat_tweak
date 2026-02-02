//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MinimizeTaskData, NSMutableDictionary, NSString;

@interface WABGAudioMinimizationMgr
{
    NSString *_showingId;
    NSString *_interruptedId;
    NSMutableDictionary *_infoMap;
    NSString *_minimizationCoverId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *minimizationCoverId; // @synthesize minimizationCoverId=_minimizationCoverId;
@property(retain, nonatomic) NSMutableDictionary *infoMap; // @synthesize infoMap=_infoMap;
@property(retain, nonatomic) NSString *interruptedId; // @synthesize interruptedId=_interruptedId;
@property(retain, nonatomic) NSString *showingId; // @synthesize showingId=_showingId;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(id)arg1 isToPlay:(_Bool)arg2;
- (void)onMiniAudioContentViewOuterContentClicked:(id)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked:(id)arg1;
- (void)onPlayerSourcePlay:(id)arg1;
- (void)onPlayerSourceError:(id)arg1;
- (void)onPlayerSourceWaiting:(id)arg1;
@property(readonly, nonatomic) NSString *taskBizKey;
@property(readonly, nonatomic) NSString *taskBizName;
@property(readonly, nonatomic) MinimizeTaskData *taskData;
@property(readonly, nonatomic) _Bool isShow;
- (void)onRemoveMinimizedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (_Bool)pauseBGAudioAndDismissMinimizationView;
- (void)pauseBGAudio:(id)arg1;
- (void)resumeBGAudio:(id)arg1;
- (_Bool)ui_dismissMinimizationView;
- (_Bool)ui_updateMinimizationView:(id)arg1;
- (_Bool)ui_showMinimizationView:(id)arg1;
- (_Bool)isVoipWorking;
- (_Bool)isPlaying;
- (_Bool)isInterrupted;
- (void)bgAudioInterrupted:(_Bool)arg1;
- (void)stopBGAudio;
- (id)currentBGAudioInfo;
- (_Bool)dismiss:(id)arg1;
- (_Bool)show:(id)arg1;
- (_Bool)updateState:(long long)arg1 forHost:(id)arg2;
- (void)prepareForMinimizationCoverStyle:(id)arg1;
- (void)clearBGAudioInfoForHost:(id)arg1;
- (id)bgAudioInfo:(id)arg1;
- (void)updateBGAudioInfo:(id)arg1 forHost:(id)arg2;
- (_Bool)isBGAudioEnabled;
- (void)onHiddenRecordOperateView;
- (void)onShowRecordOperateView;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onBeginMultiTalk;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onVoipMinimized;
- (void)onVoipMaximized;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;
- (void)onWCAudioSessionSetActive:(_Bool)arg1;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onRemoteControlMusicShouldStop;
- (void)onRemoteControlMusicShouldPlay;
- (void)notifyMusicPlayerRestartMusic;
- (void)notifyMusicPlayerPauseMusic;
- (void)OnEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)OnBeginPlaying:(id)arg1 success:(_Bool)arg2;
- (void)onVideoPlayerError:(id)arg1;
- (void)onVideoPlayerWaiting:(id)arg1;
- (void)onVideoPlayerPlay:(id)arg1;
- (void)onPlayerPausePlay:(id)arg1;
- (void)onPlayerStartPlay:(id)arg1;
- (void)onLivePlayerError:(id)arg1;
- (void)onLivePlayerWaiting:(id)arg1;
- (void)onLivePlayerStopPlay:(id)arg1;
- (void)onLivePlayerStartPlay:(id)arg1;
- (void)onLivePusherStopPlay:(id)arg1;
- (void)onLivePusherStartPlay:(id)arg1;
- (void)resumeMusicPlay;
- (void)pauseMusic;
- (void)OnEndRecord;
- (void)OnStartRecord;
- (void)monitor_unregisterExtension;
- (void)monitor_registerExtension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

