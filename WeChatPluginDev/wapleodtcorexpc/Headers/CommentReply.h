//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CommentReply : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int isDeleted; // @dynamic isDeleted;
@property(retain, nonatomic) NSString *openid; // @dynamic openid;
@property(nonatomic) unsigned int replyDelFlag; // @dynamic replyDelFlag;
@property(nonatomic) unsigned int replyId; // @dynamic replyId;
@property(nonatomic) unsigned int replyIsElected; // @dynamic replyIsElected;
@property(nonatomic) unsigned int replyLikeNum; // @dynamic replyLikeNum;
@property(nonatomic) unsigned int replyLikeStatus; // @dynamic replyLikeStatus;

@end

