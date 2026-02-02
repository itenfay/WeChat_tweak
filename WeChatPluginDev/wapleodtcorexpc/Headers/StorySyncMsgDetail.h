//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, StoryObject;

@interface StorySyncMsgDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bubbleEnhance; // @dynamic bubbleEnhance;
@property(nonatomic) int commentId; // @dynamic commentId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *fromNickName; // @dynamic fromNickName;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int isFeatured; // @dynamic isFeatured;
@property(nonatomic) unsigned int isNotRichText; // @dynamic isNotRichText;
@property(nonatomic) unsigned int objCreateTime; // @dynamic objCreateTime;
@property(retain, nonatomic) NSString *objOwner; // @dynamic objOwner;
@property(nonatomic) int replyCommentId; // @dynamic replyCommentId;
@property(retain, nonatomic) StoryObject *storyObject; // @dynamic storyObject;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *toNickName; // @dynamic toNickName;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

