//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface PreparePurchaseResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(retain, nonatomic) NSString *partner4TenPay; // @dynamic partner4TenPay;
@property(retain, nonatomic) NSString *sign4TenPay; // @dynamic sign4TenPay;
@property(retain, nonatomic) NSString *tradeToken4TenPay; // @dynamic tradeToken4TenPay;
@property(retain, nonatomic) SKBuiltinBuffer_t *wecoinBuff; // @dynamic wecoinBuff;

@end

