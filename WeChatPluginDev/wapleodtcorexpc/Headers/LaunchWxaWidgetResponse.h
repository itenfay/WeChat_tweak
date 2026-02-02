//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, CheckJsApiInfo, WidgetLaunchAction, WidgetVersionInfo, WxaWidgetSetting;

@interface LaunchWxaWidgetResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CheckJsApiInfo *checkJsApi; // @dynamic checkJsApi;
@property(retain, nonatomic) WidgetLaunchAction *launch; // @dynamic launch;
@property(retain, nonatomic) WxaWidgetSetting *setting; // @dynamic setting;
@property(retain, nonatomic) WidgetVersionInfo *versionInfo; // @dynamic versionInfo;

@end

