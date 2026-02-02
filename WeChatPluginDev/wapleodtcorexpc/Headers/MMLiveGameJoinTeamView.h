//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGameTeamInfo, MMFinderLiveTaskId, MMLiveGameJoinTeamShowGiftView, MMLiveJoinGameAudiencePaymentView, MMUIButton, MMUILabel, MMUIView, MMWebImageView, NSString, RichTextView, UIButton, UIImageView, UIView;
@protocol MMLiveGameJoinTeamViewDelegate;

@interface MMLiveGameJoinTeamView
{
    _Bool _paidForNextRound;
    _Bool _isShow;
    _Bool _shouldReport;
    unsigned int _curJoinTeamMode;
    id <MMLiveGameJoinTeamViewDelegate> _operationDelegate;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMUIButton *_closeBtn;
    MMLiveGameJoinTeamShowGiftView *_showGiftBtn;
    MMUILabel *_titleLabel;
    MMUILabel *_rankDescLabel;
    MMUILabel *_teamupMemberDescLabel;
    MMUIButton *_teamupStartButton;
    RichTextView *_explainDescLabel;
    MMFinderLiveGameTeamInfo *_gameTeamInfo;
    UIButton *_anchorView;
    MMUIView *_topSepratorLine;
    MMUIView *_downSepratorLine;
    MMWebImageView *_rankIcon;
    NSString *_rankIconUrl;
    MMUILabel *_rankScoreDescLabel;
    MMUILabel *_otherDescLabel;
    UIImageView *_arrowImageView;
    MMLiveJoinGameAudiencePaymentView *_paymentView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldReport; // @synthesize shouldReport=_shouldReport;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) MMLiveJoinGameAudiencePaymentView *paymentView; // @synthesize paymentView=_paymentView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *otherDescLabel; // @synthesize otherDescLabel=_otherDescLabel;
@property(retain, nonatomic) MMUILabel *rankScoreDescLabel; // @synthesize rankScoreDescLabel=_rankScoreDescLabel;
@property(retain, nonatomic) NSString *rankIconUrl; // @synthesize rankIconUrl=_rankIconUrl;
@property(retain, nonatomic) MMWebImageView *rankIcon; // @synthesize rankIcon=_rankIcon;
@property(retain, nonatomic) MMUIView *downSepratorLine; // @synthesize downSepratorLine=_downSepratorLine;
@property(retain, nonatomic) MMUIView *topSepratorLine; // @synthesize topSepratorLine=_topSepratorLine;
@property(retain, nonatomic) UIButton *anchorView; // @synthesize anchorView=_anchorView;
@property(nonatomic) unsigned int curJoinTeamMode; // @synthesize curJoinTeamMode=_curJoinTeamMode;
@property(retain, nonatomic) MMFinderLiveGameTeamInfo *gameTeamInfo; // @synthesize gameTeamInfo=_gameTeamInfo;
@property(retain, nonatomic) RichTextView *explainDescLabel; // @synthesize explainDescLabel=_explainDescLabel;
@property(retain, nonatomic) MMUIButton *teamupStartButton; // @synthesize teamupStartButton=_teamupStartButton;
@property(retain, nonatomic) MMUILabel *teamupMemberDescLabel; // @synthesize teamupMemberDescLabel=_teamupMemberDescLabel;
@property(retain, nonatomic) MMUILabel *rankDescLabel; // @synthesize rankDescLabel=_rankDescLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMLiveGameJoinTeamShowGiftView *showGiftBtn; // @synthesize showGiftBtn=_showGiftBtn;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool paidForNextRound; // @synthesize paidForNextRound=_paidForNextRound;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveGameJoinTeamViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (id)audienceLogReporter;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLoadImageOK:(id)arg1;
- (_Bool)isFollowState;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)arg1 appMsgGameTeamInfo:(id)arg2;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)onMMLiveJoinGameAudiencePaymentViewClickCoinButton;
- (void)onMMLiveJoinGameAudiencePaymentViewClickPayButton;
- (void)tapArrow;
- (_Bool)checkJumpInfoValid;
- (void)onTeamUpPayButtonClicked;
- (void)onTeamUpBookNextButtonClick;
- (void)onTeamUpStartButtonClicked;
- (void)onClickShowGiftButton;
- (void)onClickShowGiftButtonDown;
- (void)onClickCloseButton;
- (id)secondaryPaymentView;
- (unsigned long long)getJoinTeamAction:(unsigned int)arg1;
- (unsigned long long)getJoinTeamExposureAction:(unsigned int)arg1;
- (id)getJoinGameTeamButtonText:(unsigned int)arg1 gameTeamInfo:(id)arg2;
- (void)handlePaymentTitle:(unsigned long long)arg1;
- (void)updateWithGameTeamInfo:(id)arg1;
- (id)liveTask;
- (void)fetchGameTeamInfo;
- (void)updatePanelInfo;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)pageSheetDidAppear;
- (void)showWithAnimated:(_Bool)arg1;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

