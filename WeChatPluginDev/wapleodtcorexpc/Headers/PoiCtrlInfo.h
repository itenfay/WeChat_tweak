//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PoiCtrlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *poiId; // @dynamic poiId;
@property(retain, nonatomic) NSString *poiName; // @dynamic poiName;
@property(retain, nonatomic) NSString *poiQuery; // @dynamic poiQuery;
@property(nonatomic) unsigned long long snsId; // @dynamic snsId;

@end

