//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, ShareTag, StatisticInfo;

@interface ShareCardItemRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appUserName; // @dynamic appUserName;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *consumedboxCardId; // @dynamic consumedboxCardId;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(nonatomic) unsigned int isShareOwncard; // @dynamic isShareOwncard;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(retain, nonatomic) ShareTag *shareTag; // @dynamic shareTag;
@property(retain, nonatomic) StatisticInfo *statisticInfo; // @dynamic statisticInfo;

@end

