//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class WecoinPriceInfo;

@interface WecoinCustomRechargeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WecoinPriceInfo *customPriceInfo; // @dynamic customPriceInfo;
@property(nonatomic) unsigned int enableCustomRecharge; // @dynamic enableCustomRecharge;
@property(nonatomic) unsigned long long rechargePriceUpperbound; // @dynamic rechargePriceUpperbound;
@property(nonatomic) unsigned int replaceIdx; // @dynamic replaceIdx;

@end

