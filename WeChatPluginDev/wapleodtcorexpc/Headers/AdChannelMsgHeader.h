//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface AdChannelMsgHeader : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clientIp; // @dynamic clientIp;
@property(retain, nonatomic) NSData *clientIpV6; // @dynamic clientIpV6;
@property(nonatomic) int clientVersion; // @dynamic clientVersion;
@property(retain, nonatomic) NSString *commonDeviceId; // @dynamic commonDeviceId;
@property(retain, nonatomic) NSString *idfa; // @dynamic idfa;
@property(retain, nonatomic) NSString *idfv; // @dynamic idfv;
@property(retain, nonatomic) NSString *imei; // @dynamic imei;
@property(nonatomic) unsigned int networkType; // @dynamic networkType;
@property(retain, nonatomic) NSString *oaid; // @dynamic oaid;
@property(nonatomic) int osType; // @dynamic osType;
@property(retain, nonatomic) NSString *ua; // @dynamic ua;
@property(nonatomic) unsigned int uin; // @dynamic uin;

@end

