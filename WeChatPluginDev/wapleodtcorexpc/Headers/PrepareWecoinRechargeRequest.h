//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, GetWecoinPriceListResponse, NSString;

@interface PrepareWecoinRechargeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int agreementVersion; // @dynamic agreementVersion;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int businessId; // @dynamic businessId;
@property(retain, nonatomic) NSString *currencyCode; // @dynamic currencyCode;
@property(nonatomic) unsigned long long customCount; // @dynamic customCount;
@property(nonatomic) unsigned long long diffWecoinCount; // @dynamic diffWecoinCount;
@property(retain, nonatomic) GetWecoinPriceListResponse *priceListResp; // @dynamic priceListResp;
@property(retain, nonatomic) NSString *rechargeProductId; // @dynamic rechargeProductId;
@property(retain, nonatomic) NSString *reportSessionId; // @dynamic reportSessionId;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sdkVersion; // @dynamic sdkVersion;

@end

