//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderAuthInfo, NSString;

@interface FinderLiveGuideFollowAdInfoItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) FinderAuthInfo *authInfo; // @dynamic authInfo;
@property(retain, nonatomic) NSString *avatorImgUrl; // @dynamic avatorImgUrl;
@property(nonatomic) _Bool isFollowed; // @dynamic isFollowed;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

