//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WepkgBigPackage, WepkgPreloadFiles;

@interface WepkgVersionDownloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WepkgBigPackage *bigPackage; // @dynamic bigPackage;
@property(retain, nonatomic) NSString *charset; // @dynamic charset;
@property(nonatomic) unsigned int downloadNetworkType; // @dynamic downloadNetworkType;
@property(retain, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(retain, nonatomic) NSString *entranceDomain; // @dynamic entranceDomain;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) WepkgPreloadFiles *preloadFiles; // @dynamic preloadFiles;
@property(nonatomic) unsigned int sizeInBytes; // @dynamic sizeInBytes;

@end

