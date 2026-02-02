//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, StatusCommentMessageThumb;

@interface StatusComment : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *commentContent; // @dynamic commentContent;
@property(retain, nonatomic) NSString *commentId; // @dynamic commentId;
@property(retain, nonatomic) NSString *commenterUsername; // @dynamic commenterUsername;
@property(nonatomic) long long createTimeMs; // @dynamic createTimeMs;
@property(retain, nonatomic) NSString *headImageUrl; // @dynamic headImageUrl;
@property(nonatomic) _Bool isNeedNotify; // @dynamic isNeedNotify;
@property(nonatomic) _Bool isRead; // @dynamic isRead;
@property(retain, nonatomic) StatusCommentMessageThumb *messageThumbData; // @dynamic messageThumbData;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *rootCommentId; // @dynamic rootCommentId;
@property(nonatomic) long long sequence; // @dynamic sequence;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) NSString *statusId; // @dynamic statusId;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *writerUsername; // @dynamic writerUsername;

@end

