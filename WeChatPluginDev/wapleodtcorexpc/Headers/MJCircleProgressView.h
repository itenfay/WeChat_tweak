//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, UIColor;

@interface MJCircleProgressView : CALayer
{
    double _progress;
    double _lineWidth;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    CAShapeLayer *_progressLayer;
    CALayer *_progressBackgroundLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *progressBackgroundLayer; // @synthesize progressBackgroundLayer=_progressBackgroundLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)updateProgressLayerWithProgress:(double)arg1 animated:(_Bool)arg2;
- (id)circleLayerWithRect:(struct CGRect)arg1 startAngle:(double)arg2 endAngle:(double)arg3 lineWidth:(double)arg4;
- (void)hideProgressLayer;
- (void)showProgressLayer;

@end

