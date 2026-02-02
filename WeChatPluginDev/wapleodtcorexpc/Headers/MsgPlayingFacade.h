//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AutoplayController, CBaseContact, CMessageWrap, MinimizeNewTransitionController, MsgPlayingMinimizeController, NSString, PlayingController;

@interface MsgPlayingFacade
{
    PlayingController *m_playingController;
    AutoplayController *m_autoplayController;
    MsgPlayingMinimizeController *m_minimizeController;
    MinimizeNewTransitionController *_transitionController;
    CBaseContact *_contact;
    CMessageWrap *_currentInterruptMsg;
}

+ (_Bool)newFeatureOn;
+ (void)tryReportEnterSession:(id)arg1 info:(struct MsgPlayingReportInfo)arg2;
+ (void)reportMsg:(id)arg1 info:(struct MsgPlayingReportInfo)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *currentInterruptMsg; // @synthesize currentInterruptMsg=_currentInterruptMsg;
@property(retain, nonatomic) CBaseContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) MinimizeNewTransitionController *transitionController; // @synthesize transitionController=_transitionController;
- (void)onDidDeleteAllSession;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(_Bool)arg2;
- (id)getMinimizationTransitionContext;
- (_Bool)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onCloseMinimizeView;
- (void)onClickMinimizeView;
- (void)onAutoPlayEndWithMsg:(id)arg1;
- (_Bool)shouldStopAutoPlayUnRead;
- (void)autoPlayMsg:(id)arg1;
- (id)GetFirstUnreadMsg;
- (id)GetDownMsgFromID:(unsigned int)arg1 Limit:(int)arg2 LeftCount:(unsigned int *)arg3;
- (void)OnEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)OnBeginPlaying:(id)arg1 success:(_Bool)arg2;
- (void)setMsgPlayed:(id)arg1;
- (void)clearPlayList;
- (void)initMinimizeViewTransitionController;
- (void)showMinimizeViewIfNeed:(_Bool)arg1;
- (void)showMinimizeViewIfNeed;
- (_Bool)canShowMinimizeView:(_Bool)arg1;
- (void)hideMinimizeViewIfNeed;
- (void)StartPlayMessage:(id)arg1 Resume:(_Bool)arg2;
- (void)StartPlayMessage:(id)arg1;
- (id)currentPlayingMsg;
- (_Bool)isPlaying;
- (_Bool)isMsgPlaying:(id)arg1;
- (void)stopPlayingMsg:(struct MsgStopPlayArgs)arg1;
- (void)startPlayingMsg:(id)arg1 playArgs:(struct MsgStartPlayArgs)arg2;
- (void)showMinimizeViewForTouchCorner;
- (void)onLeaveSession:(id)arg1 touchCorner:(_Bool)arg2;
- (void)onSessionDisappear:(id)arg1;
- (void)onSessionAppear:(id)arg1;
- (void)onEnterSession:(id)arg1;
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

