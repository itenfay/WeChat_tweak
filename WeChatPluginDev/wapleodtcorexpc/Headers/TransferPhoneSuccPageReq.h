//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface TransferPhoneSuccPageReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *outTradeNo; // @dynamic outTradeNo;
@property(retain, nonatomic) NSString *placeorderExt; // @dynamic placeorderExt;
@property(retain, nonatomic) NSString *placeorderToken; // @dynamic placeorderToken;
@property(retain, nonatomic) NSString *rcvrOpenid; // @dynamic rcvrOpenid;
@property(retain, nonatomic) NSString *rcvrToken; // @dynamic rcvrToken;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;

@end

