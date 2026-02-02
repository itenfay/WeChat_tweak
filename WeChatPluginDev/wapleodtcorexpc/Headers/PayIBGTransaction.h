//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface PayIBGTransaction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *buyBankName; // @dynamic buyBankName;
@property(retain, nonatomic) NSString *des; // @dynamic des;
@property(retain, nonatomic) NSMutableArray *discountArray; // @dynamic discountArray;
@property(retain, nonatomic) NSString *feeType; // @dynamic feeType;
@property(nonatomic) unsigned int modifyTimestamp; // @dynamic modifyTimestamp;
@property(nonatomic) unsigned long long originalTotalFee; // @dynamic originalTotalFee;
@property(retain, nonatomic) NSString *payStatusName; // @dynamic payStatusName;
@property(retain, nonatomic) NSString *prepayId; // @dynamic prepayId;
@property(retain, nonatomic) NSString *spName; // @dynamic spName;
@property(nonatomic) unsigned int totalFee; // @dynamic totalFee;
@property(nonatomic) unsigned int tradeStatus; // @dynamic tradeStatus;
@property(retain, nonatomic) NSString *transactionId; // @dynamic transactionId;

@end

