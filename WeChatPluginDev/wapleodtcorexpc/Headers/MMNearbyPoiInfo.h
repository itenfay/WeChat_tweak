//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMNearbyPoiInfo
{
    double _latitude;
    double _longitude;
    double _radius;
    NSString *_poiName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 name:(id)arg4;

@end

