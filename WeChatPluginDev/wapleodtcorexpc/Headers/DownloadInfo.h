//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, YYB;

@interface DownloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *alternativeDownloadUrl; // @dynamic alternativeDownloadUrl;
@property(retain, nonatomic) NSString *androidApkMd5; // @dynamic androidApkMd5;
@property(nonatomic) unsigned int androidApkSize; // @dynamic androidApkSize;
@property(nonatomic) unsigned int downloadFlag; // @dynamic downloadFlag;
@property(retain, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(nonatomic) unsigned int downloaderType; // @dynamic downloaderType;
@property(retain, nonatomic) NSString *googlePlayDownloadUrl; // @dynamic googlePlayDownloadUrl;
@property(retain, nonatomic) YYB *yyb; // @dynamic yyb;

@end

