//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderMemberMentionCount : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int memberQaReceiveQuestionCount; // @dynamic memberQaReceiveQuestionCount;
@property(nonatomic) unsigned int mentionCommentCount; // @dynamic mentionCommentCount;
@property(nonatomic) unsigned int mentionLikeCount; // @dynamic mentionLikeCount;
@property(nonatomic) unsigned int mentionThumbLikeCount; // @dynamic mentionThumbLikeCount;
@property(nonatomic) unsigned int newMemberJoinCount; // @dynamic newMemberJoinCount;
@property(nonatomic) unsigned long long updatetime; // @dynamic updatetime;

@end

