//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCGesturePoint
{
    double _x;
    double _y;
}

+ (id)gesturePointWithCGPoint:(struct CGPoint)arg1;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (double)distanceTo:(id)arg1;

@end

