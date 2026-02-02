//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderMediaCdnInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int beginUsePcdnBufferSeconds; // @dynamic beginUsePcdnBufferSeconds;
@property(retain, nonatomic) NSString *cdnBackupUrl; // @dynamic cdnBackupUrl;
@property(nonatomic) unsigned int cdnEnableQuic; // @dynamic cdnEnableQuic;
@property(retain, nonatomic) NSString *cdnUrl; // @dynamic cdnUrl;
@property(nonatomic) _Bool enablePcdn; // @dynamic enablePcdn;
@property(nonatomic) unsigned int exitUsePcdnBufferSeconds; // @dynamic exitUsePcdnBufferSeconds;
@property(nonatomic) int isAccessUgc; // @dynamic isAccessUgc;
@property(nonatomic) unsigned int marsPreDownloadKbytes; // @dynamic marsPreDownloadKbytes;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) unsigned int pcdnTimeoutRetryCount; // @dynamic pcdnTimeoutRetryCount;
@property(retain, nonatomic) NSString *pcdnUrl; // @dynamic pcdnUrl;
@property(nonatomic) unsigned int preloadBeginUsePcdnBufferKbytes; // @dynamic preloadBeginUsePcdnBufferKbytes;
@property(nonatomic) unsigned long long validTimestamp; // @dynamic validTimestamp;

@end

