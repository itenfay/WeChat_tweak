//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, DocumentItem, HoneyPayListResp_Banner, HoneyPayListResp_Pertermit, NSMutableArray, NSString, NoticeItem, RightCorner;

@interface HoneyPayListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *honeyRecords; // @dynamic honeyRecords;
@property(nonatomic) _Bool isShowOpenCardButton; // @dynamic isShowOpenCardButton;
@property(nonatomic) _Bool needSignAgreement; // @dynamic needSignAgreement;
@property(retain, nonatomic) HoneyPayListResp_Banner *noticeBanner; // @dynamic noticeBanner;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) HoneyPayListResp_Pertermit *pertermit; // @dynamic pertermit;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) RightCorner *rightCorner; // @dynamic rightCorner;
@property(retain, nonatomic) DocumentItem *signAgreementWording; // @dynamic signAgreementWording;

@end

