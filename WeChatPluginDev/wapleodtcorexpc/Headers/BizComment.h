//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CommentReplyList, NSString;

@interface BizComment : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int isElected; // @dynamic isElected;
@property(nonatomic) unsigned int isFromFriend; // @dynamic isFromFriend;
@property(nonatomic) unsigned int isFromMe; // @dynamic isFromMe;
@property(nonatomic) unsigned int isTop; // @dynamic isTop;
@property(nonatomic) unsigned int likeId; // @dynamic likeId;
@property(nonatomic) unsigned int likeNum; // @dynamic likeNum;
@property(nonatomic) unsigned int likeStatus; // @dynamic likeStatus;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *openid; // @dynamic openid;
@property(nonatomic) unsigned int personalCommentId; // @dynamic personalCommentId;
@property(retain, nonatomic) CommentReplyList *reply; // @dynamic reply;
@property(nonatomic) unsigned int userCommentId; // @dynamic userCommentId;

@end

