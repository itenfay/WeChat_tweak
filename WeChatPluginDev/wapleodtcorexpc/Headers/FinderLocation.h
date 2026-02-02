//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLocation : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)getLocationUrl;
- (id)getDisplayPOIAddress;
- (_Bool)poiCanClick;
- (_Bool)isLocationValid;
- (_Bool)isValidForShow;
- (id)poiFavoriteSourceID;
- (id)convertToPOIInfo;
- (_Bool)isPoiInfo;

// Remaining properties
@property(retain, nonatomic) NSString *buildingId; // @dynamic buildingId;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) unsigned int commercializationFlag; // @dynamic commercializationFlag;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) unsigned long long flag; // @dynamic flag;
@property(retain, nonatomic) NSString *floorName; // @dynamic floorName;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *poiAddress; // @dynamic poiAddress;
@property(retain, nonatomic) NSString *poiClassifyId; // @dynamic poiClassifyId;
@property(nonatomic) unsigned int poiClassifyType; // @dynamic poiClassifyType;
@property(retain, nonatomic) NSString *poiFullName; // @dynamic poiFullName;
@property(retain, nonatomic) NSString *poiName; // @dynamic poiName;
@property(retain, nonatomic) NSMutableArray *productId; // @dynamic productId;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) NSString *region; // @dynamic region;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

