//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, LqtDialog, NSString;

@interface RedeemFundRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bankName; // @dynamic bankName;
@property(retain, nonatomic) NSString *bankTail; // @dynamic bankTail;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) LqtDialog *dialog; // @dynamic dialog;
@property(retain, nonatomic) NSString *failureWording; // @dynamic failureWording;
@property(nonatomic) _Bool isRealtimeArrivial; // @dynamic isRealtimeArrivial;
@property(nonatomic) _Bool isRedeemIntoPocket; // @dynamic isRedeemIntoPocket;
@property(retain, nonatomic) NSString *preArrivalTimeHeadline; // @dynamic preArrivalTimeHeadline;
@property(retain, nonatomic) NSString *preArriveTimeWording; // @dynamic preArriveTimeWording;
@property(nonatomic) unsigned int redeemFee; // @dynamic redeemFee;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *traceInfo; // @dynamic traceInfo;
@property(retain, nonatomic) NSString *wordingForStatus2; // @dynamic wordingForStatus2;

@end

