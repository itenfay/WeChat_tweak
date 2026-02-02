//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PackageUrlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned int encryptVersion; // @dynamic encryptVersion;
@property(nonatomic) _Bool isPatch; // @dynamic isPatch;
@property(nonatomic) _Bool isZstd; // @dynamic isZstd;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *moduleName; // @dynamic moduleName;
@property(nonatomic) unsigned int packageType; // @dynamic packageType;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

