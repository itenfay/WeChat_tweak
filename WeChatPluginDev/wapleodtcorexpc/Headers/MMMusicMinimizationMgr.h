//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMultipleMusicViewController, MMMusicInfo, NSString;

@interface MMMusicMinimizationMgr
{
    MMMultipleMusicViewController *_nativePlayerViewController;
    _Bool _autoCloseAtFinish;
    _Bool _startSuccesss;
    MMMusicInfo *_lastPlayMusic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool startSuccesss; // @synthesize startSuccesss=_startSuccesss;
@property(retain, nonatomic) MMMusicInfo *lastPlayMusic; // @synthesize lastPlayMusic=_lastPlayMusic;
@property(nonatomic) _Bool autoCloseAtFinish; // @synthesize autoCloseAtFinish=_autoCloseAtFinish;
- (void)onEnterRecentUsedTask:(id)arg1;
- (id)decodeMusicInfo:(id)arg1;
- (id)encodeMusicInfo:(id)arg1;
- (id)genMinimizationMusicPlayerTaskKey;
- (id)dataFromMusicInfo:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)transitionController;
- (void)startMinimizeMusicPlayer;
- (_Bool)updateMinimizationStateWithMusicInfo:(id)arg1 isPositive:(_Bool)arg2;
- (void)removeMusicPlayerFromMinimizationList;
- (void)addMusicPlayerToMinimizationList:(id)arg1;
- (_Bool)removeMinimizeTask;
- (_Bool)changeMusicPlayerPositiveState:(_Bool)arg1 isFromMenu:(_Bool)arg2;
- (id)getCurMusicMinimizeTask;
- (_Bool)isMusicPlayerAddedToMinimizationList;
- (void)addToMinimizeTask:(id)arg1 positive:(_Bool)arg2 isFromMenu:(_Bool)arg3;
- (void)closeViewController:(id)arg1;
- (void)delayHiddenMusicMinimizationViewIfPlayerIdle:(id)arg1;
- (_Bool)checkCanAddToPositiveMinimization;
- (void)updateMusicPlayMinimizationView:(_Bool)arg1;
- (void)onMusicInfoUpdated;
- (void)prepareForMusicPlay:(id)arg1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (id)getCurPlayerViewController;
- (void)commonUninit;
- (void)commonInit;
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

