//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMMapUtil
{
}

+ (CDStruct_c3b9c2ee *)createMapPointForAnnotations:(id)arg1;
+ (double)normalizeZoomLevel:(double)arg1;
+ (struct CLLocationCoordinate2D)convertWGS84toGCJ02:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)convertGCJ02toWGS84:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)QCoordinateRegion:(CDStruct_b7cb895d)arg1 ContainsPoint:(CDStruct_c3b9c2ee)arg2;
+ (double)convertSpeedToKMH:(double)arg1;
+ (CDStruct_02837cd9)QMapRect:(CDStruct_02837cd9 *)arg1 MakeCenterUnionPoint:(CDStruct_c3b9c2ee)arg2;
+ (CDStruct_02837cd9)QMapRect:(CDStruct_02837cd9 *)arg1 KeepCenterUnionPoint:(CDStruct_c3b9c2ee)arg2;
+ (CDStruct_02837cd9)QMapRectForCoordinateRegion:(CDStruct_b7cb895d)arg1;

@end

