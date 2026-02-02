//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface StatusPoiInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *poiId; // @dynamic poiId;
@property(retain, nonatomic) NSString *poiName; // @dynamic poiName;

@end

