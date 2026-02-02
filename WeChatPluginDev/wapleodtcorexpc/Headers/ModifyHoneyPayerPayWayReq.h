//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, PayWay;

@interface ModifyHoneyPayerPayWayReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardNo; // @dynamic cardNo;
@property(retain, nonatomic) PayWay *payWay; // @dynamic payWay;
@property(retain, nonatomic) NSString *selectPaymentSessionid; // @dynamic selectPaymentSessionid;

@end

