//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLocationPoiDetailModel : NSObject
{
    unsigned int _adCode;
    NSString *_poiId;
    NSString *_categoryTips;
    NSString *_businessHour;
    NSString *_phoneNumber;
    NSString *_priceTips;
    NSString *_noticeWording;
    double _longitude;
    double _latitude;
    unsigned long long _source;
    NSString *_cityName;
    NSString *_address;
    NSString *_fullAddress;
    NSString *_country;
    NSString *_province;
    NSString *_region;
}

+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (id)swift_region;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)region;
+ (id)swift_province;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)province;
+ (id)swift_country;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)country;
+ (id)swift_address;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)address;
+ (id)swift_adCode;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)adCode;
+ (id)swift_cityName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)cityName;
+ (id)swift_source;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)source;
+ (id)swift_latitude;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)latitude;
+ (id)swift_longitude;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)longitude;
+ (id)swift_noticeWording;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)noticeWording;
+ (id)swift_priceTips;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)priceTips;
+ (id)swift_phoneNumber;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)phoneNumber;
+ (id)swift_businessHour;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)businessHour;
+ (id)swift_categoryTips;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)categoryTips;
+ (id)swift_poiId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)poiId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *fullAddress; // @synthesize fullAddress=_fullAddress;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) unsigned int adCode; // @synthesize adCode=_adCode;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *noticeWording; // @synthesize noticeWording=_noticeWording;
@property(retain, nonatomic) NSString *priceTips; // @synthesize priceTips=_priceTips;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *businessHour; // @synthesize businessHour=_businessHour;
@property(retain, nonatomic) NSString *categoryTips; // @synthesize categoryTips=_categoryTips;
@property(retain, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
- (id)getFullAddressString;
- (id)getNoticeWording;
- (id)getPriceTips;
- (id)getPhoneNumber;
- (id)getBusinessHour;
- (id)getCategoryTips;
- (id)initWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

