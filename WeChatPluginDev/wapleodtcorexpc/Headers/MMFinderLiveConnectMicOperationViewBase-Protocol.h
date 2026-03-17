//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicBaseUserInfoView, MMFinderLiveConnectMicUser, MMFinderLiveLotteryPacketDisplayLogic, MMLiveRewardGiftNotificationContainerView, MMLiveViewHiddenStatusContainer, UIView;
@protocol MMFinderLiveConnectMicOperationViewDelegate;

@protocol MMFinderLiveConnectMicOperationViewBase <NSObject>
@property(nonatomic) struct CGRect displayNormalizedFrame;
@property(retain, nonatomic) MMFinderLiveLotteryPacketDisplayLogic *lotteryPacketDisplayLogic;
@property(readonly, nonatomic) unsigned long long viewType;
@property(readonly, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicOperationViewDelegate> actionDelegate;
@property(readonly, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo;
- (void)updateSmallWidgetsHidden:(_Bool)arg1;
- (UIView *)refViewForDisplayPaidMicKeepAliveTips;
- (void)prepareForReuse;
- (void)insertToPIPRenderLayerIfNeeded;
- (MMFinderLiveConnectMicBaseUserInfoView *)getUserInfoView;
- (void)updateLiveHeatValue;
- (void)updateUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)updateExtraBottomInset:(double)arg1;
- (void)updateExtraLeftTopInset:(double)arg1;
- (void)updateExtraTopInset:(double)arg1;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateOperationViewsAlpha:(double)arg1;
- (void)clearAndHide;
- (void)showWithConnectMicUserInfo:(MMFinderLiveConnectMicUser *)arg1 isGlobalSmallMode:(_Bool)arg2 isInFullScreenPKStyle:(_Bool)arg3 configureLiveDirtyHandle:(_Bool)arg4 hideSmallWidgets:(_Bool)arg5;

@optional
- (void)hideSuperfanExtraPkCreditLabel;
- (void)showSuperfanExtraPkCreditLabelWithDiffCount:(unsigned long long)arg1;
- (void)updateSeatName;
- (void)updateAnchorVolumeAnimationViewAppearance:(_Bool)arg1;
- (void)clearPkAnimation;
- (void)updatePkData;
- (void)updatePkState;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(MMLiveViewHiddenStatusContainer *)arg1;
- (MMLiveViewHiddenStatusContainer *)temporarilyHideNonEssentialViews;
@end

