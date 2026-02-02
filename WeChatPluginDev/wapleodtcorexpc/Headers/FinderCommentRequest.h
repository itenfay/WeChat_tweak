//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, CommentContentInfo, FinderBaseRequest, NSData, NSMutableArray, NSString, NewLifeReportInfo;

@interface FinderCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *bypassBuffer; // @dynamic bypassBuffer;
@property(nonatomic) unsigned int bypassBufferType; // @dynamic bypassBufferType;
@property(retain, nonatomic) NSString *clientUdfKv; // @dynamic clientUdfKv;
@property(retain, nonatomic) NSString *clientid; // @dynamic clientid;
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(retain, nonatomic) NSMutableArray *commentMentionedUser; // @dynamic commentMentionedUser;
@property(nonatomic) unsigned int commentScene; // @dynamic commentScene;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) CommentContentInfo *contentInfo; // @dynamic contentInfo;
@property(nonatomic) unsigned int contentType; // @dynamic contentType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSMutableArray *mentionedUserList; // @dynamic mentionedUserList;
@property(retain, nonatomic) NewLifeReportInfo *newlifeReportInfo; // @dynamic newlifeReportInfo;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned long long objectid; // @dynamic objectid;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(retain, nonatomic) NSMutableArray *pastedContent; // @dynamic pastedContent;
@property(nonatomic) unsigned long long replyCommentId; // @dynamic replyCommentId;
@property(retain, nonatomic) NSString *replyUsername; // @dynamic replyUsername;
@property(nonatomic) unsigned long long rootCommentId; // @dynamic rootCommentId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

