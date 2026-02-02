//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface SecureTunnelRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appUsername; // @dynamic appUsername;
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cmd; // @dynamic cmd;
@property(retain, nonatomic) NSString *reqbuf; // @dynamic reqbuf;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

