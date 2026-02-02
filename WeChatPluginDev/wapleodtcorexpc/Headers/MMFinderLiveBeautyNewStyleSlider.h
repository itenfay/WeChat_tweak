//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMLiveBeautySlider, UILabel, UITapGestureRecognizer;

@interface MMFinderLiveBeautyNewStyleSlider : UIView
{
    _Bool _disableDrag;
    _Bool _hideProgressTip;
    _Bool _disableProgressLabelZoomingMoveVertical;
    _Bool _isZoom;
    _Bool _impactOnReachingDefault;
    float _defaultValue;
    int _minValue;
    int _maxValue;
    SEL _valueChangedAction;
    id _valueChangedTarget;
    SEL _touchUpAction;
    id _touchUpTarget;
    SEL _touchDownAction;
    id _touchDownTarget;
    CDUnknownBlockType _disableDragStatusClickAction;
    MMLiveBeautySlider *_sliderView;
    UIView *_backgroundView;
    UIView *_backgroundStripe;
    UIView *_backgroundProgressStripe;
    UIView *_backgroundDefaultValueDot;
    UILabel *_progressTipLabel;
    CAGradientLayer *_gradientLayer;
    UITapGestureRecognizer *_disableDragStatusHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool impactOnReachingDefault; // @synthesize impactOnReachingDefault=_impactOnReachingDefault;
@property(nonatomic) _Bool isZoom; // @synthesize isZoom=_isZoom;
@property(retain, nonatomic) UITapGestureRecognizer *disableDragStatusHandler; // @synthesize disableDragStatusHandler=_disableDragStatusHandler;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *progressTipLabel; // @synthesize progressTipLabel=_progressTipLabel;
@property(retain, nonatomic) UIView *backgroundDefaultValueDot; // @synthesize backgroundDefaultValueDot=_backgroundDefaultValueDot;
@property(retain, nonatomic) UIView *backgroundProgressStripe; // @synthesize backgroundProgressStripe=_backgroundProgressStripe;
@property(retain, nonatomic) UIView *backgroundStripe; // @synthesize backgroundStripe=_backgroundStripe;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMLiveBeautySlider *sliderView; // @synthesize sliderView=_sliderView;
@property(copy, nonatomic) CDUnknownBlockType disableDragStatusClickAction; // @synthesize disableDragStatusClickAction=_disableDragStatusClickAction;
@property(nonatomic) _Bool disableProgressLabelZoomingMoveVertical; // @synthesize disableProgressLabelZoomingMoveVertical=_disableProgressLabelZoomingMoveVertical;
@property(nonatomic) _Bool hideProgressTip; // @synthesize hideProgressTip=_hideProgressTip;
@property(nonatomic) _Bool disableDrag; // @synthesize disableDrag=_disableDrag;
@property(nonatomic) __weak id touchDownTarget; // @synthesize touchDownTarget=_touchDownTarget;
@property(nonatomic) SEL touchDownAction; // @synthesize touchDownAction=_touchDownAction;
@property(nonatomic) __weak id touchUpTarget; // @synthesize touchUpTarget=_touchUpTarget;
@property(nonatomic) SEL touchUpAction; // @synthesize touchUpAction=_touchUpAction;
@property(nonatomic) __weak id valueChangedTarget; // @synthesize valueChangedTarget=_valueChangedTarget;
@property(nonatomic) SEL valueChangedAction; // @synthesize valueChangedAction=_valueChangedAction;
@property(nonatomic) int maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) int minValue; // @synthesize minValue=_minValue;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) float valueInRange;
@property(nonatomic) float value;
- (void)onSliderTouchCancel:(id)arg1;
- (void)onSliderTouchDown:(id)arg1;
- (void)onSliderTouchUp:(id)arg1;
- (void)onSliderValueChanged:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onDisableDragStatusClick;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)addEndTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutBackgroundProgressStripe;
- (void)layoutProgressTipLabel;
- (void)layoutSubviews;
- (double)sliderInnerPadding;
- (id)initWithFrame:(struct CGRect)arg1;

@end

