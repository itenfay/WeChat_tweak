//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class MMListenUserInfo, NSString;

@class WXPBGeneratedMessage;

@interface MMListenRecommendInfo_ClientRecommendInfo_FriendComment : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenUserInfo *commentUser; // @dynamic commentUser;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) _Bool isReply; // @dynamic isReply;
@property(retain, nonatomic) MMListenUserInfo *replyToUser; // @dynamic replyToUser;

@end

