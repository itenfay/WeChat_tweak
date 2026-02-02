//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QIndoorInfo, WAMapPolyLineData;

@interface QPolyline
{
    QIndoorInfo *_indoorInfo;
}

+ (id)polylineWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithEncodedString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) QIndoorInfo *indoorInfo; // @synthesize indoorInfo=_indoorInfo;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(retain, nonatomic) WAMapPolyLineData *userData;

@end

