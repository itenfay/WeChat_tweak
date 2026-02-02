//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class NSArray, UIImageView, UIView;
@protocol MMStepSliderDelegate;

@interface MMStepSlider : UIControl
{
    _Bool _sliderOn;
    UIImageView *_sliderImageView;
    UIView *_trackViewNormal;
    unsigned int _value;
    unsigned int _stepCount;
    id <MMStepSliderDelegate> m_delegate;
    NSArray *_scaleTextArray;
    NSArray *_scaleTextSizeArray;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *scaleTextSizeArray; // @synthesize scaleTextSizeArray=_scaleTextSizeArray;
@property(readonly, nonatomic) NSArray *scaleTextArray; // @synthesize scaleTextArray=_scaleTextArray;
@property(nonatomic) __weak id <MMStepSliderDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) unsigned int stepCount; // @synthesize stepCount=_stepCount;
@property(nonatomic) unsigned int value; // @synthesize value=_value;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)touchTrackNormalView:(long long)arg1;
- (float)xForValue:(unsigned int)arg1;
- (id)genScaleLabel:(id)arg1 size:(double)arg2;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithWidth:(double)arg1 TextArray:(id)arg2 TextSizeArray:(id)arg3;

@end

