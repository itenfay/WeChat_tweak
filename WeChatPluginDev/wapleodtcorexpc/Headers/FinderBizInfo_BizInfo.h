//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderBizInfo_BizAuthInfo, NSString;

@interface FinderBizInfo_BizInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderBizInfo_BizAuthInfo *authInfo; // @dynamic authInfo;
@property(retain, nonatomic) NSString *bizNickname; // @dynamic bizNickname;
@property(nonatomic) unsigned int bizUin; // @dynamic bizUin;
@property(retain, nonatomic) NSString *bizUsername; // @dynamic bizUsername;
@property(nonatomic) unsigned int friendFollowCount; // @dynamic friendFollowCount;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;

@end

