//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderCommentInfo, NSString;

@interface JumpToShowUserInfoByComment : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderCommentInfo *commentInfo; // @dynamic commentInfo;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(nonatomic) _Bool isSelfFeedComment; // @dynamic isSelfFeedComment;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;

@end

