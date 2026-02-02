//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCEditPanGestureLowPassFilter
{
    double _factor;
    struct CGPoint _lastPoint;
}

@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) double factor; // @synthesize factor=_factor;
- (void)clearData;
- (struct CGPoint)filterWithMeasurePoint:(struct CGPoint)arg1;
- (id)init;

@end

