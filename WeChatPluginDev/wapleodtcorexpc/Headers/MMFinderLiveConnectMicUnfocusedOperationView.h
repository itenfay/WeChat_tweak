//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicUnfocusedUserInfoView, MMFinderLiveConnectMicUser, MMFinderLiveLotteryPacketDisplayLogic, MMFinderLiveRedPacketView, MMFinderLiveTaskId, MMLiveGradientLayerView, MMLiveRewardGiftNotificationContainerView, MMLiveViewHiddenStatusContainer, MMLiveVoteFloatingView, MMLiveVoteFloatingViewDisplayLogic, NSString;
@protocol MMFinderLiveConnectMicOperationViewDelegate;

@interface MMFinderLiveConnectMicUnfocusedOperationView : UIView
{
    MMFinderLiveConnectMicUser *_connectMicUserInfo;
    id <MMFinderLiveConnectMicOperationViewDelegate> _actionDelegate;
    MMFinderLiveLotteryPacketDisplayLogic *_lotteryPacketDisplayLogic;
    MMFinderLiveTaskId *_finderLiveTaskId;
    MMLiveGradientLayerView *_bottomGradientView;
    MMFinderLiveConnectMicUnfocusedUserInfoView *_userInfoView;
    UIView *_redPacketAnimationContainerView;
    MMFinderLiveRedPacketView *_redPacketAnimationView;
    UIView *_lotteryPacketAnimationContainerView;
    UIView *_lotteryPacketAnimationScaleView;
    UIView *_voteFloatingViewContainer;
    MMLiveVoteFloatingView *_voteFloatingView;
    MMLiveVoteFloatingViewDisplayLogic *_voteFloatingViewDisplayLogic;
    MMLiveViewHiddenStatusContainer *_hiddenStatusContainer;
    struct CGRect _displayNormalizedFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveViewHiddenStatusContainer *hiddenStatusContainer; // @synthesize hiddenStatusContainer=_hiddenStatusContainer;
@property(retain, nonatomic) MMLiveVoteFloatingViewDisplayLogic *voteFloatingViewDisplayLogic; // @synthesize voteFloatingViewDisplayLogic=_voteFloatingViewDisplayLogic;
@property(retain, nonatomic) MMLiveVoteFloatingView *voteFloatingView; // @synthesize voteFloatingView=_voteFloatingView;
@property(retain, nonatomic) UIView *voteFloatingViewContainer; // @synthesize voteFloatingViewContainer=_voteFloatingViewContainer;
@property(retain, nonatomic) UIView *lotteryPacketAnimationScaleView; // @synthesize lotteryPacketAnimationScaleView=_lotteryPacketAnimationScaleView;
@property(retain, nonatomic) UIView *lotteryPacketAnimationContainerView; // @synthesize lotteryPacketAnimationContainerView=_lotteryPacketAnimationContainerView;
@property(retain, nonatomic) MMFinderLiveRedPacketView *redPacketAnimationView; // @synthesize redPacketAnimationView=_redPacketAnimationView;
@property(retain, nonatomic) UIView *redPacketAnimationContainerView; // @synthesize redPacketAnimationContainerView=_redPacketAnimationContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicUnfocusedUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) MMLiveGradientLayerView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) struct CGRect displayNormalizedFrame; // @synthesize displayNormalizedFrame=_displayNormalizedFrame;
@property(retain, nonatomic) MMFinderLiveLotteryPacketDisplayLogic *lotteryPacketDisplayLogic; // @synthesize lotteryPacketDisplayLogic=_lotteryPacketDisplayLogic;
@property(nonatomic) __weak id <MMFinderLiveConnectMicOperationViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo; // @synthesize connectMicUserInfo=_connectMicUserInfo;
- (void)onToggleFloatingViewHidden:(_Bool)arg1;
- (void)onVotingInfoUpdate:(id)arg1 fromMsg:(_Bool)arg2;
- (_Bool)isFeedStreamTask;
- (_Bool)insertAudioMicOperationViewToPIPRenderLayer;
- (void)setupBackgroundTapGestureRecognizer;
- (void)setupVoteFloatingView;
- (void)setupLotteryPacketView;
- (void)configConnectMicOperationView:(_Bool)arg1;
- (void)onFinderLiveLotteryPacketDisplayLogicDidChangeLittlePacketShow:(id)arg1;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(_Bool)arg2;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapMicMutedButtonWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapNickNameWithUserInfo:(id)arg1;
- (void)onTapBackground:(id)arg1;
- (void)layoutSubviews;
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
@property(readonly, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView;
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

