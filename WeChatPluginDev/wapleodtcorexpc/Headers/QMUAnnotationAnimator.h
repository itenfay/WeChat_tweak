//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QMUAnnotationAnimator : NSObject
{
}

+ (void)setTranslation:(id)arg1 withPoint:(int)arg2 andRatio:(float)arg3 andLeftTime:(double)arg4;
+ (void)setAnimation:(id)arg1 withLeftTime:(double)arg2;
+ (void)setTranslation:(id)arg1 withPoint:(int)arg2 andRatio:(float)arg3;
+ (void)translateWithAnnotationView:(id)arg1 rotationView:(id)arg2 locations:(id)arg3 duration:(double)arg4 rotateEnabled:(_Bool)arg5 distanceFilter:(double)arg6 translationCallback:(CDUnknownBlockType)arg7;
+ (void)translateWithAnnotationView:(id)arg1 locations:(id)arg2 duration:(double)arg3 rotateEnabled:(_Bool)arg4;

@end

