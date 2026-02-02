//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface MerchantPayPlaceOrderReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientIp; // @dynamic clientIp;
@property(retain, nonatomic) NSString *payerRemark; // @dynamic payerRemark;
@property(retain, nonatomic) NSString *qrcodeSenderUsername; // @dynamic qrcodeSenderUsername;
@property(retain, nonatomic) NSString *scanId; // @dynamic scanId;
@property(nonatomic) unsigned long long totalAmount; // @dynamic totalAmount;

@end

