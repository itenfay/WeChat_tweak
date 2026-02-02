//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface WxaAppVersionInfo_CallPluginInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *alias; // @dynamic alias;
@property(nonatomic) unsigned int autoUpdate; // @dynamic autoUpdate;
@property(retain, nonatomic) NSMutableArray *contexts; // @dynamic contexts;
@property(nonatomic) unsigned int devKey; // @dynamic devKey;
@property(nonatomic) unsigned int innerVersion; // @dynamic innerVersion;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSString *pluginId; // @dynamic pluginId;
@property(retain, nonatomic) NSString *pluginUserName; // @dynamic pluginUserName;
@property(nonatomic) unsigned int pluginVersion; // @dynamic pluginVersion;
@property(retain, nonatomic) NSString *prefixPath; // @dynamic prefixPath;
@property(retain, nonatomic) NSString *versionDesc; // @dynamic versionDesc;

@end

