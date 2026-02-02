//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class CAGradientLayer, CALayer, CATextLayer, MJGradientConfiguration, UIColor, UIFont, UIImage;
@protocol MJPublisherSliderAccessibilityDelegate;

@interface MJPublisherSlider : UIControl
{
    _Bool _continuous;
    _Bool _isRelativeTracking;
    _Bool _trackInteractionEnabled;
    _Bool _isThumbTracking;
    float _value;
    float _minimumValue;
    float _maximumValue;
    float _initialTrackingValue;
    float _baseValue;
    UIColor *_minimumTrackTintColor;
    UIColor *_maximumTrackTintColor;
    MJGradientConfiguration *_minimumTrackGradient;
    MJGradientConfiguration *_maximumTrackGradient;
    MJGradientConfiguration *_trackGradient;
    UIImage *_minimumValueImage;
    UIImage *_maximumValueImage;
    double _thickness;
    double _thumbSize;
    UIColor *_thumbColor;
    UIColor *_valueTextColor;
    UIFont *_valueTextFont;
    id <MJPublisherSliderAccessibilityDelegate> _accessibilityDelegate;
    CALayer *_sliderLayer;
    CALayer *_trackLayer;
    CALayer *_minimumTrackLayer;
    CALayer *_maximumTrackLayer;
    CAGradientLayer *_minimumTrackGradientLayer;
    CAGradientLayer *_maximumTrackGradientLayer;
    CAGradientLayer *_overrideTrackGradientLayer;
    CALayer *_thumbLayer;
    CALayer *_minimumImageLayer;
    CALayer *_maximumImageLayer;
    double _trackPaddingWithImage;
    CATextLayer *_textLayer;
    struct UIEdgeInsets _touchEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(nonatomic) double trackPaddingWithImage; // @synthesize trackPaddingWithImage=_trackPaddingWithImage;
@property(retain, nonatomic) CALayer *maximumImageLayer; // @synthesize maximumImageLayer=_maximumImageLayer;
@property(retain, nonatomic) CALayer *minimumImageLayer; // @synthesize minimumImageLayer=_minimumImageLayer;
@property(retain, nonatomic) CALayer *thumbLayer; // @synthesize thumbLayer=_thumbLayer;
@property(retain, nonatomic) CAGradientLayer *overrideTrackGradientLayer; // @synthesize overrideTrackGradientLayer=_overrideTrackGradientLayer;
@property(retain, nonatomic) CAGradientLayer *maximumTrackGradientLayer; // @synthesize maximumTrackGradientLayer=_maximumTrackGradientLayer;
@property(retain, nonatomic) CAGradientLayer *minimumTrackGradientLayer; // @synthesize minimumTrackGradientLayer=_minimumTrackGradientLayer;
@property(retain, nonatomic) CALayer *maximumTrackLayer; // @synthesize maximumTrackLayer=_maximumTrackLayer;
@property(retain, nonatomic) CALayer *minimumTrackLayer; // @synthesize minimumTrackLayer=_minimumTrackLayer;
@property(retain, nonatomic) CALayer *trackLayer; // @synthesize trackLayer=_trackLayer;
@property(retain, nonatomic) CALayer *sliderLayer; // @synthesize sliderLayer=_sliderLayer;
@property(nonatomic) float baseValue; // @synthesize baseValue=_baseValue;
@property(nonatomic) float initialTrackingValue; // @synthesize initialTrackingValue=_initialTrackingValue;
@property(nonatomic) _Bool isThumbTracking; // @synthesize isThumbTracking=_isThumbTracking;
@property(nonatomic) __weak id <MJPublisherSliderAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(retain, nonatomic) UIFont *valueTextFont; // @synthesize valueTextFont=_valueTextFont;
@property(retain, nonatomic) UIColor *valueTextColor; // @synthesize valueTextColor=_valueTextColor;
@property(nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
@property(nonatomic) _Bool trackInteractionEnabled; // @synthesize trackInteractionEnabled=_trackInteractionEnabled;
@property(nonatomic) _Bool isRelativeTracking; // @synthesize isRelativeTracking=_isRelativeTracking;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(retain, nonatomic) UIColor *thumbColor; // @synthesize thumbColor=_thumbColor;
@property(nonatomic) double thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) double thickness; // @synthesize thickness=_thickness;
@property(retain, nonatomic) UIImage *maximumValueImage; // @synthesize maximumValueImage=_maximumValueImage;
@property(retain, nonatomic) UIImage *minimumValueImage; // @synthesize minimumValueImage=_minimumValueImage;
@property(retain, nonatomic) MJGradientConfiguration *trackGradient; // @synthesize trackGradient=_trackGradient;
@property(retain, nonatomic) MJGradientConfiguration *maximumTrackGradient; // @synthesize maximumTrackGradient=_maximumTrackGradient;
@property(retain, nonatomic) MJGradientConfiguration *minimumTrackGradient; // @synthesize minimumTrackGradient=_minimumTrackGradient;
@property(retain, nonatomic) UIColor *maximumTrackTintColor; // @synthesize maximumTrackTintColor=_maximumTrackTintColor;
@property(retain, nonatomic) UIColor *minimumTrackTintColor; // @synthesize minimumTrackTintColor=_minimumTrackTintColor;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)showValue;
- (void)hideValue;
- (void)updateThumbPosition:(_Bool)arg1;
- (float)valueForTouchPoint:(struct CGPoint)arg1 withTrackRect:(struct CGRect)arg2;
- (void)updateValueWithTouch:(id)arg1;
- (void)tintColorDidChange;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)slidingRectForTrackRect:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)sliderRectForBounds:(struct CGRect)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

