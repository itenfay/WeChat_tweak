//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class WxaUseUserInfoRecord_PluginInfo, WxaUseUserInfoRecord_ScopeItem;

@interface WxaUseUserInfoRecord : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) WxaUseUserInfoRecord_PluginInfo *pluginInfo; // @dynamic pluginInfo;
@property(retain, nonatomic) WxaUseUserInfoRecord_ScopeItem *scopeItem; // @dynamic scopeItem;

@end

