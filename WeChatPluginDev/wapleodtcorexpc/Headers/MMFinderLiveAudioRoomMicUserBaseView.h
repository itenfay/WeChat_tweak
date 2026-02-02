//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveAudioRoomMicAudioAnimationView, MMFinderLiveCommonOnlineMemberSheet, MMFinderLiveConnectMicSeatInfo, MMFinderLiveConnectMicUser, MMFinderLiveRedPacketView, MMFinderLiveTaskId, MMLiveRewardGiftNotificationContainerView, MMUIButton, NSString, PAGView, UIColor, UIImageView, UILabel, WCFinderHeadImageView;
@protocol MMFinderLiveAudioRoomMicUserViewDelegate;

@interface MMFinderLiveAudioRoomMicUserBaseView : UIView
{
    _Bool _isAvatarRounded;
    _Bool _userIsTalking;
    _Bool _isAdminMode;
    _Bool _forceHideTagViews;
    _Bool _shouldShowLocation;
    MMFinderLiveConnectMicUser *_micUserInfo;
    MMFinderLiveConnectMicSeatInfo *_micSeatInfo;
    unsigned long long _viewScene;
    MMLiveRewardGiftNotificationContainerView *_giftNotificationContainerView;
    MMFinderLiveTaskId *_finderLiveTaskId;
    id <MMFinderLiveAudioRoomMicUserViewDelegate> _actionDelegate;
    UIView *_avatarContainerView;
    UIView *_seatBackgroundView;
    UIImageView *_iconViewInSeatSlot;
    WCFinderHeadImageView *_userAvatarView;
    UILabel *_titleLabel;
    UIView *_tagContainerView;
    UIView *_locationContainerView;
    UIView *_locationShadowView;
    UIImageView *_locationIconView;
    UILabel *_locationLabel;
    UIView *_seatNameContainerView;
    UILabel *_seatNameLabel;
    unsigned long long _audioRoomScene;
    MMFinderLiveAudioRoomMicAudioAnimationView *_audioAnimationView;
    UIColor *_audioWaveColor;
    MMUIButton *_micMutedButton;
    UIView *_heatValueContainerView;
    UILabel *_heatValueLabel;
    UIView *_redPacketContainerView;
    MMFinderLiveRedPacketView *_redPacketAnimationView;
    UIView *_pkVictoryAnimationContainerView;
    PAGView *_pkVictoryAnimationView;
    UILabel *_pkWinningStreakCountLabel;
    NSString *_locationName;
    MMFinderLiveCommonOnlineMemberSheet *_onlineMemberSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveCommonOnlineMemberSheet *onlineMemberSheet; // @synthesize onlineMemberSheet=_onlineMemberSheet;
@property(nonatomic) _Bool shouldShowLocation; // @synthesize shouldShowLocation=_shouldShowLocation;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(nonatomic) _Bool forceHideTagViews; // @synthesize forceHideTagViews=_forceHideTagViews;
@property(retain, nonatomic) UILabel *pkWinningStreakCountLabel; // @synthesize pkWinningStreakCountLabel=_pkWinningStreakCountLabel;
@property(retain, nonatomic) PAGView *pkVictoryAnimationView; // @synthesize pkVictoryAnimationView=_pkVictoryAnimationView;
@property(retain, nonatomic) UIView *pkVictoryAnimationContainerView; // @synthesize pkVictoryAnimationContainerView=_pkVictoryAnimationContainerView;
@property(retain, nonatomic) MMFinderLiveRedPacketView *redPacketAnimationView; // @synthesize redPacketAnimationView=_redPacketAnimationView;
@property(retain, nonatomic) UIView *redPacketContainerView; // @synthesize redPacketContainerView=_redPacketContainerView;
@property(retain, nonatomic) UILabel *heatValueLabel; // @synthesize heatValueLabel=_heatValueLabel;
@property(retain, nonatomic) UIView *heatValueContainerView; // @synthesize heatValueContainerView=_heatValueContainerView;
@property(retain, nonatomic) MMUIButton *micMutedButton; // @synthesize micMutedButton=_micMutedButton;
@property(retain, nonatomic) UIColor *audioWaveColor; // @synthesize audioWaveColor=_audioWaveColor;
@property(retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationView *audioAnimationView; // @synthesize audioAnimationView=_audioAnimationView;
@property(nonatomic) unsigned long long audioRoomScene; // @synthesize audioRoomScene=_audioRoomScene;
@property(nonatomic) _Bool isAdminMode; // @synthesize isAdminMode=_isAdminMode;
@property(retain, nonatomic) UILabel *seatNameLabel; // @synthesize seatNameLabel=_seatNameLabel;
@property(retain, nonatomic) UIView *seatNameContainerView; // @synthesize seatNameContainerView=_seatNameContainerView;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIImageView *locationIconView; // @synthesize locationIconView=_locationIconView;
@property(retain, nonatomic) UIView *locationShadowView; // @synthesize locationShadowView=_locationShadowView;
@property(retain, nonatomic) UIView *locationContainerView; // @synthesize locationContainerView=_locationContainerView;
@property(retain, nonatomic) UIView *tagContainerView; // @synthesize tagContainerView=_tagContainerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderHeadImageView *userAvatarView; // @synthesize userAvatarView=_userAvatarView;
@property(retain, nonatomic) UIImageView *iconViewInSeatSlot; // @synthesize iconViewInSeatSlot=_iconViewInSeatSlot;
@property(retain, nonatomic) UIView *seatBackgroundView; // @synthesize seatBackgroundView=_seatBackgroundView;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(nonatomic) _Bool userIsTalking; // @synthesize userIsTalking=_userIsTalking;
@property(nonatomic) _Bool isAvatarRounded; // @synthesize isAvatarRounded=_isAvatarRounded;
@property(nonatomic) __weak id <MMFinderLiveAudioRoomMicUserViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(retain, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView; // @synthesize giftNotificationContainerView=_giftNotificationContainerView;
@property(nonatomic) unsigned long long viewScene; // @synthesize viewScene=_viewScene;
@property(retain, nonatomic) MMFinderLiveConnectMicSeatInfo *micSeatInfo; // @synthesize micSeatInfo=_micSeatInfo;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *micUserInfo; // @synthesize micUserInfo=_micUserInfo;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)updateShouldShowLocation:(_Bool)arg1;
- (void)updateForceHideTagViews:(_Bool)arg1;
- (id)currentPkTeam;
- (id)currentPkUser;
- (id)liveTask;
- (void)updatePkVictoryAnimationView;
- (void)updateHeatValueLabel;
- (void)updatePkState;
- (void)updateAudioWaveColor:(id)arg1;
- (void)updateViewAfterKtvSingerChanged;
- (void)updateViewAfterMicMutedStatusChanged;
- (void)updateViewAfterTalkingStatusChanged;
- (void)updateViewAfterSeatNameChanged;
- (void)updateViewWithUIChangeType:(unsigned long long)arg1;
- (void)layoutPkVictoryAnimationView;
- (void)configPkVictoryAnimationView;
- (void)layoutGiftNotificationContainerView;
- (void)configGiftNotificationContainerView;
- (void)layoutHeatValueAndRedPacketViews;
- (void)configHeatValueAndRedPacketViews;
- (void)onTapHeatValue;
- (_Bool)shouldCreateRedPacketView;
- (void)updateSeatNameLabelHiddenAndText;
- (void)layoutSeatNameLabel;
- (void)updateLocationLabelHiddenAndText;
- (void)layoutLocationViews;
- (void)layoutTagContainerView;
- (void)layoutTagViews;
- (void)configSeatNameLabel;
- (void)configLocationViews;
- (void)updateTagContainerViewHidden;
- (void)configTagContainerView;
- (void)configTagViews;
- (id)tagViewBackgroundColor;
- (id)tagViewShadowColor;
- (id)tagLabelTextColor;
- (void)onClickMicMutedButton;
- (void)createMicMutedButton;
- (void)layoutTitleLabelAndMicMutedButton;
- (void)configTitleLabelAndMicMutedButton;
- (void)updateTitleLabelText;
- (void)layoutAudioAnimationView;
- (void)layoutUserAvatarView;
- (void)configUserAvatarView;
- (void)layoutSeatSlotViews;
- (void)configSeatSlotViews;
- (void)updateSeatViewHidden;
- (void)layoutAvatarContainerView;
- (void)configAvatarContainerView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateUserIsTalking:(_Bool)arg1;
- (_Bool)shouldForceStopAudioWaveAnimation;
- (void)handleTapGesture:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configViews;
- (id)getFinderLiveTask;
- (id)getLiveTask;
- (id)initWithViewScene:(unsigned long long)arg1 actionDelegate:(id)arg2 taskId:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 viewScene:(unsigned long long)arg2 actionDelegate:(id)arg3 taskId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

