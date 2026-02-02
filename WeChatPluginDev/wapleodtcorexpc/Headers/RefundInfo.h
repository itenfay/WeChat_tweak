//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface RefundInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(nonatomic) unsigned long long expressAmount; // @dynamic expressAmount;
@property(nonatomic) unsigned long long orderRefundTime; // @dynamic orderRefundTime;
@property(retain, nonatomic) NSString *refundOrderId; // @dynamic refundOrderId;
@property(nonatomic) unsigned long long spuAmount; // @dynamic spuAmount;

@end

