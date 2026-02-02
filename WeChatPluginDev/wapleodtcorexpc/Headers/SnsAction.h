//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, RemindFriendsInfo, SKBuiltinBuffer_t;

@interface SnsAction : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)isCommentDeletedByFeedOwner;

// Remaining properties
@property(nonatomic) unsigned int commentFlag; // @dynamic commentFlag;
@property(nonatomic) int commentId; // @dynamic commentId;
@property(nonatomic) unsigned long long commentId2; // @dynamic commentId2;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *fromNickname; // @dynamic fromNickname;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(retain, nonatomic) SKBuiltinBuffer_t *hbbuffer; // @dynamic hbbuffer;
@property(nonatomic) unsigned int isNotRichText; // @dynamic isNotRichText;
@property(retain, nonatomic) RemindFriendsInfo *remindFriendsInfo; // @dynamic remindFriendsInfo;
@property(nonatomic) int replyCommentId; // @dynamic replyCommentId;
@property(nonatomic) unsigned long long replyCommentId2; // @dynamic replyCommentId2;
@property(retain, nonatomic) SKBuiltinBuffer_t *snsDragon2024ElementBuf; // @dynamic snsDragon2024ElementBuf;
@property(retain, nonatomic) NSMutableArray *snsEmojiInfo; // @dynamic snsEmojiInfo;
@property(nonatomic) unsigned int snsEmojiInfoCount; // @dynamic snsEmojiInfoCount;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *toNickname; // @dynamic toNickname;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

