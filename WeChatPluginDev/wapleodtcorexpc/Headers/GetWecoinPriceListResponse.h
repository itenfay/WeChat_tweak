//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, WecoinCustomRechargeInfo;

@interface GetWecoinPriceListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int agreementStatus; // @dynamic agreementStatus;
@property(retain, nonatomic) NSString *agreementUrl; // @dynamic agreementUrl;
@property(nonatomic) unsigned int agreementVersion; // @dynamic agreementVersion;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) WecoinCustomRechargeInfo *customRechargeInfo; // @dynamic customRechargeInfo;
@property(retain, nonatomic) NSMutableArray *priceInfos; // @dynamic priceInfos;

@end

