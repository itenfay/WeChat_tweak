//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, NoticeItem;

@interface OperationResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int maxTransferAmt; // @dynamic maxTransferAmt;
@property(nonatomic) unsigned int minPoundage; // @dynamic minPoundage;
@property(nonatomic) unsigned int nameLenLimit; // @dynamic nameLenLimit;
@property(retain, nonatomic) NSString *notice; // @dynamic notice;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) NSString *noticeUrl; // @dynamic noticeUrl;
@property(retain, nonatomic) NSString *paylistUrl; // @dynamic paylistUrl;
@property(nonatomic) unsigned int reasonLenLimit; // @dynamic reasonLenLimit;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

@end

