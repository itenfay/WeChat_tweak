//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MediaList, NSData, NSString, SellerReplyInfo;

@interface EvaluationInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *evaluationId; // @dynamic evaluationId;
@property(nonatomic) unsigned int evaluationLevel; // @dynamic evaluationLevel;
@property(nonatomic) unsigned int evaluationType; // @dynamic evaluationType;
@property(nonatomic) unsigned int isAnonymous; // @dynamic isAnonymous;
@property(retain, nonatomic) MediaList *mediaList; // @dynamic mediaList;
@property(retain, nonatomic) NSString *orderId; // @dynamic orderId;
@property(retain, nonatomic) SellerReplyInfo *sellerReply; // @dynamic sellerReply;
@property(nonatomic) unsigned long long skuId; // @dynamic skuId;
@property(nonatomic) unsigned long long spuId; // @dynamic spuId;

@end

