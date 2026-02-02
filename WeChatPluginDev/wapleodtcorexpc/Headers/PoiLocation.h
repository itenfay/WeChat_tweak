//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PoiLocation : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cellId; // @dynamic cellId;
@property(nonatomic) unsigned int distance; // @dynamic distance;
@property(nonatomic) int gpssource; // @dynamic gpssource;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *macAddr; // @dynamic macAddr;
@property(nonatomic) int precision; // @dynamic precision;

@end

