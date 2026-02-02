//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface LbsLocationNew : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int addrFlag; // @dynamic addrFlag;
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) NSString *cellId; // @dynamic cellId;
@property(nonatomic) int gpssource; // @dynamic gpssource;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *macAddr; // @dynamic macAddr;
@property(nonatomic) int precision; // @dynamic precision;
@property(nonatomic) unsigned int updateTime; // @dynamic updateTime;

@end

