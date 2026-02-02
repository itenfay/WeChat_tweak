//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WepkgDownloadInfo;

@interface WepkgFileInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WepkgDownloadInfo *downloadInfo; // @dynamic downloadInfo;
@property(retain, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(retain, nonatomic) NSString *rid; // @dynamic rid;

@end

