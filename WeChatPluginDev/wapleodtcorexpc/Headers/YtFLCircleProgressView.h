//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CATextLayer, NSString, UIColor, UIFont;

@interface YtFLCircleProgressView : UIView
{
    double _startAngle;
    UIColor *_trackColor;
    double _lineWidth;
    UIColor *_progressColor;
    NSString *_progressLineCap;
    double _progress;
    NSString *_contentText;
    UIColor *_contentTextColor;
    UIFont *_contentTextFont;
    CAShapeLayer *_circleBackgroundLayer;
    CAShapeLayer *_progressLayer;
    CATextLayer *_contentTextLayer;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) CATextLayer *contentTextLayer; // @synthesize contentTextLayer=_contentTextLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *circleBackgroundLayer; // @synthesize circleBackgroundLayer=_circleBackgroundLayer;
@property(retain, nonatomic) UIFont *contentTextFont; // @synthesize contentTextFont=_contentTextFont;
@property(retain, nonatomic) UIColor *contentTextColor; // @synthesize contentTextColor=_contentTextColor;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *progressLineCap; // @synthesize progressLineCap=_progressLineCap;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *trackColor; // @synthesize trackColor=_trackColor;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
- (void)stopLoading;
- (void)startLoading;
- (struct CGSize)fl_sizeString:(id)arg1 font:(id)arg2 constrainedSize:(struct CGSize)arg3 mode:(long long)arg4;
- (void)fl_drawContentTextLayer;
- (void)fl_drawProgressLayer;
- (void)fl_drawCircleBackgroundLayer;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)init;

@end

