//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;
@protocol MMCircleProgressViewDelegate;

@interface MMCircleProgressView : UIView
{
    id <MMCircleProgressViewDelegate> _delegate;
    UIColor *_finishedColor;
    UIColor *_unfinishedColor;
    CAShapeLayer *_unfinishedShapeLayer;
    CAShapeLayer *_finishedShapeLayer;
    CAShapeLayer *_leftShapeLayer;
    CAShapeLayer *_rightShapeLayer;
    double _lineWidth;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) CAShapeLayer *rightShapeLayer; // @synthesize rightShapeLayer=_rightShapeLayer;
@property(retain, nonatomic) CAShapeLayer *leftShapeLayer; // @synthesize leftShapeLayer=_leftShapeLayer;
@property(retain, nonatomic) CAShapeLayer *finishedShapeLayer; // @synthesize finishedShapeLayer=_finishedShapeLayer;
@property(retain, nonatomic) CAShapeLayer *unfinishedShapeLayer; // @synthesize unfinishedShapeLayer=_unfinishedShapeLayer;
@property(retain, nonatomic) UIColor *unfinishedColor; // @synthesize unfinishedColor=_unfinishedColor;
@property(retain, nonatomic) UIColor *finishedColor; // @synthesize finishedColor=_finishedColor;
@property(nonatomic) __weak id <MMCircleProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidTapped:(id)arg1;
- (double)getCurrentProgress;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

