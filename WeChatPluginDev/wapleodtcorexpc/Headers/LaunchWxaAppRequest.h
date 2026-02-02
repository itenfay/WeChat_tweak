//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, CommRequestSource, NSString, WxaAppBaseInfo, WxaClientPublicLibInfo, WxaJumpInfo, WxaMaterialInfo, WxaPluginInfo, WxaWebLaunchInfo;

@interface LaunchWxaAppRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *instanceId; // @dynamic instanceId;
@property(nonatomic) _Bool isFallback; // @dynamic isFallback;
@property(nonatomic) _Bool isFirstLaunch; // @dynamic isFirstLaunch;
@property(nonatomic) _Bool isParallelRequest; // @dynamic isParallelRequest;
@property(nonatomic) _Bool isSdkPrefetch; // @dynamic isSdkPrefetch;
@property(retain, nonatomic) WxaJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int launchMode; // @dynamic launchMode;
@property(retain, nonatomic) WxaMaterialInfo *materialInfo; // @dynamic materialInfo;
@property(nonatomic) int performanceLevel; // @dynamic performanceLevel;
@property(retain, nonatomic) WxaPluginInfo *pluginInfo; // @dynamic pluginInfo;
@property(retain, nonatomic) WxaClientPublicLibInfo *publicLib; // @dynamic publicLib;
@property(retain, nonatomic) CommRequestSource *requestSource; // @dynamic requestSource;
@property(nonatomic) unsigned int requestType; // @dynamic requestType;
@property(retain, nonatomic) NSString *sceneNote; // @dynamic sceneNote;
@property(retain, nonatomic) NSString *shortLink; // @dynamic shortLink;
@property(retain, nonatomic) WxaWebLaunchInfo *webLaunchInfo; // @dynamic webLaunchInfo;
@property(retain, nonatomic) WxaAppBaseInfo *wxaAppInfo; // @dynamic wxaAppInfo;
@property(retain, nonatomic) NSString *wxaUserName; // @dynamic wxaUserName;

@end

