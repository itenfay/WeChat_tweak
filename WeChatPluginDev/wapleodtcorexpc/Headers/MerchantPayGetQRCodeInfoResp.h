//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, InterceptWin, NSString;

@interface MerchantPayGetQRCodeInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) InterceptWin *alert; // @dynamic alert;
@property(nonatomic) unsigned int amountRemindBit; // @dynamic amountRemindBit;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long fixedAmount; // @dynamic fixedAmount;
@property(retain, nonatomic) NSString *fixedDesc; // @dynamic fixedDesc;
@property(retain, nonatomic) NSString *redirectUrl; // @dynamic redirectUrl;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *scanId; // @dynamic scanId;
@property(retain, nonatomic) NSString *shopAddress; // @dynamic shopAddress;
@property(retain, nonatomic) NSString *shopAdname; // @dynamic shopAdname;
@property(retain, nonatomic) NSString *shopHeadimgUrl; // @dynamic shopHeadimgUrl;
@property(retain, nonatomic) NSString *shopName; // @dynamic shopName;

@end

