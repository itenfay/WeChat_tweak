//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface POIItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)isIndoor;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) NSString *addrForShow;

// Remaining properties
@property(retain, nonatomic) NSString *addr; // @dynamic addr;
@property(retain, nonatomic) NSString *buildingId; // @dynamic buildingId;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) float distance; // @dynamic distance;
@property(retain, nonatomic) NSString *district; // @dynamic district;
@property(retain, nonatomic) NSString *floorName; // @dynamic floorName;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *link; // @dynamic link;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *nation; // @dynamic nation;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) NSString *street; // @dynamic street;
@property(retain, nonatomic) NSString *subAddr; // @dynamic subAddr;
@property(retain, nonatomic) NSString *typeId; // @dynamic typeId;

@end

