//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderExposeNotificationInfo, NSString;

@interface FinderMentionCount : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) FinderExposeNotificationInfo *exposeNotificationInfo; // @dynamic exposeNotificationInfo;
@property(nonatomic) unsigned int fansAddCount; // @dynamic fansAddCount;
@property(nonatomic) unsigned int fansCount; // @dynamic fansCount;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int firstComment; // @dynamic firstComment;
@property(nonatomic) unsigned int firstLike; // @dynamic firstLike;
@property(nonatomic) unsigned int followCount; // @dynamic followCount;
@property(nonatomic) unsigned int lastCommentPostTime; // @dynamic lastCommentPostTime;
@property(nonatomic) unsigned int lastLikePostTime; // @dynamic lastLikePostTime;
@property(nonatomic) unsigned int lastOperation; // @dynamic lastOperation;
@property(retain, nonatomic) NSString *latestNotificationBriefing; // @dynamic latestNotificationBriefing;
@property(nonatomic) unsigned long long latestNotificationTime; // @dynamic latestNotificationTime;
@property(nonatomic) unsigned int mentionCommentCount; // @dynamic mentionCommentCount;
@property(nonatomic) unsigned int mentionLikeCount; // @dynamic mentionLikeCount;
@property(nonatomic) unsigned int mentionNotificationCount; // @dynamic mentionNotificationCount;
@property(nonatomic) unsigned int newFollowCount; // @dynamic newFollowCount;
@property(nonatomic) unsigned int normalCount; // @dynamic normalCount;
@property(nonatomic) unsigned int systemCount; // @dynamic systemCount;
@property(nonatomic) unsigned long long updatetime; // @dynamic updatetime;

@end

