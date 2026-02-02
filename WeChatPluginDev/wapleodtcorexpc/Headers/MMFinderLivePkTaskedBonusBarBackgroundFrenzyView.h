//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternAnimationView, MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternView, MMLiveGradientLayerView, UIImageView, UIView;

@interface MMFinderLivePkTaskedBonusBarBackgroundFrenzyView
{
    double _relativeHorizontalShinePosition;
    UIView *_patternContainerView;
    MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternAnimationView *_patternAnimationView;
    MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternView *_patternView;
    MMLiveGradientLayerView *_topBorderView;
    MMLiveGradientLayerView *_bottomBorderView;
    UIImageView *_shineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *shineView; // @synthesize shineView=_shineView;
@property(retain, nonatomic) MMLiveGradientLayerView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(retain, nonatomic) MMLiveGradientLayerView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternView *patternView; // @synthesize patternView=_patternView;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternAnimationView *patternAnimationView; // @synthesize patternAnimationView=_patternAnimationView;
@property(retain, nonatomic) UIView *patternContainerView; // @synthesize patternContainerView=_patternContainerView;
@property(nonatomic) double relativeHorizontalShinePosition; // @synthesize relativeHorizontalShinePosition=_relativeHorizontalShinePosition;
- (void)stopPatternAnimation;
- (void)startPatternAnimation;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
@property(nonatomic) _Bool shineViewHidden;
- (id)initWithFrame:(struct CGRect)arg1;

@end

