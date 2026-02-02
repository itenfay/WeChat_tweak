//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WepkgPatchDownloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int downloadNetworkType; // @dynamic downloadNetworkType;
@property(retain, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int sizeInBytes; // @dynamic sizeInBytes;

@end

