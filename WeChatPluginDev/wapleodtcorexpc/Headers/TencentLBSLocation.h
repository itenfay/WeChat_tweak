//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSNumber, NSString;

@interface TencentLBSLocation : NSObject
{
    CLLocation *_location;
    long long _areaStat;
    NSString *_provider;
    NSNumber *_steps;
    NSNumber *_indoorPdrSteps;
    NSString *_buildingId;
    NSString *_buildingFloor;
    long long _indoorLocationType;
    NSString *_name;
    NSString *_address;
    long long _nationCode;
    NSString *_code;
    NSString *_nation;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_town;
    NSString *_village;
    NSString *_street;
    NSString *_street_no;
    NSArray *_poiList;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *poiList; // @synthesize poiList=_poiList;
@property(copy, nonatomic) NSString *street_no; // @synthesize street_no=_street_no;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *village; // @synthesize village=_village;
@property(copy, nonatomic) NSString *town; // @synthesize town=_town;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *nation; // @synthesize nation=_nation;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) long long nationCode; // @synthesize nationCode=_nationCode;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long indoorLocationType; // @synthesize indoorLocationType=_indoorLocationType;
@property(copy, nonatomic) NSString *buildingFloor; // @synthesize buildingFloor=_buildingFloor;
@property(copy, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(copy, nonatomic) NSNumber *indoorPdrSteps; // @synthesize indoorPdrSteps=_indoorPdrSteps;
@property(copy, nonatomic) NSNumber *steps; // @synthesize steps=_steps;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(nonatomic) long long areaStat; // @synthesize areaStat=_areaStat;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (id)description;
- (double)distanceFromLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

