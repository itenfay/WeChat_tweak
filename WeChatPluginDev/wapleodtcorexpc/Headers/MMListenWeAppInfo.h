//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMListenWeAppInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) NSString *dataUrl; // @dynamic dataUrl;
@property(nonatomic) _Bool isFile; // @dynamic isFile;
@property(nonatomic) _Bool isHls; // @dynamic isHls;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;
@property(retain, nonatomic) NSString *webUrl; // @dynamic webUrl;

@end

