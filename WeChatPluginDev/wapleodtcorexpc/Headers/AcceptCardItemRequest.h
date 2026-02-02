//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, StatisticInfo;

@interface AcceptCardItemRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardExt; // @dynamic cardExt;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(nonatomic) unsigned int isFollowService; // @dynamic isFollowService;
@property(retain, nonatomic) NSString *jsCheckinfoSessionUsername; // @dynamic jsCheckinfoSessionUsername;
@property(retain, nonatomic) NSString *jsCheckinfoUrl; // @dynamic jsCheckinfoUrl;
@property(retain, nonatomic) StatisticInfo *statisticInfo; // @dynamic statisticInfo;
@property(nonatomic) unsigned int statisticScene; // @dynamic statisticScene;

@end

