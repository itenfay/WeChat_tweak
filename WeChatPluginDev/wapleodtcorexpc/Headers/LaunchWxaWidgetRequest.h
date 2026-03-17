//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString, WxaWidgetBaseInfo;

@class WXPBGeneratedMessage;

@interface LaunchWxaWidgetRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int requestType; // @dynamic requestType;
@property(retain, nonatomic) WxaWidgetBaseInfo *wxaWidgetInfo; // @dynamic wxaWidgetInfo;

@end

