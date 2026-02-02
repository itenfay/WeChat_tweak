//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WxaCommUseInfo;

@interface WxaAppItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appDesc; // @dynamic appDesc;
@property(retain, nonatomic) NSString *appPath; // @dynamic appPath;
@property(nonatomic) unsigned int appPattern; // @dynamic appPattern;
@property(retain, nonatomic) WxaCommUseInfo *commuseInfo; // @dynamic commuseInfo;
@property(nonatomic) _Bool isFromOuter; // @dynamic isFromOuter;
@property(nonatomic) long long order; // @dynamic order;
@property(nonatomic) unsigned int updateTime; // @dynamic updateTime;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

