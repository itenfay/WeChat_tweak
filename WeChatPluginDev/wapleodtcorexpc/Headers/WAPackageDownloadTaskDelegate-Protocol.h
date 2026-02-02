//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WACronetDownloadTaskInfo, WACronetProgressInfo, WAPackageDownloadProtocolInfo;

@protocol WAPackageDownloadTaskDelegate <NSObject>
- (void)OnCronetDownloadProgress:(WACronetProgressInfo *)arg1;
- (void)onCronetDownloadResponse:(WACronetDownloadTaskInfo *)arg1 filePath:(NSString *)arg2 protocolInfo:(WAPackageDownloadProtocolInfo *)arg3;
@end

