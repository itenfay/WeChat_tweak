//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString;

@class WXPBGeneratedMessage;

@interface WABizF2FAfterPlaceOrderCommReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *personalpayOrderId; // @dynamic personalpayOrderId;
@property(retain, nonatomic) NSString *placeorderExt; // @dynamic placeorderExt;
@property(nonatomic) unsigned int totalAmount; // @dynamic totalAmount;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;

@end

