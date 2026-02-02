//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber;
@protocol QTCOptional;

@interface QGPLatLng
{
    double _lat;
    double _lng;
    NSNumber<QTCOptional> *_altitude;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber<QTCOptional> *altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
- (id)initWithLat:(double)arg1 lng:(double)arg2 altitude:(double)arg3;

@end

