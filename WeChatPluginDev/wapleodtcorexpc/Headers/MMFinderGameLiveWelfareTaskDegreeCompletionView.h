//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIBezierPath;

@interface MMFinderGameLiveWelfareTaskDegreeCompletionView : UIView
{
    double _progress;
    CAShapeLayer *_backGroundLayer;
    CAShapeLayer *_frontFillLayer;
    UIBezierPath *_backGroundBezierPath;
    UIBezierPath *_frontFillBezierPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBezierPath *frontFillBezierPath; // @synthesize frontFillBezierPath=_frontFillBezierPath;
@property(retain, nonatomic) UIBezierPath *backGroundBezierPath; // @synthesize backGroundBezierPath=_backGroundBezierPath;
@property(retain, nonatomic) CAShapeLayer *frontFillLayer; // @synthesize frontFillLayer=_frontFillLayer;
@property(retain, nonatomic) CAShapeLayer *backGroundLayer; // @synthesize backGroundLayer=_backGroundLayer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

