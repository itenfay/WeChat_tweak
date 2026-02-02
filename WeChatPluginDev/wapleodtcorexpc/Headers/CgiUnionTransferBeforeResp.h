//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CgiUnionTransferNoticeItem, NSString;

@interface CgiUnionTransferBeforeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amountRemindBit; // @dynamic amountRemindBit;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CgiUnionTransferNoticeItem *notice; // @dynamic notice;
@property(retain, nonatomic) NSString *payTitle; // @dynamic payTitle;
@property(retain, nonatomic) NSString *placeorderReserves; // @dynamic placeorderReserves;
@property(retain, nonatomic) NSString *receiverEnterpriseName; // @dynamic receiverEnterpriseName;
@property(retain, nonatomic) NSString *receiverMerchantDesc; // @dynamic receiverMerchantDesc;
@property(retain, nonatomic) NSString *receiverMerchantTitle; // @dynamic receiverMerchantTitle;
@property(retain, nonatomic) NSString *receiverStaffDesc; // @dynamic receiverStaffDesc;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

