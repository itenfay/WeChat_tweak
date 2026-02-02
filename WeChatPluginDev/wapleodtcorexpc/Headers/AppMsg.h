//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface AppMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) NSString *jsAppId; // @dynamic jsAppId;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) int remindId; // @dynamic remindId;
@property(nonatomic) unsigned int sdkVersion; // @dynamic sdkVersion;
@property(retain, nonatomic) NSString *shareUrlOpen; // @dynamic shareUrlOpen;
@property(retain, nonatomic) NSString *shareUrlOriginal; // @dynamic shareUrlOriginal;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) SKBuiltinBuffer_t *thumb; // @dynamic thumb;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

