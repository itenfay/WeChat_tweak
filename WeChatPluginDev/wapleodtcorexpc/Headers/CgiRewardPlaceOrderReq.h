//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CgiRewardPlaceOrderReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(nonatomic) unsigned int amountType; // @dynamic amountType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int channel; // @dynamic channel;
@property(retain, nonatomic) NSString *extendStr1; // @dynamic extendStr1;
@property(retain, nonatomic) NSString *extendStr2; // @dynamic extendStr2;
@property(retain, nonatomic) NSString *payerDesc; // @dynamic payerDesc;
@property(retain, nonatomic) NSString *qrcodeDesc; // @dynamic qrcodeDesc;
@property(retain, nonatomic) NSString *receiverName; // @dynamic receiverName;
@property(retain, nonatomic) NSString *receiverOpenId; // @dynamic receiverOpenId;
@property(retain, nonatomic) NSString *scanId; // @dynamic scanId;
@property(nonatomic) unsigned int showPayerInfo; // @dynamic showPayerInfo;
@property(retain, nonatomic) NSString *webviewUrl; // @dynamic webviewUrl;

@end

