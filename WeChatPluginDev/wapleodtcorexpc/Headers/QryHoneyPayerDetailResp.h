//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, C2CMsgNode, HoneyPayerDetail, MoreTransRecord, NSMutableArray, NSString, NoticeItem, QryHoneyPayerDetailResp_ModifyCreditlineView, RightCorner, TokeMess;

@interface QryHoneyPayerDetailResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) C2CMsgNode *c2Cmsg; // @dynamic c2Cmsg;
@property(retain, nonatomic) HoneyPayerDetail *detail; // @dynamic detail;
@property(nonatomic) unsigned long long maxCreditLine; // @dynamic maxCreditLine;
@property(nonatomic) unsigned long long minCreditLine; // @dynamic minCreditLine;
@property(retain, nonatomic) QryHoneyPayerDetailResp_ModifyCreditlineView *modifyCreditlineView; // @dynamic modifyCreditlineView;
@property(retain, nonatomic) MoreTransRecord *moreRecords; // @dynamic moreRecords;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) NSMutableArray *record; // @dynamic record;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) RightCorner *rightCorner; // @dynamic rightCorner;
@property(retain, nonatomic) NSString *selectPaymentAppid; // @dynamic selectPaymentAppid;
@property(retain, nonatomic) NSString *selectPaymentSessionid; // @dynamic selectPaymentSessionid;
@property(retain, nonatomic) NSString *takeMessage; // @dynamic takeMessage;
@property(retain, nonatomic) TokeMess *tokeMess; // @dynamic tokeMess;

@end

