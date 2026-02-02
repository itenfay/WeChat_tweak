//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, NSString, UIView, WCAdAppointmentLogic, WCAdBulletScreenLogic, WCAdBulletScreenView, WCAdCountdownView, WCAdCouponLogic, WCAdDynamicFeedContainerView, WCAdDynamicFeedMediaHolderView, WCAdDynamicFeedSightView, WCAdDynamicLayoutLogic, WCAdFinderFollowLogic, WCAdFinderLiveLogic, WCAdFinderLiveNoticeLogic, WCAdFinderLivePlayerView, WCAdLiveDisplayView, WCAdLiveLikeAnimationView, WCAdQuicklyAddBrandLogic, WCAdRollView, WCAdSubscriptionLogic, WCImageView;
@protocol WCTimeLineAdDynamicFeedViewDelegate;

@interface WCTimeLineAdDynamicFeedView
{
    unsigned int _liveStatus;
    id <WCTimeLineAdDynamicFeedViewDelegate> _delegate;
    WCAdDynamicFeedContainerView *_containerView;
    WCAdDynamicFeedMediaHolderView *_mediaHolder;
    WCAdDynamicFeedSightView *_mainSightView;
    WCImageView *_mainImageView;
    UIView *_rootContainerView;
    WCAdDynamicLayoutLogic *_layoutLogic;
    WCAdAppointmentLogic *_appointmentLogic;
    WCAdSubscriptionLogic *_subscriptionLogic;
    WCAdQuicklyAddBrandLogic *_addBrandLogic;
    WCAdCouponLogic *_adCouponLogic;
    WCAdFinderLiveNoticeLogic *_adFinderLiveNoticeLogic;
    WCAdFinderFollowLogic *_adFinderFollowLogic;
    MMUIView *_promotionContainerView;
    MMUILabel *_promotionLeftView;
    MMUIView *_promotionView;
    WCAdCountdownView *_countdownView;
    MMUIView *_liveStatusContainerView;
    WCAdLiveDisplayView *_liveDisplayView;
    MMUIView *_liveLikeAnimationContainerView;
    WCAdLiveLikeAnimationView *_liveLikeAnimationView;
    MMUIView *_rollContainerView;
    WCAdRollView *_rollView;
    WCAdFinderLivePlayerView *_finderLivePlayerView;
    WCAdFinderLiveLogic *_finderLiveLogic;
    MMUIView *_adBulletScreenContainerView;
    WCAdBulletScreenView *_adBulletScreenView;
    WCAdBulletScreenLogic *_adBulletScreenLogic;
}

+ (id)fetchAnimationViewForView:(id)arg1 isFromTimeline:(_Bool)arg2 dataItem:(id)arg3;
+ (id)findRootContainerViewForMediaHolder:(id)arg1;
+ (double)heightForMedia:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdBulletScreenLogic *adBulletScreenLogic; // @synthesize adBulletScreenLogic=_adBulletScreenLogic;
@property(retain, nonatomic) WCAdBulletScreenView *adBulletScreenView; // @synthesize adBulletScreenView=_adBulletScreenView;
@property(retain, nonatomic) MMUIView *adBulletScreenContainerView; // @synthesize adBulletScreenContainerView=_adBulletScreenContainerView;
@property(retain, nonatomic) WCAdFinderLiveLogic *finderLiveLogic; // @synthesize finderLiveLogic=_finderLiveLogic;
@property(retain, nonatomic) WCAdFinderLivePlayerView *finderLivePlayerView; // @synthesize finderLivePlayerView=_finderLivePlayerView;
@property(retain, nonatomic) WCAdRollView *rollView; // @synthesize rollView=_rollView;
@property(retain, nonatomic) MMUIView *rollContainerView; // @synthesize rollContainerView=_rollContainerView;
@property(retain, nonatomic) WCAdLiveLikeAnimationView *liveLikeAnimationView; // @synthesize liveLikeAnimationView=_liveLikeAnimationView;
@property(retain, nonatomic) MMUIView *liveLikeAnimationContainerView; // @synthesize liveLikeAnimationContainerView=_liveLikeAnimationContainerView;
@property(nonatomic) unsigned int liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) WCAdLiveDisplayView *liveDisplayView; // @synthesize liveDisplayView=_liveDisplayView;
@property(retain, nonatomic) MMUIView *liveStatusContainerView; // @synthesize liveStatusContainerView=_liveStatusContainerView;
@property(retain, nonatomic) WCAdCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) MMUIView *promotionView; // @synthesize promotionView=_promotionView;
@property(retain, nonatomic) MMUILabel *promotionLeftView; // @synthesize promotionLeftView=_promotionLeftView;
@property(retain, nonatomic) MMUIView *promotionContainerView; // @synthesize promotionContainerView=_promotionContainerView;
@property(retain, nonatomic) WCAdFinderFollowLogic *adFinderFollowLogic; // @synthesize adFinderFollowLogic=_adFinderFollowLogic;
@property(retain, nonatomic) WCAdFinderLiveNoticeLogic *adFinderLiveNoticeLogic; // @synthesize adFinderLiveNoticeLogic=_adFinderLiveNoticeLogic;
@property(retain, nonatomic) WCAdCouponLogic *adCouponLogic; // @synthesize adCouponLogic=_adCouponLogic;
@property(retain, nonatomic) WCAdQuicklyAddBrandLogic *addBrandLogic; // @synthesize addBrandLogic=_addBrandLogic;
@property(retain, nonatomic) WCAdSubscriptionLogic *subscriptionLogic; // @synthesize subscriptionLogic=_subscriptionLogic;
@property(retain, nonatomic) WCAdAppointmentLogic *appointmentLogic; // @synthesize appointmentLogic=_appointmentLogic;
@property(retain, nonatomic) WCAdDynamicLayoutLogic *layoutLogic; // @synthesize layoutLogic=_layoutLogic;
@property(retain, nonatomic) UIView *rootContainerView; // @synthesize rootContainerView=_rootContainerView;
@property(retain, nonatomic) WCImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(retain, nonatomic) WCAdDynamicFeedSightView *mainSightView; // @synthesize mainSightView=_mainSightView;
@property(retain, nonatomic) WCAdDynamicFeedMediaHolderView *mediaHolder; // @synthesize mediaHolder=_mediaHolder;
@property(retain, nonatomic) WCAdDynamicFeedContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WCTimeLineAdDynamicFeedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateAdExpParamsReportInfoWithLastTouch:(struct CGPoint)arg1;
- (void)updateAdExpParamsReportInfo;
- (void)initBulletScreenView:(id)arg1;
- (void)initRollView:(id)arg1;
- (void)checkUpdateLiveInfo;
- (void)stopLiveLikeAnimation;
- (void)tryStartLiveLikeAnimation;
- (void)updateLiveStatus:(int)arg1;
- (id)createLiveLikeAnimationView;
- (void)initLiveInfoView:(id)arg1;
- (void)onCountdownEnd;
- (void)onCountdownUpdate;
- (void)initPromotionView:(id)arg1;
- (void)layoutSpecialSubviews;
- (void)appendSpecialSubviews;
- (id)fetchSpecialContainerViewWithTag:(long long)arg1;
- (void)onFinderFollowingStateChanged:(_Bool)arg1 byUser:(_Bool)arg2;
- (void)doFinderFollow;
- (void)updateFinderLiveNoticeReserveInfo;
- (void)updateFinderLiveNoticeReserveBtnStateWithLocal;
- (void)onFinderLiveNoticeReserved:(id)arg1 snsId:(id)arg2;
- (void)doFinderLiveNoticeReserve;
- (void)doGetCoupon;
- (void)updateQuicklyAddBrandBtnState;
- (void)onQuicklyAddBrandResult:(long long)arg1 andBrandInfo:(id)arg2;
- (void)doAddBrandOrEnterBrandProfileVC:(_Bool)arg1;
- (void)updateSubscriptionBtnState;
- (void)doSubscriptionMessageReport:(long long)arg1 clickSubmit:(_Bool)arg2;
- (void)onSubscriptionClosePageSheetWithoutSubmit;
- (void)onSubscriptionFinishedWithResult:(id)arg1 success:(_Bool)arg2 cancel:(_Bool)arg3 errorCode:(long long)arg4;
- (void)doSubscribe;
- (void)onAppointmentSubmitForType:(int)arg1 isSuccess:(_Bool)arg2;
- (void)onAppointmentUpdatingStatus:(int)arg1;
- (void)onAppointmentConfirmViewDidConfirm;
- (void)doAppointment;
- (void)onActionLinkClick;
- (void)onSelectButtonClickedIsLeft:(_Bool)arg1;
- (long long)fetchAdExposureScene;
- (void)updateAdRelievedBuyVisibility:(id)arg1;
- (_Bool)checkActionButtonType:(long long)arg1;
- (void)onActionBtnClick;
- (void)updateActionButtonStateWithTitle:(id)arg1 isEnabled:(_Bool)arg2;
- (void)updateActionButtonStateWithTitle:(id)arg1;
- (id)fetchActionButton;
- (void)onDynamicLayoutClickWithExtraClickType:(long long)arg1 jumpInfo:(id)arg2;
- (void)onDynamicLayoutClickEvent:(id)arg1 viewTag:(long long)arg2 index:(unsigned long long)arg3 originView:(id)arg4;
- (id)fetchGridElementViewAtIndex:(unsigned long long)arg1;
- (void)onCombinedGridClickedIsMainItem:(_Bool)arg1 index:(long long)arg2 clickedView:(id)arg3;
- (void)onGridElementClickedWithIndex:(unsigned long long)arg1 originView:(id)arg2;
- (void)onMainElementClicked;
- (void)onRootContainerClicked;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)updateContentsState;
- (void)generateDynamicContentViews;
- (void)contentItemBecomeInvisible;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisplay;
- (double)fetchVideoCurrentPlaybackTime;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (id)getMainContentView;
- (void)onPlayExited;
- (void)onPlayEnd:(_Bool)arg1;
- (id)createFinderLivePlayer:(id)arg1;
- (void)initFinderLivePlayerWithItem:(id)arg1;
- (id)createSightView:(id)arg1;
- (void)initMainSightViewWithMedia:(id)arg1 dataItem:(id)arg2;
- (void)initMainImageViewWithMedia:(id)arg1;
- (void)initContentViewWithItem:(id)arg1;
- (id)mainElemetView;
- (void)layoutSubviews;
- (id)fetchMediaHolder;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

