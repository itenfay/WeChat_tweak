//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicInfo, MMMusicViewController, MMUIButton, MiniAudioTaskContentView, NSString, UIView;

@interface MMMusicMVMinimizationMgr
{
    MMMusicViewController *_nativePlayerViewController;
    _Bool _hasAlertWhenPlayFail;
    _Bool _isMVPlaying;
    _Bool _isMinimizeWindowShowing;
    _Bool _forbidAddMinimizeTaskWhenMusicStateChange;
    _Bool _startSuccesss;
    _Bool _hasFoldFloatingView;
    MMMusicInfo *_lastPlayMusic;
    UIView *_minimizeContainerView;
    MMUIButton *_minimizeCoverBgBtn;
    MMUIButton *_minimizeCloseBtn;
    MiniAudioTaskContentView *_contentView;
}

+ (id)genMinimizationMusicPlayerTaskKey;
+ (id)transitionController;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasFoldFloatingView; // @synthesize hasFoldFloatingView=_hasFoldFloatingView;
@property(retain, nonatomic) MiniAudioTaskContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIButton *minimizeCloseBtn; // @synthesize minimizeCloseBtn=_minimizeCloseBtn;
@property(retain, nonatomic) MMUIButton *minimizeCoverBgBtn; // @synthesize minimizeCoverBgBtn=_minimizeCoverBgBtn;
@property(retain, nonatomic) UIView *minimizeContainerView; // @synthesize minimizeContainerView=_minimizeContainerView;
@property(nonatomic) _Bool startSuccesss; // @synthesize startSuccesss=_startSuccesss;
@property(retain, nonatomic) MMMusicInfo *lastPlayMusic; // @synthesize lastPlayMusic=_lastPlayMusic;
@property(nonatomic) _Bool forbidAddMinimizeTaskWhenMusicStateChange; // @synthesize forbidAddMinimizeTaskWhenMusicStateChange=_forbidAddMinimizeTaskWhenMusicStateChange;
@property(nonatomic) _Bool isMinimizeWindowShowing; // @synthesize isMinimizeWindowShowing=_isMinimizeWindowShowing;
@property _Bool isMVPlaying; // @synthesize isMVPlaying=_isMVPlaying;
- (_Bool)isMinimizeTaskPlaying:(id)arg1;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(_Bool)arg2;
- (void)onMinimizeTransitionBegin:(unsigned int)arg1;
- (_Bool)shouldBeginMinimizeCircleInteraction;
- (id)getMinimizationTransitionContext;
- (_Bool)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(_Bool)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMVPostDataServicePostMVSuccess:(id)arg1 svrDataItem:(id)arg2 localId:(id)arg3 relatedDraftId:(id)arg4;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)onEnterRecentUsedTask:(id)arg1;
- (id)decodeMusicInfoWithTaskData:(id)arg1;
- (id)encodeMusicInfo:(id)arg1;
- (id)dataFromMusicInfo:(id)arg1;
- (void)updateMinimizeContainerViewStickyOrientation:(_Bool)arg1;
- (void)onAbsorbFloatingViewEndResultMoveTo:(struct CGPoint)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)tryRemoveMvMusicMinimizeTask;
- (void)addMusicPlayerToMinimizationList:(id)arg1 scene:(unsigned long long)arg2;
- (void)addMinimizeTaskWhenEdgePopEnd;
- (_Bool)removeMinimizeTaskByCloseButton:(_Bool)arg1;
- (_Bool)removeMinimizeTask;
- (id)getCurMusicMinimizeTask;
- (_Bool)isMusicPlayerAddedToMinimizationList;
- (void)onMusicInfoUpdated;
- (void)delayHiddenMusicMinimizationViewIfPlayerIdle:(id)arg1;
- (void)prepareForMusicPlay:(id)arg1;
- (_Bool)hasOtherOuterContainerMinimizeTask;
- (void)tryAddMusicInfoToMinimizeTask:(id)arg1 scene:(unsigned long long)arg2;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)updatePlayModeWithMusicInfo:(id)arg1 minimizeWindowShowing:(_Bool)arg2;
- (void)updatePlayModeWithCurrentMusicInfoWithMinimizeWindowShowing:(_Bool)arg1;
- (void)minimizeWindowWillHide:(_Bool)arg1;
- (void)minimizeWindowWillShow:(_Bool)arg1;
- (_Bool)shouldBlockMinimizeWindowDisplayForTask:(id)arg1;
- (_Bool)isInBlackList:(id)arg1;
- (id)createUsedTaskDataWithMusicInfo:(id)arg1;
- (void)addMusicToPullDownHistory;
- (void)onMinimizeMusicCloseClicked;
- (void)onMinimizeMusicContainerClicked;
- (void)installMinimizeContainerView;
- (void)updateCurMusicViewController:(id)arg1;
- (void)updateCurThumbViewWithMusicInfo:(id)arg1;
- (void)updateMinimizeContainerViewWithThumbImage:(id)arg1;
- (void)updateCurThumbImage:(id)arg1 musicId:(id)arg2;
- (id)getCurPlayerViewController;
- (void)commonInit;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

