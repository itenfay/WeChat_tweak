//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCommentContentInfo, MMListenUserInfo, NSString;

@interface MMListenCommentItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(retain, nonatomic) MMListenUserInfo *commentUser; // @dynamic commentUser;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) MMListenCommentContentInfo *contentInfo; // @dynamic contentInfo;
@property(nonatomic) unsigned int contentType; // @dynamic contentType;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) int dislikeNum; // @dynamic dislikeNum;
@property(nonatomic) _Bool isDislike; // @dynamic isDislike;
@property(nonatomic) _Bool isLiked; // @dynamic isLiked;
@property(nonatomic) int likeNum; // @dynamic likeNum;

@end

