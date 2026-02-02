//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveContact, MMFinderLiveAudioRoomMicAudioAnimationView, MMFinderLiveConnectMicUser, MMFinderLiveRedPacketView, MMFinderLiveTaskId, MMLiveRewardGiftNotificationContainerView, MMUIButton, NSString, UIColor, UILabel, UIView, WCFinderContact, WCFinderHeadImageView;
@protocol MMLiveKtvUserViewDelegate;

@interface MMLiveKtvUserView
{
    _Bool _userTalking;
    FinderLiveContact *_userContact;
    WCFinderContact *_finderContact;
    id <MMLiveKtvUserViewDelegate> _delegate;
    MMFinderLiveTaskId *_finderLiveTaskId;
    unsigned long long _viewScene;
    NSString *_userId;
    MMFinderLiveConnectMicUser *_micUserInfo;
    UIView *_avatarContainerView;
    WCFinderHeadImageView *_userAvatarView;
    MMFinderLiveAudioRoomMicAudioAnimationView *_audioAnimationView;
    UIColor *_audioWaveColor;
    UILabel *_titleLabel;
    MMUIButton *_micMutedButton;
    MMLiveRewardGiftNotificationContainerView *_giftNotificationContainerView;
    UIView *_heatValueContainerView;
    UILabel *_heatValueLabel;
    unsigned long long _currHeatValue;
    UIView *_redPacketContainerView;
    MMFinderLiveRedPacketView *_redPacketAnimationView;
}

+ (double)preferExtraHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRedPacketView *redPacketAnimationView; // @synthesize redPacketAnimationView=_redPacketAnimationView;
@property(retain, nonatomic) UIView *redPacketContainerView; // @synthesize redPacketContainerView=_redPacketContainerView;
@property(nonatomic) unsigned long long currHeatValue; // @synthesize currHeatValue=_currHeatValue;
@property(retain, nonatomic) UILabel *heatValueLabel; // @synthesize heatValueLabel=_heatValueLabel;
@property(retain, nonatomic) UIView *heatValueContainerView; // @synthesize heatValueContainerView=_heatValueContainerView;
@property(retain, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView; // @synthesize giftNotificationContainerView=_giftNotificationContainerView;
@property(retain, nonatomic) MMUIButton *micMutedButton; // @synthesize micMutedButton=_micMutedButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *audioWaveColor; // @synthesize audioWaveColor=_audioWaveColor;
@property(retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationView *audioAnimationView; // @synthesize audioAnimationView=_audioAnimationView;
@property(retain, nonatomic) WCFinderHeadImageView *userAvatarView; // @synthesize userAvatarView=_userAvatarView;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *micUserInfo; // @synthesize micUserInfo=_micUserInfo;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned long long viewScene; // @synthesize viewScene=_viewScene;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) __weak id <MMLiveKtvUserViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(retain, nonatomic) FinderLiveContact *userContact; // @synthesize userContact=_userContact;
@property(nonatomic) _Bool userTalking; // @synthesize userTalking=_userTalking;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)updateMicMutedButtonHidden;
- (void)updateHeatValueLabel;
- (void)updateRedPacketViews;
- (_Bool)shouldShowRedPacketView;
- (_Bool)isAvatarRounded;
- (void)initGiftNotificationContainerView;
- (void)initRedPacketView;
- (void)initHeatValueViews;
- (void)initMicMutedButton;
- (_Bool)shouldCreateMicMutedButton;
- (void)initTitleLabel;
- (void)initAvatarViews;
- (void)initializeComponents;
- (void)refreshUI;
- (void)checkUserNameWithUpdate:(id)arg1;
- (void)checkUserIdWithUpdate:(id)arg1;
- (void)updateMicMutedBtnHiddenWithRefreshUI;
- (id)currUserId;
- (id)getGiftNotificationContainerView;
- (void)clearStates;
- (void)updateUserFinderContact:(id)arg1 userId:(id)arg2;
- (void)updateUserContact:(id)arg1 userId:(id)arg2;
- (void)updateMicUserInfo:(id)arg1 userId:(id)arg2;
- (void)onLiveKTVUserHeatValueUpdate:(id)arg1 taskId:(id)arg2;
- (void)onLiveKTVMainWidgetColorUpdate:(id)arg1 taskId:(id)arg2;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(_Bool)arg2;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)onClickMicMutedButton;
- (void)onAvatarTapped;
- (void)layoutGiftNotificationContainerView;
- (void)layoutHeatValueAndRedPacketView;
- (_Bool)isViewAtFirstLineVisible;
- (void)layoutTitleLabelAndMuteButton;
- (void)layoutAvatarViews;
- (void)layoutSubviews;
- (_Bool)isAdminMode;
- (id)getLiveTask;
- (void)registerExtensions;
- (id)initWithTaskId:(id)arg1 displayScenario:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

