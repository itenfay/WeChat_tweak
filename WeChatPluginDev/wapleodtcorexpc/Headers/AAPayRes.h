//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class AAAlertItem, BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface AAPayRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AAAlertItem *alertItem; // @dynamic alertItem;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *msgxml; // @dynamic msgxml;
@property(retain, nonatomic) NSString *outTradeNo; // @dynamic outTradeNo;
@property(retain, nonatomic) NSString *paymsgid; // @dynamic paymsgid;
@property(retain, nonatomic) NSString *receiverTrueName; // @dynamic receiverTrueName;
@property(retain, nonatomic) NSString *reqkey; // @dynamic reqkey;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

