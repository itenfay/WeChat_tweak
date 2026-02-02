//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetWxaAppCDNDownloadUrlRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool gzCompress; // @dynamic gzCompress;
@property(retain, nonatomic) NSString *moduleName; // @dynamic moduleName;
@property(nonatomic) unsigned int oldAppVersion; // @dynamic oldAppVersion;
@property(nonatomic) unsigned int packageType; // @dynamic packageType;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *versionMd5; // @dynamic versionMd5;

@end

