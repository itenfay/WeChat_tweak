//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, EcsErrorAction, MmecSendPresentResp_PaymentParasInfo, NSString;

@class WXPBGeneratedMessage;

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

