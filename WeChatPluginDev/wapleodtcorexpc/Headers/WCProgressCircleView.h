//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface WCProgressCircleView : UIView
{
    long long _stepMode;
    double _progressBorderWidth;
    UIColor *_progressFrontColor;
    UIColor *_progressBackColor;
    CAShapeLayer *_progressBackShapeLayer;
    CAShapeLayer *_progressFrontShapeLayer;
    double _currentProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) CAShapeLayer *progressFrontShapeLayer; // @synthesize progressFrontShapeLayer=_progressFrontShapeLayer;
@property(retain, nonatomic) CAShapeLayer *progressBackShapeLayer; // @synthesize progressBackShapeLayer=_progressBackShapeLayer;
@property(retain, nonatomic) UIColor *progressBackColor; // @synthesize progressBackColor=_progressBackColor;
@property(retain, nonatomic) UIColor *progressFrontColor; // @synthesize progressFrontColor=_progressFrontColor;
@property(nonatomic) double progressBorderWidth; // @synthesize progressBorderWidth=_progressBorderWidth;
@property(nonatomic) long long stepMode; // @synthesize stepMode=_stepMode;
- (void)initView;
- (void)resetDefaultStyle;
- (void)resizeView;
- (double)_getValidProgressFrom:(double)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)resetProgress;
- (double)progress;
- (void)setProgress:(double)arg1;
- (void)setInfinityWithProgress:(double)arg1;
- (void)setInfinity;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

