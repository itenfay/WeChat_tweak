//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface MerchantPayGetQRCodeInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int channel; // @dynamic channel;
@property(retain, nonatomic) NSString *clientIp; // @dynamic clientIp;
@property(nonatomic) unsigned long long msgSvrId; // @dynamic msgSvrId;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(retain, nonatomic) NSString *qrUrl; // @dynamic qrUrl;
@property(retain, nonatomic) NSString *qrcodeSenderUsername; // @dynamic qrcodeSenderUsername;
@property(nonatomic) unsigned int scanScene; // @dynamic scanScene;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

