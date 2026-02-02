//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LocalPackageInfo, NSString, RequestPackageInfo;

@interface GetDownloadUrlReqItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(nonatomic) unsigned int devUin; // @dynamic devUin;
@property(retain, nonatomic) LocalPackageInfo *localPackageInfo; // @dynamic localPackageInfo;
@property(retain, nonatomic) NSString *needBackupDomain; // @dynamic needBackupDomain;
@property(nonatomic) _Bool needLatestVersion; // @dynamic needLatestVersion;
@property(nonatomic) _Bool needZstd; // @dynamic needZstd;
@property(retain, nonatomic) RequestPackageInfo *reqPackageInfo; // @dynamic reqPackageInfo;
@property(retain, nonatomic) NSString *semverVersion; // @dynamic semverVersion;
@property(nonatomic) unsigned int supportedEncryptVersion; // @dynamic supportedEncryptVersion;
@property(retain, nonatomic) NSString *versionDesc; // @dynamic versionDesc;

@end

