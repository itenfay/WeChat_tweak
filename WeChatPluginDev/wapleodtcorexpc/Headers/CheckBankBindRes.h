//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, WarningNotice;

@interface CheckBankBindRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bankCardSeqno; // @dynamic bankCardSeqno;
@property(retain, nonatomic) NSString *bankCardTailno; // @dynamic bankCardTailno;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *encryptData; // @dynamic encryptData;
@property(retain, nonatomic) WarningNotice *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) NSString *payeeName; // @dynamic payeeName;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;

@end

