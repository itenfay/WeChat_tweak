//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface BizBaseInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bizRecommendUrl; // @dynamic bizRecommendUrl;
@property(nonatomic) unsigned int friendSubscribeCount; // @dynamic friendSubscribeCount;
@property(retain, nonatomic) NSString *friendSubscribeStr; // @dynamic friendSubscribeStr;
@property(nonatomic) unsigned int isSubscribed; // @dynamic isSubscribed;
@property(nonatomic) unsigned int originalArticleCount; // @dynamic originalArticleCount;
@property(retain, nonatomic) NSString *originalContentStr; // @dynamic originalContentStr;

@end

