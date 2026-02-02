//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, LiveInfo, MMAudienceLiveLikePlayUtil, MMGroupLiveTask, MMHeadImageView, MMLiveAchorTopStateBar, MMLiveConnectMicDescriptionButton, MMLiveConnectMicOperationPanel, MMLiveConnectMicVideoPreviewPanel, MMLiveLikeAnimationUtil, MMLiveLikeButton, MMLiveLikeDataMgr, MMLiveLikePlayUtil, MMLiveOnlineStateBar, MMUILabel, NSString, UIView, WCLiveBlurButton, WCLiveBottomTextButton;

@interface MMGroupLiveOperationView
{
    _Bool _isInLive;
    _Bool _hideOperation;
    _Bool _isShakeForLike;
    _Bool _isContentShow;
    MMUILabel *_liveTitleLabel;
    MMUILabel *_anchorNameLabel;
    MMHeadImageView *_anchorHeadImageView;
    MMLiveAchorTopStateBar *_topStateBar;
    MMLiveOnlineStateBar *_onlineStateBar;
    unsigned long long _onlineUserCount;
    WCLiveBottomTextButton *_shareScreenButton;
    WCLiveBottomTextButton *_switchCameraButton;
    WCLiveBottomTextButton *_shareLiveButton;
    WCLiveBlurButton *_actionButton;
    WCLiveBlurButton *_closeButton;
    MMLiveLikeButton *_likeButton;
    UIView *_likeAnimationWrapper;
    MMLiveConnectMicDescriptionButton *_connectMicDescriptionButton;
    MMLiveConnectMicOperationPanel *_connectMicOperationPanel;
    MMLiveConnectMicVideoPreviewPanel *_connectMicVideoPreviewPanel;
    MMLiveLikeAnimationUtil *_audienceSelflikeAnimationUtil;
    MMLiveLikeAnimationUtil *_audienceOtherLikeAnimationUtil;
    MMLiveLikeAnimationUtil *_anchorlikeAnimationUtil;
    MMLiveLikePlayUtil *_anchorLikePlayUtil;
    MMAudienceLiveLikePlayUtil *_audienceLikePlayUtil;
    unsigned long long _maxLikeCountOnce;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isContentShow; // @synthesize isContentShow=_isContentShow;
@property(nonatomic) unsigned long long maxLikeCountOnce; // @synthesize maxLikeCountOnce=_maxLikeCountOnce;
@property(nonatomic) _Bool isShakeForLike; // @synthesize isShakeForLike=_isShakeForLike;
@property(retain, nonatomic) MMAudienceLiveLikePlayUtil *audienceLikePlayUtil; // @synthesize audienceLikePlayUtil=_audienceLikePlayUtil;
@property(retain, nonatomic) MMLiveLikePlayUtil *anchorLikePlayUtil; // @synthesize anchorLikePlayUtil=_anchorLikePlayUtil;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *anchorlikeAnimationUtil; // @synthesize anchorlikeAnimationUtil=_anchorlikeAnimationUtil;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *audienceOtherLikeAnimationUtil; // @synthesize audienceOtherLikeAnimationUtil=_audienceOtherLikeAnimationUtil;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *audienceSelflikeAnimationUtil; // @synthesize audienceSelflikeAnimationUtil=_audienceSelflikeAnimationUtil;
@property(retain, nonatomic) MMLiveConnectMicVideoPreviewPanel *connectMicVideoPreviewPanel; // @synthesize connectMicVideoPreviewPanel=_connectMicVideoPreviewPanel;
@property(retain, nonatomic) MMLiveConnectMicOperationPanel *connectMicOperationPanel; // @synthesize connectMicOperationPanel=_connectMicOperationPanel;
@property(retain, nonatomic) MMLiveConnectMicDescriptionButton *connectMicDescriptionButton; // @synthesize connectMicDescriptionButton=_connectMicDescriptionButton;
@property(retain, nonatomic) UIView *likeAnimationWrapper; // @synthesize likeAnimationWrapper=_likeAnimationWrapper;
@property(retain, nonatomic) MMLiveLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) WCLiveBlurButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) WCLiveBlurButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) WCLiveBottomTextButton *shareLiveButton; // @synthesize shareLiveButton=_shareLiveButton;
@property(retain, nonatomic) WCLiveBottomTextButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(retain, nonatomic) WCLiveBottomTextButton *shareScreenButton; // @synthesize shareScreenButton=_shareScreenButton;
@property(nonatomic) _Bool hideOperation; // @synthesize hideOperation=_hideOperation;
@property(nonatomic) unsigned long long onlineUserCount; // @synthesize onlineUserCount=_onlineUserCount;
@property(nonatomic) _Bool isInLive; // @synthesize isInLive=_isInLive;
@property(retain, nonatomic) MMLiveOnlineStateBar *onlineStateBar; // @synthesize onlineStateBar=_onlineStateBar;
@property(retain, nonatomic) MMLiveAchorTopStateBar *topStateBar; // @synthesize topStateBar=_topStateBar;
@property(retain, nonatomic) MMHeadImageView *anchorHeadImageView; // @synthesize anchorHeadImageView=_anchorHeadImageView;
@property(retain, nonatomic) MMUILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) MMUILabel *liveTitleLabel; // @synthesize liveTitleLabel=_liveTitleLabel;
- (void)onAnchorHeadImageClicked:(id)arg1;
- (void)onConnectMicButtonClicked;
- (void)createConnectMicDescriptionButton;
- (void)createActionButton;
- (void)createCloseButton;
@property(readonly, nonatomic) NSString *defaultLiveName;
@property(readonly, nonatomic) LiveInfo *groupLiveInfo;
@property(readonly, nonatomic) NSString *anchorUserName;
@property(readonly, nonatomic) CContact *anchorContact;
@property(readonly, nonatomic) NSString *anchorHeadImgUrl;
@property(readonly, nonatomic) NSString *anchorDisplayName;
@property(readonly, nonatomic) MMLiveLikeDataMgr *likeMgr;
- (void)updateAnchorInfo;
- (void)updateCommentEnableForLiveInfoUpdate;
- (void)updateLikeCountForLiveInfoUpdate;
- (void)layoutOnlineStateView;
- (void)layoutCommentView;
@property(readonly, nonatomic) MMGroupLiveTask *liveTask;
- (void)onMMLiveInviteFriendsBtnClicked;
- (void)onMMLiveOnlineUserSelected:(id)arg1 userInfo:(id)arg2;
- (void)onMMLiveUpdateOnlineUserCount:(unsigned long long)arg1;
- (unsigned long long)getLikeCount;
- (double)getTopWidgetsBottom;
- (void)checkAndShowAllContents;
- (void)clearOrRecoverScreen;
- (void)onBackViewDidTaped;
- (void)updateButtonHiddenForInputViewShowChange:(_Bool)arg1;
- (double)getVisibleHeight;
- (_Bool)connectMicButtonShowRedDot;
- (void)setConnectMicButtonShowRedDot:(_Bool)arg1;
- (unsigned long long)connectMicButtonState;
- (void)setConnectMicButtonState:(unsigned long long)arg1;
- (void)onDisplayLikeCountUpdate:(unsigned long long)arg1 withTaskId:(id)arg2 forRole:(long long)arg3;
- (void)layoutConnectedMicAudienceView;
@property(readonly, nonatomic) _Bool isAudiencePlayOtherLike;
- (id)createCircleButtonWithDescriptionLable:(id)arg1 withIconSize:(struct CGSize)arg2 atPositon:(struct CGPoint)arg3 withButtonAction:(SEL)arg4 withButtonLabel:(id)arg5;
- (id)getConnectMicVideoPreviewPanel;
- (id)getConnectMicOperationPanel;
- (void)updateLikeCountDisplayForAudience;
- (void)updateOnlineUserCnt:(unsigned long long)arg1;
- (void)hideTopAnchorInfo;
- (void)showTopAnchorInfo;
- (void)hideControlButtonsForAnchor;
- (void)showControlButtonsForAnchor;
- (void)hideAllContentsForAnchor;
- (void)showAllContentsForAnchor;
- (void)forceLayoutForOrientationChanged;
- (void)hideBottomButtonsForAudience;
- (void)hideTopButtonsForAudience;
- (void)hideControlButtonsForAudience;
- (void)showBottomButtonsForAudience;
- (void)showTopButtonsForAudience;
- (void)showControlButtonsForAudience;
- (void)hideAllContentsForAudience;
- (void)showAllContentsForAudience;
- (void)hideAllContents;
- (void)recordOnlineUserCount:(unsigned long long)arg1;
- (void)recordSelfLike;
- (void)onSwitchCameraButtonClicked;
- (void)onCloseButtonClicked;
- (void)onActionButtonClicked;
- (void)onExitLive;
- (void)onLiveProgressUpdated:(unsigned int)arg1;
- (void)onLiveQualityUpdated:(id)arg1;
- (void)onLiveResumed;
- (void)onLivePaused;
- (void)onLiveUpdated;
- (void)onEnterLive;
- (void)onCreateLive;
- (void)onPrepareLive;
- (void)connectMic;
- (void)updateCommentViewHidden:(_Bool)arg1;
- (void)layoutConnectMicVideoPreviewPanel;
- (void)layoutConnectMicOperationPanel;
- (double)bottomForViewAboveConnectMicButton;
- (void)layoutBottomButtons;
- (void)layoutAnchorInfo;
- (void)layoutTopButtons;
- (void)layoutOnlineStateBar;
- (void)updateOnlineStateButtonViewForTopStateWidthChange;
- (void)layoutTopStateBar;
- (void)layoutUI;
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

