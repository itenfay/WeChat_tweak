//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, PoiGps, PoiPoint;

@interface PoiBrief : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int adcode; // @dynamic adcode;
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) NSMutableArray *aliases; // @dynamic aliases;
@property(retain, nonatomic) NSString *categories; // @dynamic categories;
@property(retain, nonatomic) NSMutableArray *categoriesList; // @dynamic categoriesList;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) float distance; // @dynamic distance;
@property(retain, nonatomic) NSString *fullAddress; // @dynamic fullAddress;
@property(retain, nonatomic) PoiGps *marsGps; // @dynamic marsGps;
@property(retain, nonatomic) PoiPoint *marsPoint; // @dynamic marsPoint;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) NSString *region; // @dynamic region;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *uid; // @dynamic uid;

@end

