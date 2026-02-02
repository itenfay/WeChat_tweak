//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, C2CMsgNode, DocumentItem, HoneyUserDetail, NSString, NoticeItem;

@interface QryHoneyUserDetailResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) C2CMsgNode *c2Cmsg; // @dynamic c2Cmsg;
@property(retain, nonatomic) HoneyUserDetail *detail; // @dynamic detail;
@property(retain, nonatomic) NSString *helpUrl; // @dynamic helpUrl;
@property(retain, nonatomic) NSString *helpWord; // @dynamic helpWord;
@property(nonatomic) _Bool needSignAgreement; // @dynamic needSignAgreement;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) DocumentItem *signAgreementWording; // @dynamic signAgreementWording;

@end

