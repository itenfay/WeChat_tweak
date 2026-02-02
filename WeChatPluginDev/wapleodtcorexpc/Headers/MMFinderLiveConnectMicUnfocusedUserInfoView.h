//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveClockCountdownView, MMLiveRewardGiftNotificationContainerView, MMLiveViewHiddenStatusContainer, NSString, PAGView, UILabel, UIView;

@interface MMFinderLiveConnectMicUnfocusedUserInfoView
{
    MMLiveRewardGiftNotificationContainerView *_giftNotificationContainerView;
    UIView *_containerView;
    PAGView *_volumeAnimationView;
    UIView *_heatValueLabelContainerView;
    UILabel *_heatValueLabel;
    MMLiveViewHiddenStatusContainer *_hiddenStatusContainer;
    MMFinderLiveClockCountdownView *_paidMicCountdownView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveClockCountdownView *paidMicCountdownView; // @synthesize paidMicCountdownView=_paidMicCountdownView;
@property(nonatomic) __weak MMLiveViewHiddenStatusContainer *hiddenStatusContainer; // @synthesize hiddenStatusContainer=_hiddenStatusContainer;
@property(retain, nonatomic) UILabel *heatValueLabel; // @synthesize heatValueLabel=_heatValueLabel;
@property(retain, nonatomic) UIView *heatValueLabelContainerView; // @synthesize heatValueLabelContainerView=_heatValueLabelContainerView;
@property(retain, nonatomic) PAGView *volumeAnimationView; // @synthesize volumeAnimationView=_volumeAnimationView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView; // @synthesize giftNotificationContainerView=_giftNotificationContainerView;
- (void)updatePaidCountdownViewWithTime:(unsigned long long)arg1;
- (void)onPaidConnectMicUserCountdownChangedWithSecondsLeft:(unsigned long long)arg1 sdkUserId:(id)arg2;
- (id)liveTask;
- (void)configHeatValueLabel;
- (void)updateMicMutedButtonAppearance;
- (void)layoutNicknameLabelForAnchorWithAudioModeFlag:(_Bool)arg1;
- (void)layoutComponentsForAnchorAudioMode;
- (void)layoutComponentsForAnchorVideoMode;
- (void)layoutComponentsForAudienceAudioMode;
- (void)layoutComponentsForAudienceVideoMode;
- (void)configGiftContainerView;
- (void)createMicMutedButton;
- (void)configVolumeAnimationView;
- (void)onLiveRewardGiftNotificationContainerViewDidHideGift:(id)arg1;
- (void)onLiveRewardGiftNotificationContainerViewWillShowGift:(id)arg1;
- (void)layoutSubviews;
- (void)updateSmallWidgetsHidden:(_Bool)arg1;
- (unsigned long long)viewType;
- (_Bool)needDisplayAnonymousSignView;
- (_Bool)needDisplayGlobalRankSignView;
- (void)configNicknameLabel;
- (void)createNickNameLabel;
- (void)createHeadImageView;
- (void)layoutUI;
- (void)onConnectMicUserHasChanged;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)hideNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (id)getPaidMicCountdownView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

