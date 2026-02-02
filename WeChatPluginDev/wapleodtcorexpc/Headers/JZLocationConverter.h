//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JZLocationConverter : NSObject
{
}

+ (struct CLLocationCoordinate2D)bd09ToWgs84:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)bd09ToGcj02:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)gcj02ToBd09:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)wgs84ToBd09:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)gcj02ToWgs84:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)wgs84ToGcj02:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)bd09Encrypt:(double)arg1 bdLon:(double)arg2;
+ (struct CLLocationCoordinate2D)bd09Decrypt:(double)arg1 bdLon:(double)arg2;
+ (struct CLLocationCoordinate2D)gcj02Decrypt:(double)arg1 gjLon:(double)arg2;
+ (struct CLLocationCoordinate2D)gcj02Encrypt:(double)arg1 bdLon:(double)arg2;
+ (_Bool)outOfChina:(double)arg1 bdLon:(double)arg2;
+ (double)transformLon:(double)arg1 bdLon:(double)arg2;
+ (double)transformLat:(double)arg1 bdLon:(double)arg2;

@end

