//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMFinderLiveGiftNotificationItem, MMFinderLiveGlobalRankSignView, MMFinderLiveLiveRoleSignView, MMFinderLiveNotifyGiftNotificationView, MMFinderLivePkTaskedBonusGiftNotificationIndicatorView, MMLiveScrollNumView, MMUILabel, NSNumberFormatter, NSString, PAGView, RfxPagView, UIImageView, UIView;

@interface MMLiveRewardGiftNotificationView
{
    _Bool _isUseRfxPagView;
    _Bool _isMultiRecipentMode;
    MMFinderLiveGiftNotificationItem *_giftNotificationItem;
    unsigned long long _slot;
    unsigned long long _layoutMode;
    CDUnknownBlockType _didTapBlock;
    UIImageView *_giftImageView;
    PAGView *_giftAnimationView;
    RfxPagView *_giftAnimationRfxView;
    unsigned long long _currentGiftCount;
    MMFinderLiveNotifyGiftNotificationView *_subNotificationView;
    UIView *_gradientBackgroundView;
    CAGradientLayer *_gradientLayer;
    CAGradientLayer *_gradientLayerForOtherAnchor;
    MMUILabel *_nicknameLabel;
    MMUILabel *_descriptionLabel;
    MMUILabel *_giftCountLabel;
    MMUILabel *_giftCountScrollNumPrefixLabel;
    MMLiveScrollNumView *_giftCountScrollNumLabel;
    unsigned long long _growingGiftCount;
    unsigned long long _growingStep;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
    MMFinderLivePkTaskedBonusGiftNotificationIndicatorView *_taskedBonusIndicatorView;
    NSNumberFormatter *_taskedBonusMultiplierFormatter;
    NSString *_viewId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSNumberFormatter *taskedBonusMultiplierFormatter; // @synthesize taskedBonusMultiplierFormatter=_taskedBonusMultiplierFormatter;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusGiftNotificationIndicatorView *taskedBonusIndicatorView; // @synthesize taskedBonusIndicatorView=_taskedBonusIndicatorView;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(nonatomic) _Bool isMultiRecipentMode; // @synthesize isMultiRecipentMode=_isMultiRecipentMode;
@property(nonatomic) unsigned long long growingStep; // @synthesize growingStep=_growingStep;
@property(nonatomic) unsigned long long growingGiftCount; // @synthesize growingGiftCount=_growingGiftCount;
@property(retain, nonatomic) MMLiveScrollNumView *giftCountScrollNumLabel; // @synthesize giftCountScrollNumLabel=_giftCountScrollNumLabel;
@property(retain, nonatomic) MMUILabel *giftCountScrollNumPrefixLabel; // @synthesize giftCountScrollNumPrefixLabel=_giftCountScrollNumPrefixLabel;
@property(retain, nonatomic) MMUILabel *giftCountLabel; // @synthesize giftCountLabel=_giftCountLabel;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayerForOtherAnchor; // @synthesize gradientLayerForOtherAnchor=_gradientLayerForOtherAnchor;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(nonatomic) __weak MMFinderLiveNotifyGiftNotificationView *subNotificationView; // @synthesize subNotificationView=_subNotificationView;
@property(nonatomic) unsigned long long currentGiftCount; // @synthesize currentGiftCount=_currentGiftCount;
@property(retain, nonatomic) RfxPagView *giftAnimationRfxView; // @synthesize giftAnimationRfxView=_giftAnimationRfxView;
@property(retain, nonatomic) PAGView *giftAnimationView; // @synthesize giftAnimationView=_giftAnimationView;
@property(nonatomic) _Bool isUseRfxPagView; // @synthesize isUseRfxPagView=_isUseRfxPagView;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(copy, nonatomic) CDUnknownBlockType didTapBlock; // @synthesize didTapBlock=_didTapBlock;
@property(nonatomic) unsigned long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property(nonatomic) unsigned long long slot; // @synthesize slot=_slot;
@property(retain, nonatomic) MMFinderLiveGiftNotificationItem *giftNotificationItem; // @synthesize giftNotificationItem=_giftNotificationItem;
- (_Bool)checkIsUnablePlayGiftAnimationForNewCustomizePowerLimit;
- (_Bool)checkIsUnablePlayGiftAnimationForPagPerfState;
- (void)stopGiftAnimationView;
- (void)stopGiftAnimationRfxView;
- (void)tryStopGiftAnimationForPagPerfState;
- (void)onPagPerfTargetViewStateChange:(_Bool)arg1 perfMode:(long long)arg2 statistics:(id)arg3;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)handleTapGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) UIView *currGiftAnimatingView;
- (id)finderLiveTask;
- (_Bool)useStandardLayout;
- (id)giftCountLabelFont;
- (long long)getGiftNotificationUIStyle;
- (long long)getFansGroupUIStyle;
- (long long)getGlobalRankSignUIStyle;
- (_Bool)needDisplayFansGroupRank;
- (_Bool)needEstimateWidth;
- (id)getMysteriousBadge;
- (_Bool)needDisplayMysterious;
- (_Bool)needDisplayGlobalRank;
- (void)countLabelDanceAnimation:(double)arg1;
- (void)stopGiftAnimation;
- (void)playGiftAnimation;
- (void)loadAndPlayGiftAnimationWithRfxPagFile:(id)arg1;
- (void)createGiftAnimationRfxPagView;
- (void)loadAndPlayGiftAnimationWithPAGFile:(id)arg1;
- (void)createGiftAnimationPagView;
- (void)startCountLabelDance;
- (void)showExtraGiftValue:(unsigned long long)arg1;
- (void)updateFromGitfCount:(unsigned long long)arg1 toGitfCount:(unsigned long long)arg2 extraValueItems:(id)arg3;
- (void)updateGitfCountScrollNum:(unsigned long long)arg1;
- (void)internalUpdateGitfCount:(unsigned long long)arg1;
- (void)updateWithNotificationItem:(id)arg1;
- (_Bool)updateBackgroundGradientColorForTeamPkIfNeed;
- (void)updateLabelFont;
- (void)layoutTaskedBounusIndicatorView;
- (void)layoutInCompactMode;
- (void)layoutInRegularMode;
- (void)layoutInLineBreakMode;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isMultiRecipentMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

