//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AnimationHelper : NSObject
{
}

+ (struct CGAffineTransform)animationRotateTransformForOrientaion:(long long)arg1;
+ (id)animationPathFrom:(struct CGPoint)arg1 To:(struct CGPoint)arg2 byDuration:(float)arg3;
+ (id)animationBoundsFrom:(struct CGRect)arg1 To:(struct CGRect)arg2 byDuration:(float)arg3;
+ (id)animationPositionFrom:(struct CGPoint)arg1 To:(struct CGPoint)arg2 byDuration:(float)arg3;
+ (id)animationAlphaFrom:(float)arg1 To:(float)arg2 byDuration:(float)arg3;
+ (id)animationScaleFrom:(float)arg1 To:(float)arg2 byDuration:(float)arg3;
+ (id)animationScaleYFrom:(float)arg1 To:(float)arg2 byDuration:(float)arg3;
+ (id)animationScaleXFrom:(float)arg1 To:(float)arg2 byDuration:(float)arg3;
+ (id)animationRotateBy:(float)arg1 andDuration:(float)arg2;
+ (id)animationRockAlphaBy:(float)arg1 andDuration:(float)arg2;
+ (id)animationRockScaleBy:(float)arg1 andDuration:(float)arg2;
+ (id)animationRockRotateBy:(float)arg1 andDuration:(float)arg2;

@end

