//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSArray, UIColor, UIImage, UIImageView;

@interface MMCircularProgressView : UIView
{
    _Bool _clockwise;
    int _lineCapStyle;
    UIColor *_fillColor;
    UIColor *_progressColor;
    UIImage *_progressImage;
    CDUnknownBlockType _progressTimingFunction;
    UIImage *_borderImage;
    double _edgeRatio;
    double _innerPadding;
    UIImageView *_borderImageView;
    NSArray *_steps;
    double _max;
    double _min;
    double _current;
    double _animationStep;
    MMTimer *_animationTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) double animationStep; // @synthesize animationStep=_animationStep;
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) double current; // @synthesize current=_current;
@property(nonatomic) double min; // @synthesize min=_min;
@property(nonatomic) double max; // @synthesize max=_max;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) UIImageView *borderImageView; // @synthesize borderImageView=_borderImageView;
@property(nonatomic) int lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property(nonatomic) double innerPadding; // @synthesize innerPadding=_innerPadding;
@property(nonatomic) double edgeRatio; // @synthesize edgeRatio=_edgeRatio;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
@property(copy, nonatomic) CDUnknownBlockType progressTimingFunction; // @synthesize progressTimingFunction=_progressTimingFunction;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateAnimation;
- (void)stopAnimation;
- (void)startAnimationWithDuration:(double)arg1;
- (_Bool)orientation;
- (double)maxValue;
- (double)currentValue;
- (void)setIncrementalSteps:(id)arg1;
- (void)setOrientation:(_Bool)arg1;
- (void)setCurrentValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)incrementBy:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

