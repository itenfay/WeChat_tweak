//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AAOperationInfo, BaseResponse, NSMutableArray, NSString, NoticeItem, SessionIdList;

@interface QueryPfInfoRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) AAOperationInfo *operationInfo; // @dynamic operationInfo;
@property(retain, nonatomic) NSMutableArray *payerList; // @dynamic payerList;
@property(retain, nonatomic) NSString *picSign; // @dynamic picSign;
@property(retain, nonatomic) NSString *picUrl; // @dynamic picUrl;
@property(retain, nonatomic) NSString *receiverUsername; // @dynamic receiverUsername;
@property(retain, nonatomic) NSString *remark; // @dynamic remark;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) SessionIdList *sessionidList; // @dynamic sessionidList;

@end

