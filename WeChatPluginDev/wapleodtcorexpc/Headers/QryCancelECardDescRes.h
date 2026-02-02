//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CancelDescItem, NSString, TradeDetailItem;

@interface QryCancelECardDescRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bindSerial; // @dynamic bindSerial;
@property(retain, nonatomic) CancelDescItem *cancelDescItem; // @dynamic cancelDescItem;
@property(retain, nonatomic) NSString *cancelSuccDesc; // @dynamic cancelSuccDesc;
@property(retain, nonatomic) NSString *cancelTips; // @dynamic cancelTips;
@property(retain, nonatomic) NSString *cancelTitle; // @dynamic cancelTitle;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(retain, nonatomic) NSString *pageTitle; // @dynamic pageTitle;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) TradeDetailItem *tradeDetailItem; // @dynamic tradeDetailItem;

@end

