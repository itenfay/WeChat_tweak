//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAAnimation, CAGradientLayer, CALayer, MMFinderLiveTask, MMUILabel, NSArray, NSMutableArray, NSString, UIFont, UIImageView;

@interface MMFinderLiveGlobalRankSignView : UIView
{
    _Bool _isCustomizedAccessibilityLabel;
    _Bool _forbidHaloEffectAnimation;
    _Bool _customDraw;
    _Bool _forceLayout;
    _Bool _isHaloAnimating;
    _Bool _isUpHaloStarAnimating;
    _Bool _isDownHaloStarAnimating;
    _Bool _isHaloActualAnimating;
    _Bool _isUpHaloStarActualAnimating;
    _Bool _isDownHaloStarActualAnimating;
    _Bool _isStartHaloEffectAnimation;
    _Bool _isInWindow;
    _Bool _lightMask;
    unsigned int _rank;
    UIFont *_signLabelFont;
    long long _uiStyle;
    long long _uiMode;
    UIImageView *_upHaloStarView;
    UIImageView *_downHaloStarView;
    UIView *_haloEffectView;
    UIView *_animatedHaloView;
    UIImageView *_gradientImgView;
    CAGradientLayer *_gradientLayer;
    CALayer *_colorLayer;
    CAGradientLayer *_borderGradientLayer;
    UIImageView *_rankImgView;
    MMUILabel *_signLabel;
    double _currentLayoutFontScale;
    CAAnimation *_haloAnimation;
    CAAnimation *_upHaloStarAnimation;
    CAAnimation *_downHaloStarAnimation;
    NSMutableArray *_shiningStarImageViews;
    NSArray *_shiningConfigArray;
}

+ (double)insetTopForStyle:(long long)arg1;
+ (double)fixHeightForStyle:(long long)arg1;
+ (double)insetRightForStyle:(long long)arg1;
+ (double)insetLeftForStyle:(long long)arg1;
+ (double)signIconHeightForStyle:(long long)arg1;
+ (double)signIconWidthForStyle:(long long)arg1 forRank:(unsigned int)arg2;
+ (id)signLabelFontForStyle:(long long)arg1;
+ (void)configRoundCornerMaskLayerForView:(id)arg1;
+ (void)configRoundCornerHollowMaskLayerForView:(id)arg1 inset:(double)arg2;
+ (double)getSignIconWHPercentWithRank:(unsigned int)arg1;
+ (id)getLightUIModeBackgroundImageWithRank:(unsigned int)arg1;
+ (id)getDarkUIModeBackgroundImageWithRank:(unsigned int)arg1;
+ (id)getRankImageWithRank:(unsigned int)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)getGlobalRankSizeWithRank:(unsigned int)arg1 uiStyle:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *shiningConfigArray; // @synthesize shiningConfigArray=_shiningConfigArray;
@property(retain, nonatomic) NSMutableArray *shiningStarImageViews; // @synthesize shiningStarImageViews=_shiningStarImageViews;
@property(nonatomic) _Bool lightMask; // @synthesize lightMask=_lightMask;
@property(nonatomic) _Bool isInWindow; // @synthesize isInWindow=_isInWindow;
@property(nonatomic) _Bool isStartHaloEffectAnimation; // @synthesize isStartHaloEffectAnimation=_isStartHaloEffectAnimation;
@property(nonatomic) _Bool isDownHaloStarActualAnimating; // @synthesize isDownHaloStarActualAnimating=_isDownHaloStarActualAnimating;
@property(nonatomic) _Bool isUpHaloStarActualAnimating; // @synthesize isUpHaloStarActualAnimating=_isUpHaloStarActualAnimating;
@property(nonatomic) _Bool isHaloActualAnimating; // @synthesize isHaloActualAnimating=_isHaloActualAnimating;
@property(nonatomic) __weak CAAnimation *downHaloStarAnimation; // @synthesize downHaloStarAnimation=_downHaloStarAnimation;
@property(nonatomic) __weak CAAnimation *upHaloStarAnimation; // @synthesize upHaloStarAnimation=_upHaloStarAnimation;
@property(nonatomic) __weak CAAnimation *haloAnimation; // @synthesize haloAnimation=_haloAnimation;
@property(nonatomic) _Bool isDownHaloStarAnimating; // @synthesize isDownHaloStarAnimating=_isDownHaloStarAnimating;
@property(nonatomic) _Bool isUpHaloStarAnimating; // @synthesize isUpHaloStarAnimating=_isUpHaloStarAnimating;
@property(nonatomic) _Bool isHaloAnimating; // @synthesize isHaloAnimating=_isHaloAnimating;
@property(nonatomic) _Bool forceLayout; // @synthesize forceLayout=_forceLayout;
@property(nonatomic) _Bool customDraw; // @synthesize customDraw=_customDraw;
@property(nonatomic) double currentLayoutFontScale; // @synthesize currentLayoutFontScale=_currentLayoutFontScale;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) UIImageView *rankImgView; // @synthesize rankImgView=_rankImgView;
@property(retain, nonatomic) CAGradientLayer *borderGradientLayer; // @synthesize borderGradientLayer=_borderGradientLayer;
@property(retain, nonatomic) CALayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *gradientImgView; // @synthesize gradientImgView=_gradientImgView;
@property(retain, nonatomic) UIView *animatedHaloView; // @synthesize animatedHaloView=_animatedHaloView;
@property(retain, nonatomic) UIView *haloEffectView; // @synthesize haloEffectView=_haloEffectView;
@property(retain, nonatomic) UIImageView *downHaloStarView; // @synthesize downHaloStarView=_downHaloStarView;
@property(retain, nonatomic) UIImageView *upHaloStarView; // @synthesize upHaloStarView=_upHaloStarView;
@property(nonatomic) long long uiMode; // @synthesize uiMode=_uiMode;
@property(nonatomic) long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) UIFont *signLabelFont; // @synthesize signLabelFont=_signLabelFont;
@property(nonatomic) _Bool forbidHaloEffectAnimation; // @synthesize forbidHaloEffectAnimation=_forbidHaloEffectAnimation;
@property(nonatomic) _Bool isCustomizedAccessibilityLabel; // @synthesize isCustomizedAccessibilityLabel=_isCustomizedAccessibilityLabel;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (struct CGPoint)getHaloFinalCenter:(id)arg1;
- (struct CGPoint)getHaloInitCenter:(id)arg1;
- (void)startHaloAnimation;
- (double)getHaloRotateAngle;
- (id)getHaloView;
- (void)createHaloView;
- (void)invokeHaloAnimated;
- (void)clearAnimatedHaloView;
- (void)startDownHaloStarAnimation;
- (void)createDownHaloStarView;
- (void)invokeDownHaloStarAnimated;
- (void)clearAnimatedDownHaloStarView:(_Bool)arg1;
- (void)startUpHaloStarAnimation;
- (void)createUpHaloStarView;
- (void)invokeUpHaloStarAnimated;
- (void)clearAnimatedUpHaloStarView:(_Bool)arg1;
- (void)checkHaloEffectRunning;
- (void)invokeCheckHaloEffectRunning;
- (void)invokeHaloEffectAnimated;
- (void)clearAnimatedHaloEffectViews;
@property(readonly, nonatomic) _Bool isHaloEffectAnimating;
- (void)innerStartHaloEffectAnimationWithDelayTime:(double)arg1;
- (void)checkHaloEffectAnimatingEnd;
- (void)stopHaloEffectAnimated;
- (void)startHaloEffectAnimated;
- (_Bool)enableStartHaloEffectAnimation;
- (unsigned int)haloEffectMinimumRank;
- (void)scheduleShiningStartAnimationWithImageView:(id)arg1 config:(id)arg2 delay:(double)arg3;
- (void)setupShiningStarAnimationIfNeeded;
- (double)getBorderGradientLineWidth;
- (void)updateBorderGradientLayerMask;
- (struct CGRect)borderGradientLayerFrame;
- (void)createBorderGradientLayer;
- (void)createColorLayer;
- (void)createGradientLayer;
- (id)signLabelFontForStyle:(long long)arg1;
- (struct CGPoint)getDownHaloStarEndCenter;
- (struct CGPoint)getDownHaloStarStartCenter;
- (struct CGPoint)getUpHaloStarEndCenter;
- (struct CGPoint)getUpHaloStarStartCenter;
- (id)getHaloEffectInnerBorderColor;
- (double)getHaloEffectInnerBorderWidth;
- (_Bool)needDisplayHaloEffectView;
- (_Bool)needLayoutImmediately;
- (id)getRankImage;
- (id)getSignTextColor;
- (void)updateLayers;
- (id)getColorLayerBGColor;
- (void)updateSignLabelShadow;
- (void)updateRankImgViewShadow;
- (void)updateWidgetSizeIfNeeded;
- (void)updateSelfSize;
- (void)initDefaultLayoutFontScale;
- (void)onAppearanceChanged;
- (void)willMoveToWindow:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *currentLiveTask;
- (id)accessibilityLabel;
- (void)refresh;
- (void)updateLayoutFontScale;
- (void)handleForRankChangedInNextRunLoop;
- (void)updateRank:(unsigned int)arg1;
- (void)updateUIMode:(long long)arg1;
- (void)updateUIStyle:(long long)arg1;
- (void)layoutSignLabel;
- (void)layoutRankImgView;
- (void)layoutGradientImgView;
- (void)updateHaloEffectSize;
- (void)layoutHaloEffectView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2 customDraw:(_Bool)arg3 forceLayout:(_Bool)arg4 useLightMask:(_Bool)arg5;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2 customDraw:(_Bool)arg3 forceLayout:(_Bool)arg4;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

