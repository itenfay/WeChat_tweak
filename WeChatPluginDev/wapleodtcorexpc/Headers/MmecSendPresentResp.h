//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, EcsErrorAction, MmecSendPresentResp_PaymentParasInfo, NSString;

@interface MmecSendPresentResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *miniShopAppid; // @dynamic miniShopAppid;
@property(retain, nonatomic) NSString *msgXmlInfo; // @dynamic msgXmlInfo;
@property(retain, nonatomic) MmecSendPresentResp_PaymentParasInfo *paymentParams; // @dynamic paymentParams;
@property(nonatomic) unsigned int secDecision; // @dynamic secDecision;
@property(retain, nonatomic) EcsErrorAction *secErrorAction; // @dynamic secErrorAction;

@end

