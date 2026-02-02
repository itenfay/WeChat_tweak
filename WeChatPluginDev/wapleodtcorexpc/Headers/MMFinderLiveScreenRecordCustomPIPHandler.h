//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderJumpInfo, MMGameLiveAccessoryTipView, MMLiteAppViewController, MMUIView, NSString;

@interface MMFinderLiveScreenRecordCustomPIPHandler
{
    _Bool _isGameLiveAccessoryLiteAppCardVCInitating;
    _Bool _isAudioSessionInterrupted;
    _Bool _isAppResignActive;
    MMUIView *_gameLiveAccessoryContainerView;
    FinderJumpInfo *_gameLiveAccessoryViewJumpInfo;
    MMLiteAppViewController *_gameLiveAccessoryLiteAppCardVC;
    unsigned long long _gameLiveAccessoryRenderStyle;
    MMGameLiveAccessoryTipView *_gameLiveAccessoryTipView;
    struct CGSize _pipRenderSize;
}

+ (_Bool)isPIPRenderSizeValid:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMGameLiveAccessoryTipView *gameLiveAccessoryTipView; // @synthesize gameLiveAccessoryTipView=_gameLiveAccessoryTipView;
@property(nonatomic) unsigned long long gameLiveAccessoryRenderStyle; // @synthesize gameLiveAccessoryRenderStyle=_gameLiveAccessoryRenderStyle;
@property(nonatomic) _Bool isAppResignActive; // @synthesize isAppResignActive=_isAppResignActive;
@property(nonatomic) _Bool isAudioSessionInterrupted; // @synthesize isAudioSessionInterrupted=_isAudioSessionInterrupted;
@property(nonatomic) _Bool isGameLiveAccessoryLiteAppCardVCInitating; // @synthesize isGameLiveAccessoryLiteAppCardVCInitating=_isGameLiveAccessoryLiteAppCardVCInitating;
@property(retain, nonatomic) MMLiteAppViewController *gameLiveAccessoryLiteAppCardVC; // @synthesize gameLiveAccessoryLiteAppCardVC=_gameLiveAccessoryLiteAppCardVC;
@property(retain, nonatomic) FinderJumpInfo *gameLiveAccessoryViewJumpInfo; // @synthesize gameLiveAccessoryViewJumpInfo=_gameLiveAccessoryViewJumpInfo;
@property(retain, nonatomic) MMUIView *gameLiveAccessoryContainerView; // @synthesize gameLiveAccessoryContainerView=_gameLiveAccessoryContainerView;
@property(nonatomic) struct CGSize pipRenderSize; // @synthesize pipRenderSize=_pipRenderSize;
- (void)openGameLiveAccessoryView:(CDUnknownBlockType)arg1;
- (void)onPIPStartChange:(_Bool)arg1;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)sendRecordEvent;
- (void)didChangeScreenCapture:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)onLiveAlertEnd:(id)arg1;
- (void)onLivePausedByVerifyEnd:(id)arg1;
- (void)onLivePausedByVerifyBegin:(id)arg1;
- (void)onLiveTask:(id)arg1 sysCallInterrupted:(_Bool)arg2;
- (void)onGameRecordLiveActiveAudioSession:(id)arg1 src:(unsigned long long)arg2;
- (void)onGetFinderLiveAlertInfoWithTaskId:(id)arg1 alertInfo:(id)arg2;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)notifyAudioSessionInterruptedToLiteApp;
- (id)generateFinalQueryWithJumpInfo:(id)arg1;
- (_Bool)configPIPRenderSize:(struct CGSize)arg1;
- (void)debug_configPIPRenderSizeIfNeed;
- (void)destroyGameLiveAccessoryViews;
- (void)createGameLiveAccessoryLiteAppCard:(CDUnknownBlockType)arg1;
- (void)openGameLiveAccessoryViewWithJumpInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)refreshGameLiveAccessoryView:(id)arg1;
- (void)listenLiteAppEvent:(CDUnknownBlockType)arg1;
- (void)notifyChangeGameLiveAccessoryRenderStyleIfNeed;
- (void)createGameLiveAccessoryTipView;
- (void)updateGameLiveAccessoryRenderStyle:(unsigned long long)arg1;
- (unsigned long long)getCurrAppropriateRenderStyle;
- (void)updateIsAppResignActive:(_Bool)arg1;
- (_Bool)updateAudioSessionInterrupted:(_Bool)arg1;
- (void)tryToManualStartPictureInPicture;
- (void)registerExtensions;
- (id)getPIPStartParam;
- (void)onPictureInPictureStart;
- (id)getPIPHandleLogic;
- (void)initDefaultData;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

