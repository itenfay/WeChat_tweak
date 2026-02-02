//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface StoryCommentDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bubbleEnhance; // @dynamic bubbleEnhance;
@property(nonatomic) unsigned int commentFlag; // @dynamic commentFlag;
@property(nonatomic) int commentId; // @dynamic commentId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int doubleClickBubble; // @dynamic doubleClickBubble;
@property(nonatomic) unsigned int fontColor; // @dynamic fontColor;
@property(retain, nonatomic) NSString *fromNickName; // @dynamic fromNickName;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int isNotRichText; // @dynamic isNotRichText;
@property(nonatomic) int replyCommentId; // @dynamic replyCommentId;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *toNickName; // @dynamic toNickName;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

