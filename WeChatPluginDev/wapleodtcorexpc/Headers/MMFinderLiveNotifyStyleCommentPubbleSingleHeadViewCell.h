//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, CALayer, MMFinderLiveFansGroupSignView, MMFinderLiveGlobalRankSignView, MMFinderLiveLiveRoleSignView, MMFinderLiveNormalTextSignView, MMUIImageView, MMUILabel, MMUIView, NSArray, NSMutableArray, NSString, UIImageView, UIView;

@interface MMFinderLiveNotifyStyleCommentPubbleSingleHeadViewCell
{
    _Bool _isGradientOnlyOnXAxis;
    _Bool _canLayout;
    unsigned int _lastRank;
    unsigned int _lastMsgSubtype;
    unsigned long long _badgeSignCnt;
    MMUIView *_colorBackView;
    CAGradientLayer *_borderGradientLayer;
    CAGradientLayer *_gradientLayer;
    CALayer *_colorLayer;
    MMUILabel *_invisiableSignLabel;
    MMUIView *_invisiableSignView;
    MMUILabel *_signLabel;
    MMUIView *_signBackView;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    MMFinderLiveNormalTextSignView *_buySignView;
    MMFinderLiveNormalTextSignView *_frequentWatchSignView;
    MMFinderLiveNormalTextSignView *_followerSignView;
    MMUILabel *_glorySignLabel;
    MMUIImageView *_glorySignView;
    UIImageView *_arrowImageView;
    UIView *_shineAnimationView;
    UIView *_shineAnimationContainerView;
    NSMutableArray *_shiningStarImageViews;
    NSArray *_shiningConfigArray;
    CALayer *_borderShineLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *borderShineLayer; // @synthesize borderShineLayer=_borderShineLayer;
@property(retain, nonatomic) NSArray *shiningConfigArray; // @synthesize shiningConfigArray=_shiningConfigArray;
@property(retain, nonatomic) NSMutableArray *shiningStarImageViews; // @synthesize shiningStarImageViews=_shiningStarImageViews;
@property(nonatomic) _Bool canLayout; // @synthesize canLayout=_canLayout;
@property(retain, nonatomic) UIView *shineAnimationContainerView; // @synthesize shineAnimationContainerView=_shineAnimationContainerView;
@property(retain, nonatomic) UIView *shineAnimationView; // @synthesize shineAnimationView=_shineAnimationView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) unsigned int lastMsgSubtype; // @synthesize lastMsgSubtype=_lastMsgSubtype;
@property(nonatomic) unsigned int lastRank; // @synthesize lastRank=_lastRank;
@property(retain, nonatomic) MMUIImageView *glorySignView; // @synthesize glorySignView=_glorySignView;
@property(retain, nonatomic) MMUILabel *glorySignLabel; // @synthesize glorySignLabel=_glorySignLabel;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *followerSignView; // @synthesize followerSignView=_followerSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *frequentWatchSignView; // @synthesize frequentWatchSignView=_frequentWatchSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *buySignView; // @synthesize buySignView=_buySignView;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(retain, nonatomic) MMUIView *signBackView; // @synthesize signBackView=_signBackView;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) MMUIView *invisiableSignView; // @synthesize invisiableSignView=_invisiableSignView;
@property(retain, nonatomic) MMUILabel *invisiableSignLabel; // @synthesize invisiableSignLabel=_invisiableSignLabel;
@property(nonatomic) _Bool isGradientOnlyOnXAxis; // @synthesize isGradientOnlyOnXAxis=_isGradientOnlyOnXAxis;
@property(retain, nonatomic) CALayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAGradientLayer *borderGradientLayer; // @synthesize borderGradientLayer=_borderGradientLayer;
@property(retain, nonatomic) MMUIView *colorBackView; // @synthesize colorBackView=_colorBackView;
@property(nonatomic) unsigned long long badgeSignCnt; // @synthesize badgeSignCnt=_badgeSignCnt;
- (id)getSelfAccessibility;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)runBorderShineAnimationIfNeeded;
- (void)stopGlobalRankShineAnimation;
- (void)doShineAnimation;
- (void)doScaleAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldRunCustomAnimation;
- (void)startGlobalRankAnimationIfNeeded;
- (void)runCustomExitAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)runCustomEnterAnimation;
- (void)scheduleShiningStartAnimationWithImageView:(id)arg1 config:(id)arg2 startsNow:(_Bool)arg3;
- (void)setupShiningStarAnimationIfNeeded;
- (void)willDisplay;
- (void)onTap;
- (void)createColorBackView;
- (void)createColorLayer;
- (_Bool)shouldShowSuperfanBorder;
- (void)updateBorderGradientLayerMask;
- (struct CGRect)borderGradientLayerFrame;
- (double)getBorderGradientLineWidth;
- (void)createBorderGradientLayer;
- (void)createGradientLayer;
- (void)updateBackgroundLayers;
- (void)setupBackgroundColor:(id)arg1 colorLayerBackgroundColor:(id)arg2 gradientFromColor:(id)arg3 toColor:(id)arg4 borderGradientFromColor:(id)arg5 borderGradientToColor:(id)arg6 textColor:(id)arg7;
- (void)setupBackgroundColor:(id)arg1 colorLayerBackgroundColor:(id)arg2 gradientFromColor:(id)arg3 toColor:(id)arg4 textColor:(id)arg5;
- (void)clearBackgroundLayers;
- (id)finderLiveTask;
- (void)updateCommentLabelOrigin;
- (void)updateFirstLineLabelTop:(id)arg1;
- (void)updateLabelsOrigin;
- (void)updateArrowImageViewOrigin;
- (void)layoutArrowImageView;
- (void)layoutNickLabel;
- (void)layoutCommentLabel;
- (id)getGloryBG;
- (void)layoutFollowerSignView;
- (void)layoutFrequentWatchSignView;
- (void)layoutBuySignView;
- (void)layoutGlorySignView;
- (void)layoutFansGroupSignView;
- (void)layoutGlobalRankSignView;
- (void)layoutSignLabel;
- (void)layoutMysteriousSignView;
- (void)layoutInvisiableSignLabel;
- (double)maxCornerRadius;
- (id)signText;
- (_Bool)isUITypeValid;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateBackGroundColor;
- (id)initWithCellFrame:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

