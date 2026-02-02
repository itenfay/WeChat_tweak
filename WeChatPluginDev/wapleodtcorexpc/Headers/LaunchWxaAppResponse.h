//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ActionSheetInfo, BaseResponse, CheckJsApiInfo, LaunchAction, NSString, PublicLibUpdateInfo, WxaOperationInfo, WxaRuntimeInfo;

@interface LaunchWxaAppResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionSheetInfo *actionSheet; // @dynamic actionSheet;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cacheSeconds; // @dynamic cacheSeconds;
@property(retain, nonatomic) CheckJsApiInfo *checkJsApi; // @dynamic checkJsApi;
@property(retain, nonatomic) LaunchAction *launch; // @dynamic launch;
@property(retain, nonatomic) NSString *opConfig; // @dynamic opConfig;
@property(retain, nonatomic) NSString *openId; // @dynamic openId;
@property(retain, nonatomic) WxaOperationInfo *operation; // @dynamic operation;
@property(retain, nonatomic) PublicLibUpdateInfo *publicLibUpdate; // @dynamic publicLibUpdate;
@property(retain, nonatomic) WxaRuntimeInfo *runtimeInfo; // @dynamic runtimeInfo;
@property(nonatomic) _Bool showThirdBusiTips; // @dynamic showThirdBusiTips;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

