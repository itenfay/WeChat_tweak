//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, RequestPackageInfo;

@interface GetDownloadUrlRespItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(retain, nonatomic) NSString *customVersion; // @dynamic customVersion;
@property(nonatomic) int errcode; // @dynamic errcode;
@property(nonatomic) _Bool isPatch; // @dynamic isPatch;
@property(nonatomic) _Bool isZstd; // @dynamic isZstd;
@property(nonatomic) unsigned int lifespan; // @dynamic lifespan;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *newCustomVersion; // @dynamic newCustomVersion;
@property(retain, nonatomic) RequestPackageInfo *reqPackageInfo; // @dynamic reqPackageInfo;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

