//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer;

@interface WCAdInteractionArcProgressView
{
    double _currentProgress;
    CAShapeLayer *_progressArcLayer;
    CAShapeLayer *_progressDotLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *progressDotLayer; // @synthesize progressDotLayer=_progressDotLayer;
@property(retain, nonatomic) CAShapeLayer *progressArcLayer; // @synthesize progressArcLayer=_progressArcLayer;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
- (void)updateProgressWith:(double)arg1;
- (void)organizeSubContentViews;

@end

