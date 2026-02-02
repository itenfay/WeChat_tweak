//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIBezierPath, UIColor;
@protocol MMLiveCircleProgressViewDelegate;

@interface MMLiveCircleProgressView : UIView
{
    UIColor *_finishedColor;
    UIColor *_unfinishedColor;
    CAShapeLayer *_backGroundLayer;
    CAShapeLayer *_frontFillLayer;
    UIBezierPath *_backGroundBezierPath;
    UIBezierPath *_frontFillBezierPath;
    double _lineWidth;
    double _progressValue;
    id <MMLiveCircleProgressViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveCircleProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double progressValue; // @synthesize progressValue=_progressValue;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIBezierPath *frontFillBezierPath; // @synthesize frontFillBezierPath=_frontFillBezierPath;
@property(retain, nonatomic) UIBezierPath *backGroundBezierPath; // @synthesize backGroundBezierPath=_backGroundBezierPath;
@property(retain, nonatomic) CAShapeLayer *frontFillLayer; // @synthesize frontFillLayer=_frontFillLayer;
@property(retain, nonatomic) CAShapeLayer *backGroundLayer; // @synthesize backGroundLayer=_backGroundLayer;
@property(retain, nonatomic) UIColor *unfinishedColor; // @synthesize unfinishedColor=_unfinishedColor;
@property(retain, nonatomic) UIColor *finishedColor; // @synthesize finishedColor=_finishedColor;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

