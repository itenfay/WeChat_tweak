//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardUsedStoreInfo
{
    unsigned int _distance;
    NSString *_name;
    double _longitude;
    double _latitude;
    NSString *_descriptor;
    NSString *_phone;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_address;
    NSString *_jumpUrl;
    NSString *_appBrandUserName;
    NSString *_appBrandPass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appBrandPass; // @synthesize appBrandPass=_appBrandPass;
@property(retain, nonatomic) NSString *appBrandUserName; // @synthesize appBrandUserName=_appBrandUserName;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)parseFromJSONDic:(id)arg1;

@end

