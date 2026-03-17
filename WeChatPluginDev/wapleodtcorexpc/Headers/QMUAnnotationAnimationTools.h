//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QMUAnnotationAnimationTools : NSObject
{
}

+ (_Bool)checkPointOnSegment:(struct CLLocationCoordinate2D)arg1 withStartPoint:(struct CLLocationCoordinate2D)arg2 andEndPoint:(struct CLLocationCoordinate2D)arg3;
+ (double)getTranslateTotalDistance:(id)arg1;
+ (double)annotationViewRotation:(id)arg1;
+ (id)compressLocationData:(id)arg1;
+ (id)validateLocationData:(id)arg1;
+ (id)createRotateAnimationWithLocations:(id)arg1 initialRotation:(double)arg2 duration:(double)arg3 distance:(double)arg4;
+ (id)createTranslateAnimationWithLocations:(id)arg1 duration:(double)arg2;

@end

