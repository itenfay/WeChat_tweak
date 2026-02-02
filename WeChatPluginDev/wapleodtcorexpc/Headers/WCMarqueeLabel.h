//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, NSString, UIColor, UIFont, UILabel;

@interface WCMarqueeLabel : UIView
{
    _Bool _showGradientLayerAnimation;
    _Bool _disableAutoPlayAnimation;
    _Bool _isPendingRebuildAnimation;
    _Bool _shouldStopAnimation;
    _Bool _isAnimating;
    _Bool _needResetFromValueToDefault;
    unsigned int _repeatCount;
    NSString *_text;
    UIColor *_textColor;
    UIFont *_font;
    double _spacing;
    double _speed;
    double _startMargin;
    double _marqueeMaxWidth;
    double _leftGradientWidth;
    double _rightGradientWidth;
    UIView *_containerView;
    UILabel *_textLabel1;
    UILabel *_textLabel2;
    double _animationValue;
    CAGradientLayer *_gradientLayer;
    NSArray *_gradientColors;
    NSArray *_locations;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needResetFromValueToDefault; // @synthesize needResetFromValueToDefault=_needResetFromValueToDefault;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) double animationValue; // @synthesize animationValue=_animationValue;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool shouldStopAnimation; // @synthesize shouldStopAnimation=_shouldStopAnimation;
@property(nonatomic) _Bool isPendingRebuildAnimation; // @synthesize isPendingRebuildAnimation=_isPendingRebuildAnimation;
@property(retain, nonatomic) UILabel *textLabel2; // @synthesize textLabel2=_textLabel2;
@property(retain, nonatomic) UILabel *textLabel1; // @synthesize textLabel1=_textLabel1;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool disableAutoPlayAnimation; // @synthesize disableAutoPlayAnimation=_disableAutoPlayAnimation;
@property(nonatomic) _Bool showGradientLayerAnimation; // @synthesize showGradientLayerAnimation=_showGradientLayerAnimation;
@property(nonatomic) double rightGradientWidth; // @synthesize rightGradientWidth=_rightGradientWidth;
@property(nonatomic) double leftGradientWidth; // @synthesize leftGradientWidth=_leftGradientWidth;
@property(nonatomic) double marqueeMaxWidth; // @synthesize marqueeMaxWidth=_marqueeMaxWidth;
@property(nonatomic) double startMargin; // @synthesize startMargin=_startMargin;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) unsigned int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hideGradientLayer;
- (void)rebuildGradientLayer;
@property(readonly, nonatomic) _Bool needAnimating;
- (id)animationFakeLocations;
- (id)animationFakeColors;
- (void)internalStartGradientLayer:(id)arg1 endColor:(id)arg2 startLocation:(id)arg3 endLocation:(id)arg4;
- (_Bool)checkGradientLayerLogic;
- (void)startGradientHideAnimation;
- (void)startGradientShowAnimation;
- (void)stopAnimation;
- (void)p_startContainerViewAnimation:(unsigned int)arg1;
- (void)startAnimation;
- (void)rebuildAnimationIfNeeded:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (void)didReceiveDidEnterBackgroundNotification;
- (void)didReceiveDidBecomeActiveNotification;
- (void)triggerStartAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

