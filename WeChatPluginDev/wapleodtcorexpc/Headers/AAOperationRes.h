//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, NoticeItem;

@interface AAOperationRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int defaultMod; // @dynamic defaultMod;
@property(nonatomic) unsigned int maxPayerNum; // @dynamic maxPayerNum;
@property(nonatomic) unsigned long long maxPerAmount; // @dynamic maxPerAmount;
@property(nonatomic) unsigned int maxReceiverNum; // @dynamic maxReceiverNum;
@property(nonatomic) unsigned long long maxTotalAmount; // @dynamic maxTotalAmount;
@property(nonatomic) unsigned int maxTotalNum; // @dynamic maxTotalNum;
@property(retain, nonatomic) NSString *notice; // @dynamic notice;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) NSString *noticeUrl; // @dynamic noticeUrl;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(nonatomic) _Bool showSolitaireEntrance; // @dynamic showSolitaireEntrance;

@end

