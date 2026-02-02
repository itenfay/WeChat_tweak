//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WxaSyncBaseCmd;

@interface WxaSyncGetCodeCmd : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(retain, nonatomic) WxaSyncBaseCmd *base; // @dynamic base;
@property(nonatomic) _Bool isEncrypt; // @dynamic isEncrypt;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *needBackupDomain; // @dynamic needBackupDomain;
@property(nonatomic) _Bool needRouteNewGetCdnUrlCgi; // @dynamic needRouteNewGetCdnUrlCgi;
@property(nonatomic) unsigned int netWork; // @dynamic netWork;
@property(retain, nonatomic) NSString *packageKey; // @dynamic packageKey;
@property(nonatomic) unsigned int packageType; // @dynamic packageType;
@property(nonatomic) unsigned int retryInterval; // @dynamic retryInterval;
@property(nonatomic) unsigned int retryTime; // @dynamic retryTime;

@end

