//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, JumpRemind, NSString;

@interface WABizF2FPlaceOrderResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) JumpRemind *jumpRemind; // @dynamic jumpRemind;
@property(retain, nonatomic) NSString *personalpayOrderId; // @dynamic personalpayOrderId;
@property(retain, nonatomic) NSString *placeorderExt; // @dynamic placeorderExt;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *showPayingWording; // @dynamic showPayingWording;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;

@end

