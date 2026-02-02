//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FriendRecommendCommentInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *commentContent; // @dynamic commentContent;
@property(retain, nonatomic) NSMutableArray *exposeFriends; // @dynamic exposeFriends;
@property(nonatomic) unsigned int friendCount; // @dynamic friendCount;
@property(nonatomic) unsigned long long refCommentId; // @dynamic refCommentId;

@end

