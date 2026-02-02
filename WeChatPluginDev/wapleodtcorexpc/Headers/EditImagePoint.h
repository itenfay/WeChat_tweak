//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface EditImagePoint : NSObject
{
    struct CGPoint _point;
    UIColor *_color;
    double _angle;
}

- (void).cxx_destruct;
- (double)getAngle;
- (id)getColor;
- (struct CGPoint)getCGPoint;
- (id)initWithCGPoint:(struct CGPoint)arg1 withColor:(id)arg2 withRotation:(double)arg3;
- (id)initWithCGPoint:(struct CGPoint)arg1;

@end

