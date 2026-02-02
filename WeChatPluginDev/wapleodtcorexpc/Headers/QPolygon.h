//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, WAMapPolygonData;

@interface QPolygon
{
    NSArray *_interiorPolygons;
}

+ (id)polygonWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *interiorPolygons; // @synthesize interiorPolygons=_interiorPolygons;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (id)initWithWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(retain, nonatomic) WAMapPolygonData *userData;

@end

