//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class AlertItem, BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface TransToBankCardPayRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AlertItem *alertItem; // @dynamic alertItem;
@property(retain, nonatomic) NSString *bankCardTailno; // @dynamic bankCardTailno;
@property(retain, nonatomic) NSString *bankName; // @dynamic bankName;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *payeeName; // @dynamic payeeName;
@property(retain, nonatomic) NSString *reqkey; // @dynamic reqkey;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *transferBillId; // @dynamic transferBillId;

@end

