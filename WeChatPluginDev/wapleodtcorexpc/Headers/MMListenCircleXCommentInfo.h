//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCircleXUserInfo, NSString;

@interface MMListenCircleXCommentInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(retain, nonatomic) MMListenCircleXUserInfo *commentUser; // @dynamic commentUser;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) MMListenCircleXUserInfo *replyUser; // @dynamic replyUser;

@end

