//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CheckWin, NSString, RemindWin, RemindWin3;

@interface TransferPhonePlaceOrderResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CheckWin *checkWin; // @dynamic checkWin;
@property(retain, nonatomic) RemindWin3 *dupPayWin; // @dynamic dupPayWin;
@property(nonatomic) unsigned int forceCheckName; // @dynamic forceCheckName;
@property(retain, nonatomic) RemindWin *jumpWin; // @dynamic jumpWin;
@property(retain, nonatomic) NSString *outTradeNo; // @dynamic outTradeNo;
@property(retain, nonatomic) NSString *placeorderExt; // @dynamic placeorderExt;
@property(retain, nonatomic) NSString *placeorderToken; // @dynamic placeorderToken;
@property(retain, nonatomic) RemindWin *remindWin; // @dynamic remindWin;
@property(retain, nonatomic) NSString *replaceorderToken; // @dynamic replaceorderToken;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(nonatomic) unsigned int retCodeAction; // @dynamic retCodeAction;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *spamInfoToken; // @dynamic spamInfoToken;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;

@end

