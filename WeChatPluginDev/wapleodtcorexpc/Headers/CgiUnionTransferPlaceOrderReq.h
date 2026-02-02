//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CgiUnionTransferPlaceOrderReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) unsigned int descHasAddress; // @dynamic descHasAddress;
@property(retain, nonatomic) NSString *placeorderReserves; // @dynamic placeorderReserves;
@property(retain, nonatomic) NSString *receiverEnterpriseName; // @dynamic receiverEnterpriseName;
@property(retain, nonatomic) NSString *receiverStaffName; // @dynamic receiverStaffName;
@property(retain, nonatomic) NSString *receiverWwUsername; // @dynamic receiverWwUsername;
@property(retain, nonatomic) NSString *roomid; // @dynamic roomid;

@end

