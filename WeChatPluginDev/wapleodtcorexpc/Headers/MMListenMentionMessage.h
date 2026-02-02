//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenItem, MMListenJumpInfo, MMListenMentionFeed, MMListenUserInfo, NSString;

@interface MMListenMentionMessage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(nonatomic) _Bool byAuthor; // @dynamic byAuthor;
@property(nonatomic) _Bool byFollowed; // @dynamic byFollowed;
@property(retain, nonatomic) NSString *commentId; // @dynamic commentId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *entityId; // @dynamic entityId;
@property(retain, nonatomic) MMListenUserInfo *fromUser; // @dynamic fromUser;
@property(retain, nonatomic) MMListenItem *item; // @dynamic item;
@property(retain, nonatomic) MMListenJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) MMListenMentionFeed *mentionFeed; // @dynamic mentionFeed;
@property(nonatomic) unsigned long long mentionId; // @dynamic mentionId;
@property(nonatomic) unsigned long long mentionTime; // @dynamic mentionTime;
@property(retain, nonatomic) NSString *mentionTimeStr; // @dynamic mentionTimeStr;
@property(nonatomic) unsigned int mentionType; // @dynamic mentionType;
@property(retain, nonatomic) NSString *refCommentId; // @dynamic refCommentId;
@property(retain, nonatomic) NSString *refContent; // @dynamic refContent;
@property(retain, nonatomic) NSString *subWording; // @dynamic subWording;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

