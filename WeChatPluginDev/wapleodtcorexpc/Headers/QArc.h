//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QArc
{
    int _pointCount;
    CDStruct_c3b9c2ee *_internalArcPoints;
    double _radius;
    double _tangentAngle;
    CDStruct_34734122 _centerPoint;
    CDStruct_02837cd9 _boundingMapRect;
}

+ (id)arcWithStartPoint:(struct CLLocationCoordinate2D)arg1 endPoint:(struct CLLocationCoordinate2D)arg2 tangentAngle:(double)arg3;
+ (id)arcWithStartPoint:(struct CLLocationCoordinate2D)arg1 endPoint:(struct CLLocationCoordinate2D)arg2 passedPoint:(struct CLLocationCoordinate2D)arg3;
@property(nonatomic) double tangentAngle; // @synthesize tangentAngle=_tangentAngle;
@property(nonatomic) int pointCount; // @synthesize pointCount=_pointCount;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) CDStruct_c3b9c2ee centerPoint; // @synthesize centerPoint=_centerPoint;
@property(nonatomic) CDStruct_c3b9c2ee *internalArcPoints; // @synthesize internalArcPoints=_internalArcPoints;
@property(nonatomic) CDStruct_02837cd9 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
- (void)dealloc;
- (void)calculateBoundingMapRect;
- (void)generateArcPoints:(_Bool)arg1 start:(CDStruct_c3b9c2ee)arg2 end:(CDStruct_c3b9c2ee)arg3;
- (void)calculateCircleCenterWithTangentLine:(CDStruct_c3b9c2ee)arg1 endPoint:(CDStruct_c3b9c2ee)arg2 angle:(double)arg3;
- (double)convertTangleLineAngle:(double)arg1;
- (void)calculateCircleCenterWithStart:(CDStruct_c3b9c2ee)arg1 end:(CDStruct_c3b9c2ee)arg2 passed:(CDStruct_c3b9c2ee)arg3;
- (id)initWithStartPoint:(struct CLLocationCoordinate2D)arg1 endPoint:(struct CLLocationCoordinate2D)arg2 tangentAngle:(double)arg3;
- (id)initWithStartPoint:(struct CLLocationCoordinate2D)arg1 endPoint:(struct CLLocationCoordinate2D)arg2 passedPoint:(struct CLLocationCoordinate2D)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

