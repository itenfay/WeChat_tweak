//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicFocusedUserInfoView, MMFinderLiveConnectMicUser, MMFinderLiveLotteryPacketDisplayLogic, MMFinderLiveTaskId, MMLiveRewardGiftNotificationContainerView, NSString;
@protocol MMFinderLiveConnectMicOperationViewDelegate;

@interface MMFinderLiveConnectMicFocusedOperationView : UIView
{
    MMFinderLiveConnectMicUser *_connectMicUserInfo;
    id <MMFinderLiveConnectMicOperationViewDelegate> _actionDelegate;
    MMLiveRewardGiftNotificationContainerView *_giftNotificationContainerView;
    MMFinderLiveLotteryPacketDisplayLogic *_lotteryPacketDisplayLogic;
    MMFinderLiveTaskId *_finderLiveTaskId;
    MMFinderLiveConnectMicFocusedUserInfoView *_userInfoView;
    struct CGRect _displayNormalizedFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicFocusedUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) struct CGRect displayNormalizedFrame; // @synthesize displayNormalizedFrame=_displayNormalizedFrame;
@property(retain, nonatomic) MMFinderLiveLotteryPacketDisplayLogic *lotteryPacketDisplayLogic; // @synthesize lotteryPacketDisplayLogic=_lotteryPacketDisplayLogic;
@property(retain, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView; // @synthesize giftNotificationContainerView=_giftNotificationContainerView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicOperationViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo; // @synthesize connectMicUserInfo=_connectMicUserInfo;
- (_Bool)insertAudioMicOperationViewToPIPRenderLayer;
- (_Bool)isFeedStreamTask;
- (void)configConnectMicOperationView:(_Bool)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapMicMutedButtonWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapNickNameWithUserInfo:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateSmallWidgetsHidden:(_Bool)arg1;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (id)temporarilyHideNonEssentialViews;
- (void)insertToPIPRenderLayerIfNeeded;
- (id)getUserInfoView;
- (void)updateLiveHeatValue;
- (void)updateUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)updateExtraBottomInset:(double)arg1;
- (void)updateExtraLeftTopInset:(double)arg1;
- (void)updateExtraTopInset:(double)arg1;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateOperationViewsAlpha:(double)arg1;
- (void)clearAndHide;
- (void)showWithConnectMicUserInfo:(id)arg1 isGlobalSmallMode:(_Bool)arg2 isInFullScreenPKStyle:(_Bool)arg3 configureLiveDirtyHandle:(_Bool)arg4 hideSmallWidgets:(_Bool)arg5;
@property(readonly, nonatomic) unsigned long long viewType;
- (id)refViewForDisplayPaidMicKeepAliveTips;
- (void)prepareForReuse;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

