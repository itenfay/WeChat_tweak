//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QMultiPoint
{
    CDStruct_c3b9c2ee *_points;
    unsigned long long _pointCount;
    CDStruct_02837cd9 _boundingRect;
}

@property(readonly, nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *points; // @synthesize points=_points;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D *)arg1 count:(int)arg2;
- (void)calculateBoundingMapRect;
- (void)dealloc;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;

// Remaining properties
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

