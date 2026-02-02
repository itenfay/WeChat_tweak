//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, WxaExternalInfo, WxaPluginAppInfo;

@interface JSAuthorizeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) WxaExternalInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *jsapiName; // @dynamic jsapiName;
@property(nonatomic) _Bool needPrivacyProtectInfo; // @dynamic needPrivacyProtectInfo;
@property(retain, nonatomic) WxaPluginAppInfo *pluginInfo; // @dynamic pluginInfo;
@property(retain, nonatomic) NSMutableArray *scope; // @dynamic scope;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

