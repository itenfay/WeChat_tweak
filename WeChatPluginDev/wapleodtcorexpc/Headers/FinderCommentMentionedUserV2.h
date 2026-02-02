//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderMentionedUser, NSData;

@interface FinderCommentMentionedUserV2 : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *cliBuff; // @dynamic cliBuff;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(retain, nonatomic) FinderMentionedUser *userInfo; // @dynamic userInfo;

@end

