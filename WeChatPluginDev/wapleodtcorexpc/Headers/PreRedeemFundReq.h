//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BankCardInfo, BaseRequest, NSString;

@interface PreRedeemFundReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) BankCardInfo *bankCardInfo; // @dynamic bankCardInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *operateId; // @dynamic operateId;
@property(nonatomic) unsigned int redeemDest; // @dynamic redeemDest;
@property(nonatomic) unsigned int redeemFee; // @dynamic redeemFee;
@property(nonatomic) unsigned int redeemType; // @dynamic redeemType;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end

