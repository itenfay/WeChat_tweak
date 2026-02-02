//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface RequestPackageInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *moduleName; // @dynamic moduleName;
@property(nonatomic) unsigned int packageType; // @dynamic packageType;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

