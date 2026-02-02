//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, CommentContentInfo, FinderBaseRequest, NSData, NSMutableArray, NSString;

@interface FinderUniCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *bypassBuffer; // @dynamic bypassBuffer;
@property(nonatomic) unsigned int bypassBufferType; // @dynamic bypassBufferType;
@property(retain, nonatomic) NSString *clientid; // @dynamic clientid;
@property(retain, nonatomic) NSString *commentContent; // @dynamic commentContent;
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(nonatomic) unsigned long long commentTsMs; // @dynamic commentTsMs;
@property(retain, nonatomic) CommentContentInfo *contentInfo; // @dynamic contentInfo;
@property(nonatomic) unsigned int contentType; // @dynamic contentType;
@property(retain, nonatomic) NSString *entityId; // @dynamic entityId;
@property(retain, nonatomic) NSString *feedOwnerUsername; // @dynamic feedOwnerUsername;
@property(retain, nonatomic) FinderBaseRequest *finderBaserequest; // @dynamic finderBaserequest;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int interactionIdentity; // @dynamic interactionIdentity;
@property(retain, nonatomic) NSMutableArray *mentionedUser; // @dynamic mentionedUser;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(nonatomic) unsigned int operationType; // @dynamic operationType;
@property(nonatomic) unsigned long long replyCommentId; // @dynamic replyCommentId;
@property(nonatomic) unsigned long long rootCommentId; // @dynamic rootCommentId;

@end

