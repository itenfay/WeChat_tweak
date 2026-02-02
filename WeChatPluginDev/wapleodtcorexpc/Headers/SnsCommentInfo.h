//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface SnsCommentInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *adExtInfo; // @dynamic adExtInfo;
@property(nonatomic) unsigned int commentFlag; // @dynamic commentFlag;
@property(nonatomic) int commentId; // @dynamic commentId;
@property(nonatomic) unsigned long long commentId2; // @dynamic commentId2;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int deleteFlag; // @dynamic deleteFlag;
@property(nonatomic) unsigned int isNotRichText; // @dynamic isNotRichText;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) int replyCommentId; // @dynamic replyCommentId;
@property(nonatomic) unsigned long long replyCommentId2; // @dynamic replyCommentId2;
@property(retain, nonatomic) NSString *replyUsername; // @dynamic replyUsername;
@property(retain, nonatomic) SKBuiltinBuffer_t *snsDragon2024ElementBuf; // @dynamic snsDragon2024ElementBuf;
@property(retain, nonatomic) NSMutableArray *snsEmojiInfo; // @dynamic snsEmojiInfo;
@property(nonatomic) unsigned int snsEmojiInfoCount; // @dynamic snsEmojiInfoCount;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

