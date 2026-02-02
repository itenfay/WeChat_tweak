//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJumperPoiParams : NSObject
{
    int _fromScene;
    int _tabID;
    int _fromType;
    double _longitude;
    double _latitude;
    NSString *_poiName;
    NSString *_country;
    NSString *_city;
    NSString *_address;
    NSString *_poiClassifyId;
    NSString *_buildingId;
    NSString *_floorName;
    unsigned long long _fromObjectID;
    NSString *_groupBuyBypassData;
    NSString *_jumpInfoToPoiStreamBypass;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *jumpInfoToPoiStreamBypass; // @synthesize jumpInfoToPoiStreamBypass=_jumpInfoToPoiStreamBypass;
@property(copy, nonatomic) NSString *groupBuyBypassData; // @synthesize groupBuyBypassData=_groupBuyBypassData;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int tabID; // @synthesize tabID=_tabID;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned long long fromObjectID; // @synthesize fromObjectID=_fromObjectID;
@property(copy, nonatomic) NSString *floorName; // @synthesize floorName=_floorName;
@property(copy, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(copy, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId=_poiClassifyId;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
- (id)genFinderLocation;

@end

