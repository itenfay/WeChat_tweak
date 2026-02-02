//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer;

@interface WCAdInteractionArcProgressWithArrowView
{
    double _currentProgress;
    CAShapeLayer *_progressArcLayer;
    CAShapeLayer *_progressTriangleLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *progressTriangleLayer; // @synthesize progressTriangleLayer=_progressTriangleLayer;
@property(retain, nonatomic) CAShapeLayer *progressArcLayer; // @synthesize progressArcLayer=_progressArcLayer;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
- (void)updateProgressWith:(double)arg1;
- (void)organizeSubContentViews;

@end

