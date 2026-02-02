//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WepkgCmd, WepkgInfo, WepkgVersionDownloadInfo;

@interface CheckWepkgVersionResponse_PkgItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WepkgVersionDownloadInfo *downloadInfo; // @dynamic downloadInfo;
@property(retain, nonatomic) WepkgCmd *pkgCmd; // @dynamic pkgCmd;
@property(retain, nonatomic) NSString *pkgId; // @dynamic pkgId;
@property(retain, nonatomic) WepkgInfo *pkgInfo; // @dynamic pkgInfo;

@end

