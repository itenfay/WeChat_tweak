//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TencentLBSLocationUtils : NSObject
{
}

+ (_Bool)isInChinaWithLatitude:(double)arg1 longitude:(double)arg2;
+ (_Bool)isInChinaPolygonWithLatitude:(double)arg1 longitude:(double)arg2;
+ (struct CLLocationCoordinate2D)WGS84TOGCJ02:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)isInRegionWithLatitude:(double)arg1 longitude:(double)arg2 addTaiwan:(_Bool)arg3;
+ (double)distanceBetweenTwoTencentLBSLocations:(id)arg1 locationTwo:(id)arg2;
+ (double)distanceBetweenTwoCLLocations:(id)arg1 locationTwo:(id)arg2;
+ (double)distanceBetweenTwoCoordinate2D:(const struct CLLocationCoordinate2D *)arg1 coordinateTwo:(const struct CLLocationCoordinate2D *)arg2;

@end

