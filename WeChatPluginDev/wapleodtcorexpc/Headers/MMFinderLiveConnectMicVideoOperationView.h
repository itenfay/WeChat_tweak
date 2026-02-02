//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMFinderLiveClockCountdownView, MMFinderLiveCommonOnlineMemberSheet, MMFinderLiveConnectMicAudioUserInfoView, MMFinderLiveConnectMicSeatNameLabel, MMFinderLiveConnectMicUser, MMFinderLiveConnectMicUserAnchorPkNotificationView, MMFinderLiveConnectMicUserPkHeatView, MMFinderLiveConnectMicVideoUserInfoView, MMFinderLiveLotteryPacketDisplayLogic, MMFinderLiveRedPacketView, MMFinderLiveTaskId, MMLiveRewardGiftNotificationContainerView, MMLiveStrokeLabel, MMLiveViewHiddenStatusContainer, MMUIButton, NSString, PAGView, UIImageView, UILabel;
@protocol MMFinderLiveConnectMicOperationViewDelegate;

@interface MMFinderLiveConnectMicVideoOperationView : UIView
{
    _Bool _isGlobalSmallMode;
    _Bool _isInFullScreenPKStyle;
    _Bool _configureLiveDirtyHandle;
    _Bool _isMicModeGiftNotificationViewShowing;
    _Bool _isInVictoryAnimation;
    _Bool _isInWinningStreakAnimation;
    _Bool _isHiddenSmallWidgets;
    MMFinderLiveConnectMicUser *_connectMicUserInfo;
    id <MMFinderLiveConnectMicOperationViewDelegate> _actionDelegate;
    MMLiveRewardGiftNotificationContainerView *_giftNotificationContainerView;
    MMFinderLiveLotteryPacketDisplayLogic *_lotteryPacketDisplayLogic;
    MMFinderLiveTaskId *_finderLiveTaskId;
    UIView *_bottomContainerView;
    CAGradientLayer *_bottomContainerBackgroundLayer;
    MMFinderLiveRedPacketView *_redPacketAnimationView;
    UIView *_audioUserContainerView;
    MMFinderLiveConnectMicVideoUserInfoView *_videoUserInfoView;
    MMFinderLiveConnectMicAudioUserInfoView *_audioUserInfoView;
    UIView *_pureAudioModeTipView;
    UILabel *_pureAudioModeTipLabel;
    UIView *_audioModeIconContainerView;
    UIImageView *_audioModeIconView;
    PAGView *_pureAudioModeVolumeAnimationView;
    MMUIButton *_muteMicButton;
    UIView *_heatValueLabelContainerView;
    UILabel *_heatValueLabel;
    double _extraTopInset;
    double _extraLeftTopInset;
    double _extraBottomInset;
    double _contentAlpha;
    MMLiveViewHiddenStatusContainer *_hiddenStatusContainer;
    MMFinderLiveClockCountdownView *_paidMicCountdownView;
    MMFinderLiveConnectMicUserAnchorPkNotificationView *_pkAnchorNotificationView;
    MMFinderLiveConnectMicUserPkHeatView *_heatValueView;
    PAGView *_victoryAnimationView;
    UIView *_winningStreakContainerView;
    PAGView *_winningStreakAnimationView;
    UILabel *_winningStreakCountLabel;
    MMFinderLiveConnectMicSeatNameLabel *_seatNameLabel;
    MMLiveStrokeLabel *_superfanExtraPkCreditLabel;
    MMFinderLiveCommonOnlineMemberSheet *_onlineMemberSheet;
    struct CGSize _lastViewSize;
    struct CGRect _displayNormalizedFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHiddenSmallWidgets; // @synthesize isHiddenSmallWidgets=_isHiddenSmallWidgets;
@property(retain, nonatomic) MMFinderLiveCommonOnlineMemberSheet *onlineMemberSheet; // @synthesize onlineMemberSheet=_onlineMemberSheet;
@property(retain, nonatomic) MMLiveStrokeLabel *superfanExtraPkCreditLabel; // @synthesize superfanExtraPkCreditLabel=_superfanExtraPkCreditLabel;
@property(retain, nonatomic) MMFinderLiveConnectMicSeatNameLabel *seatNameLabel; // @synthesize seatNameLabel=_seatNameLabel;
@property(nonatomic) _Bool isInWinningStreakAnimation; // @synthesize isInWinningStreakAnimation=_isInWinningStreakAnimation;
@property(nonatomic) _Bool isInVictoryAnimation; // @synthesize isInVictoryAnimation=_isInVictoryAnimation;
@property(retain, nonatomic) UILabel *winningStreakCountLabel; // @synthesize winningStreakCountLabel=_winningStreakCountLabel;
@property(retain, nonatomic) PAGView *winningStreakAnimationView; // @synthesize winningStreakAnimationView=_winningStreakAnimationView;
@property(retain, nonatomic) UIView *winningStreakContainerView; // @synthesize winningStreakContainerView=_winningStreakContainerView;
@property(retain, nonatomic) PAGView *victoryAnimationView; // @synthesize victoryAnimationView=_victoryAnimationView;
@property(retain, nonatomic) MMFinderLiveConnectMicUserPkHeatView *heatValueView; // @synthesize heatValueView=_heatValueView;
@property(retain, nonatomic) MMFinderLiveConnectMicUserAnchorPkNotificationView *pkAnchorNotificationView; // @synthesize pkAnchorNotificationView=_pkAnchorNotificationView;
@property(retain, nonatomic) MMFinderLiveClockCountdownView *paidMicCountdownView; // @synthesize paidMicCountdownView=_paidMicCountdownView;
@property(retain, nonatomic) MMLiveViewHiddenStatusContainer *hiddenStatusContainer; // @synthesize hiddenStatusContainer=_hiddenStatusContainer;
@property(nonatomic) _Bool isMicModeGiftNotificationViewShowing; // @synthesize isMicModeGiftNotificationViewShowing=_isMicModeGiftNotificationViewShowing;
@property(nonatomic) _Bool configureLiveDirtyHandle; // @synthesize configureLiveDirtyHandle=_configureLiveDirtyHandle;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) _Bool isInFullScreenPKStyle; // @synthesize isInFullScreenPKStyle=_isInFullScreenPKStyle;
@property(nonatomic) _Bool isGlobalSmallMode; // @synthesize isGlobalSmallMode=_isGlobalSmallMode;
@property(nonatomic) struct CGSize lastViewSize; // @synthesize lastViewSize=_lastViewSize;
@property(nonatomic) double extraBottomInset; // @synthesize extraBottomInset=_extraBottomInset;
@property(nonatomic) double extraLeftTopInset; // @synthesize extraLeftTopInset=_extraLeftTopInset;
@property(nonatomic) double extraTopInset; // @synthesize extraTopInset=_extraTopInset;
@property(retain, nonatomic) UILabel *heatValueLabel; // @synthesize heatValueLabel=_heatValueLabel;
@property(retain, nonatomic) UIView *heatValueLabelContainerView; // @synthesize heatValueLabelContainerView=_heatValueLabelContainerView;
@property(retain, nonatomic) MMUIButton *muteMicButton; // @synthesize muteMicButton=_muteMicButton;
@property(retain, nonatomic) PAGView *pureAudioModeVolumeAnimationView; // @synthesize pureAudioModeVolumeAnimationView=_pureAudioModeVolumeAnimationView;
@property(retain, nonatomic) UIImageView *audioModeIconView; // @synthesize audioModeIconView=_audioModeIconView;
@property(retain, nonatomic) UIView *audioModeIconContainerView; // @synthesize audioModeIconContainerView=_audioModeIconContainerView;
@property(retain, nonatomic) UILabel *pureAudioModeTipLabel; // @synthesize pureAudioModeTipLabel=_pureAudioModeTipLabel;
@property(retain, nonatomic) UIView *pureAudioModeTipView; // @synthesize pureAudioModeTipView=_pureAudioModeTipView;
@property(retain, nonatomic) MMFinderLiveConnectMicAudioUserInfoView *audioUserInfoView; // @synthesize audioUserInfoView=_audioUserInfoView;
@property(retain, nonatomic) MMFinderLiveConnectMicVideoUserInfoView *videoUserInfoView; // @synthesize videoUserInfoView=_videoUserInfoView;
@property(retain, nonatomic) UIView *audioUserContainerView; // @synthesize audioUserContainerView=_audioUserContainerView;
@property(retain, nonatomic) MMFinderLiveRedPacketView *redPacketAnimationView; // @synthesize redPacketAnimationView=_redPacketAnimationView;
@property(retain, nonatomic) CAGradientLayer *bottomContainerBackgroundLayer; // @synthesize bottomContainerBackgroundLayer=_bottomContainerBackgroundLayer;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) struct CGRect displayNormalizedFrame; // @synthesize displayNormalizedFrame=_displayNormalizedFrame;
@property(retain, nonatomic) MMFinderLiveLotteryPacketDisplayLogic *lotteryPacketDisplayLogic; // @synthesize lotteryPacketDisplayLogic=_lotteryPacketDisplayLogic;
@property(retain, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView; // @synthesize giftNotificationContainerView=_giftNotificationContainerView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicOperationViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo; // @synthesize connectMicUserInfo=_connectMicUserInfo;
- (void)onPaidConnectMicUserCountdownChangedWithSecondsLeft:(unsigned long long)arg1 sdkUserId:(id)arg2;
- (void)updateSeatName;
- (_Bool)isDoubleSidePK:(id)arg1;
- (void)onPkHeatViewTapped:(id)arg1;
- (void)onLiveRewardGiftNotificationContainerViewNeedUpdateLayout:(id)arg1;
- (void)onLiveRewardGiftNotificationContainerViewDidHideGift:(id)arg1;
- (void)onLiveRewardGiftNotificationContainerViewWillShowGift:(id)arg1;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(_Bool)arg2;
- (_Bool)removeAudioMicOperationViewFromPIPRenderLayer;
- (_Bool)insertAudioMicOperationViewToPIPRenderLayer;
- (void)setFrame:(struct CGRect)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapMicMutedButtonWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapNickNameWithUserInfo:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (_Bool)isFeedStreamTask;
- (id)liveTask;
- (void)updateSmallWidgetsHidden:(_Bool)arg1;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)arg1;
- (id)temporarilyHideNonEssentialViews;
@property(readonly, nonatomic) unsigned long long viewType;
- (id)getUserInfoView;
- (void)updateUI;
- (void)onTapBackground:(id)arg1;
- (void)configMicHeatValueLabelWithLiveTask:(id)arg1;
- (void)updateLiveHeatValue;
- (void)layoutSeatNameLabel;
- (void)configSeatNameLabelWithLiveTask:(id)arg1;
- (void)updateUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)updateExtraBottomInset:(double)arg1;
- (struct CGPoint)originForWidgetContainer;
- (struct CGRect)getPureAudioTipViewFrame;
- (void)updateExtraLeftTopInset:(double)arg1;
- (void)updateExtraTopInset:(double)arg1;
- (void)muteMicButtonDidClick;
- (void)updateAnchorVolumeAnimationViewAppearance:(_Bool)arg1;
- (void)_updateCurrentAnchorStatusUI;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)updateOperationViewsAlpha:(double)arg1;
- (void)clearAndHide;
- (void)insertToPIPRenderLayerIfNeeded;
- (void)configConnectMicOperationView:(_Bool)arg1;
- (void)showWithConnectMicUserInfo:(id)arg1 isGlobalSmallMode:(_Bool)arg2 isInFullScreenPKStyle:(_Bool)arg3 configureLiveDirtyHandle:(_Bool)arg4 hideSmallWidgets:(_Bool)arg5;
- (void)updateAnchorPkNotificationView;
- (void)layoutMicHeatValueLabel;
- (id)currentHeatValueView;
- (void)layoutUIAndResetSubviewsSize:(_Bool)arg1;
- (void)layoutSubviews;
- (void)clearPkAnimation;
- (void)updatePkData;
- (void)updatePkState;
- (id)currentPkTeam;
- (id)currentPkUser;
- (void)layoutVictoryAnimationView;
- (double)getVideoUserInfoTop;
- (_Bool)isWaitPk:(id)arg1;
- (_Bool)pkHeatValueViewShowInLeft;
- (void)layoutHeatValueView;
- (void)layoutPkComponent;
- (void)configPkComponent;
- (double)winningStreakCountLabelFont;
- (struct CGSize)victoryDrawAnimationViewSize;
- (void)updatePaidCountdownViewWithTime:(unsigned long long)arg1;
- (void)layoutSuperfanExtraPkCreditLabel;
- (void)hideSuperfanExtraPkCreditLabel;
- (void)showSuperfanExtraPkCreditLabelWithDiffCount:(unsigned long long)arg1;
- (void)layoutPureAudioModeTipView;
- (void)configPureAudioModeTipView;
- (void)setupBackgroundTapGestureRecognizer;
- (void)configAudioUserInfoViewAndResetSubviewsSize:(_Bool)arg1;
- (void)adjustVideoUserInfoViewFrameInFullScreenPKStyle;
- (void)adjustVideoUserInfoViewFrame;
- (void)configVideoUserInfoViewWithRightAreaWidth:(double)arg1 andResetSubviewsSize:(_Bool)arg2;
- (id)refViewForDisplayPaidMicKeepAliveTips;
@property(readonly, nonatomic) _Bool isCurrentAnchor;
- (id)initWithTaskId:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

