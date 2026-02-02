//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class JumpToShowUserInfoByComment, JumpToShowUserInfoByFinderLike, JumpToShowUserInfoByMention, JumpToShowUserInfoByMpComment, JumpToShowUserInfoByThumbUp, NSString;

@interface JumpToShowUserInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) JumpToShowUserInfoByComment *jumpToShowUserInfoByComment; // @dynamic jumpToShowUserInfoByComment;
@property(retain, nonatomic) JumpToShowUserInfoByFinderLike *jumpToShowUserInfoByFinderLike; // @dynamic jumpToShowUserInfoByFinderLike;
@property(retain, nonatomic) JumpToShowUserInfoByMention *jumpToShowUserInfoByMention; // @dynamic jumpToShowUserInfoByMention;
@property(retain, nonatomic) JumpToShowUserInfoByMpComment *jumpToShowUserInfoByMpComment; // @dynamic jumpToShowUserInfoByMpComment;
@property(retain, nonatomic) JumpToShowUserInfoByThumbUp *jumpToShowUserInfoByThumbUp; // @dynamic jumpToShowUserInfoByThumbUp;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

