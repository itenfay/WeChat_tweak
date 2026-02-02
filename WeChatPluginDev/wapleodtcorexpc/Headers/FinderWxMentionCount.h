//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderRedDotCtrlInfo, NSString;

@interface FinderWxMentionCount : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) FinderRedDotCtrlInfo *ctrlInfo; // @dynamic ctrlInfo;
@property(nonatomic) unsigned int followAcceptedCount; // @dynamic followAcceptedCount;
@property(nonatomic) unsigned int friendObjectlikeLikeCount; // @dynamic friendObjectlikeLikeCount;
@property(nonatomic) unsigned int friendObjectrecommendLikeCount; // @dynamic friendObjectrecommendLikeCount;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(nonatomic) unsigned int mentionCommentCount; // @dynamic mentionCommentCount;
@property(nonatomic) unsigned int mentionLikeCount; // @dynamic mentionLikeCount;
@property(nonatomic) unsigned int mentionNotificationCount; // @dynamic mentionNotificationCount;
@property(nonatomic) unsigned int updateTime; // @dynamic updateTime;

@end

