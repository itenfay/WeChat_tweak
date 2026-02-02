//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveAppMsgGameInvitationInfo, MMFinderLiveGameTeamInfo, MMFinderLiveTaskId, MMUIButton, MMUILabel, NSString, UIView, WCFinderGameLiveJumpGameGuideTipsViewController;

@interface MMLiveGameInviteJoinTeamView
{
    unsigned int _curJoinTeamMode;
    MMFinderLiveTaskId *_taskId;
    FinderLiveAppMsgGameInvitationInfo *_invitationInfo;
    CDUnknownBlockType _showGoToGameAlertEventAction;
    CDUnknownBlockType _joinTeamAction;
    CDUnknownBlockType _rejectJoinTeamAction;
    UIView *_contentView;
    MMUIButton *_closeBtn;
    MMUILabel *_titleLabel;
    MMUILabel *_rankDescLabel;
    MMUILabel *_teamupMemberDescLabel;
    MMUIButton *_joinTeamButton;
    MMUILabel *_explainDescLabel;
    MMFinderLiveGameTeamInfo *_gameTeamInfo;
    WCFinderGameLiveJumpGameGuideTipsViewController *_tipsVC;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int curJoinTeamMode; // @synthesize curJoinTeamMode=_curJoinTeamMode;
@property(retain, nonatomic) WCFinderGameLiveJumpGameGuideTipsViewController *tipsVC; // @synthesize tipsVC=_tipsVC;
@property(retain, nonatomic) MMFinderLiveGameTeamInfo *gameTeamInfo; // @synthesize gameTeamInfo=_gameTeamInfo;
@property(retain, nonatomic) MMUILabel *explainDescLabel; // @synthesize explainDescLabel=_explainDescLabel;
@property(retain, nonatomic) MMUIButton *joinTeamButton; // @synthesize joinTeamButton=_joinTeamButton;
@property(retain, nonatomic) MMUILabel *teamupMemberDescLabel; // @synthesize teamupMemberDescLabel=_teamupMemberDescLabel;
@property(retain, nonatomic) MMUILabel *rankDescLabel; // @synthesize rankDescLabel=_rankDescLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType rejectJoinTeamAction; // @synthesize rejectJoinTeamAction=_rejectJoinTeamAction;
@property(copy, nonatomic) CDUnknownBlockType joinTeamAction; // @synthesize joinTeamAction=_joinTeamAction;
@property(copy, nonatomic) CDUnknownBlockType showGoToGameAlertEventAction; // @synthesize showGoToGameAlertEventAction=_showGoToGameAlertEventAction;
@property(retain, nonatomic) FinderLiveAppMsgGameInvitationInfo *invitationInfo; // @synthesize invitationInfo=_invitationInfo;
@property(readonly, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)audienceLogReporter;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)arg1 appMsgGameTeamInfo:(id)arg2;
- (void)onJoinTeamButtonClicked;
- (id)liveTask;
- (void)fetchGameTeamInfo;
- (void)showWithAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 invitationInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

