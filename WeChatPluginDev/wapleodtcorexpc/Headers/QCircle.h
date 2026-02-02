//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAMapCircleData;

@interface QCircle
{
    double _radius;
    struct CLLocationCoordinate2D _coordinate;
    CDStruct_02837cd9 _boundingMapRect;
}

+ (id)circleWithMapRect:(CDStruct_02837cd9)arg1;
+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
@property(nonatomic) CDStruct_02837cd9 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)updateCircleCenter:(struct CLLocationCoordinate2D)arg1;
- (id)initWithWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (void)calculateBoundingMapRect;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(retain, nonatomic) WAMapCircleData *userData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

