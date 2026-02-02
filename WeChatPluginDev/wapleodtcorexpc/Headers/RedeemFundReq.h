//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface RedeemFundReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *operateId; // @dynamic operateId;
@property(retain, nonatomic) NSString *payPasswdEnc; // @dynamic payPasswdEnc;
@property(nonatomic) unsigned int redeemFee; // @dynamic redeemFee;
@property(retain, nonatomic) NSString *redeemListid; // @dynamic redeemListid;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;

@end

