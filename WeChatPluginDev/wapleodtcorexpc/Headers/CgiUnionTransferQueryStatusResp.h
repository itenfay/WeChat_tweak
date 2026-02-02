//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CgiUnionTransferNoticeItem, NSMutableArray, NSString, NotifyMsgInfo;

@interface CgiUnionTransferQueryStatusResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bottomWording; // @dynamic bottomWording;
@property(retain, nonatomic) NSMutableArray *descItemList; // @dynamic descItemList;
@property(retain, nonatomic) CgiUnionTransferNoticeItem *notice; // @dynamic notice;
@property(retain, nonatomic) NotifyMsgInfo *notifyInfo; // @dynamic notifyInfo;
@property(retain, nonatomic) NSString *payerUsername; // @dynamic payerUsername;
@property(retain, nonatomic) NSString *receiverUsername; // @dynamic receiverUsername;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *statusDesc; // @dynamic statusDesc;
@property(retain, nonatomic) NSString *statusSupplementary; // @dynamic statusSupplementary;
@property(nonatomic) unsigned int transStatus; // @dynamic transStatus;
@property(retain, nonatomic) NSMutableArray *uprightCornerList; // @dynamic uprightCornerList;

@end

