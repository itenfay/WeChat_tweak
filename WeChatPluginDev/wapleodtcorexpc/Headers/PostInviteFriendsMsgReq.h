//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, TwitterInfo;

@interface PostInviteFriendsMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int inviteFlags; // @dynamic inviteFlags;
@property(retain, nonatomic) NSString *inviteUrl; // @dynamic inviteUrl;
@property(retain, nonatomic) NSString *msgContent; // @dynamic msgContent;
@property(retain, nonatomic) NSString *msgTitle; // @dynamic msgTitle;
@property(retain, nonatomic) TwitterInfo *twitterInfo; // @dynamic twitterInfo;

@end

