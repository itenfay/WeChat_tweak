//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveClockCountdownView, MMLiveViewHiddenStatusContainer, PAGView, UILabel, UIView;

@interface MMFinderLiveConnectMicFocusedUserInfoView
{
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
- (void)updatePaidCountdownViewWithTime:(unsigned long long)arg1;
- (void)onPaidConnectMicUserCountdownChangedWithSecondsLeft:(unsigned long long)arg1 sdkUserId:(id)arg2;
- (id)liveTask;
- (void)configHeatValueLabel;
- (void)updateMicMutedButtonAppearance;
- (void)layoutInCenterMode;
- (_Bool)useCenterLayoutMode;
- (void)configVolumeAnimationView;
- (void)layoutSubviews;
- (void)updateSmallWidgetsHidden:(_Bool)arg1;
- (unsigned long long)viewType;
- (void)configGlobalRankSignView;
- (_Bool)needDisplayAnonymousSignView;
- (_Bool)needDisplayGlobalRankSignView;
- (void)createNickNameLabel;
- (void)createHeadImageView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutUI;
- (void)onConnectMicUserHasChanged;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)hideNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (void)updateUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (id)getPaidMicCountdownView;
- (id)init;

@end

