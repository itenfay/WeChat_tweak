//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface QryPurchaseResultReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int entranceType; // @dynamic entranceType;
@property(retain, nonatomic) NSString *operateId; // @dynamic operateId;
@property(nonatomic) unsigned int payChannel; // @dynamic payChannel;
@property(nonatomic) unsigned int purchaseFee; // @dynamic purchaseFee;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;
@property(retain, nonatomic) NSString *tradeNo; // @dynamic tradeNo;
@property(retain, nonatomic) NSString *transactionId; // @dynamic transactionId;

@end

