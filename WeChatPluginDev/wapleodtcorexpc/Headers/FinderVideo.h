//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderVideoDesc, NSString;

@interface FinderVideo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) FinderVideoDesc *desc; // @dynamic desc;
@property(nonatomic) unsigned int favCount; // @dynamic favCount;
@property(nonatomic) unsigned long long firstBindId; // @dynamic firstBindId;
@property(nonatomic) unsigned int forwardCount; // @dynamic forwardCount;
@property(nonatomic) unsigned int friendLikeCount; // @dynamic friendLikeCount;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) _Bool isTest; // @dynamic isTest;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int spamFlag; // @dynamic spamFlag;

@end

