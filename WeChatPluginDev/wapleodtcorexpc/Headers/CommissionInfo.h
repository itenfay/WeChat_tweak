//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CommissionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long commission; // @dynamic commission;
@property(retain, nonatomic) NSString *commissionId; // @dynamic commissionId;
@property(retain, nonatomic) NSString *commissionPayId; // @dynamic commissionPayId;
@property(nonatomic) unsigned int commissionRate; // @dynamic commissionRate;
@property(nonatomic) unsigned long long predictCommission; // @dynamic predictCommission;
@property(nonatomic) unsigned int predictCommissionRate; // @dynamic predictCommissionRate;
@property(nonatomic) unsigned int referType; // @dynamic referType;
@property(nonatomic) unsigned long long settleTime; // @dynamic settleTime;
@property(nonatomic) unsigned long long skuId; // @dynamic skuId;
@property(nonatomic) unsigned long long spuId; // @dynamic spuId;
@property(nonatomic) unsigned int state; // @dynamic state;

@end

