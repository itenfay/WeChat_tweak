//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLocatingCoordinateItem : NSObject
{
    NSString *_nation;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_street;
    NSString *_route;
    NSString *_detail;
    NSString *_roughAddress;
    NSString *_roughAddressWithDirection;
    NSString *_addressDescrption;
    NSString *_nearestPoiId;
    NSString *_nearestPoiName;
    NSString *_poiId;
    NSString *_poiName;
    double _distanceToLandmark;
    NSString *_nationalCode;
    double _latitude;
    double _longitude;
    id _requestObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id requestObj; // @synthesize requestObj=_requestObj;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *nationalCode; // @synthesize nationalCode=_nationalCode;
@property(nonatomic) double distanceToLandmark; // @synthesize distanceToLandmark=_distanceToLandmark;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(retain, nonatomic) NSString *nearestPoiName; // @synthesize nearestPoiName=_nearestPoiName;
@property(retain, nonatomic) NSString *nearestPoiId; // @synthesize nearestPoiId=_nearestPoiId;
@property(retain, nonatomic) NSString *addressDescrption; // @synthesize addressDescrption=_addressDescrption;
@property(retain, nonatomic) NSString *roughAddressWithDirection; // @synthesize roughAddressWithDirection=_roughAddressWithDirection;
@property(retain, nonatomic) NSString *roughAddress; // @synthesize roughAddress=_roughAddress;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
@property(retain, nonatomic) NSString *street; // @synthesize street=_street;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *nation; // @synthesize nation=_nation;
- (id)description;

@end

