//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WePkgFileDownloadInfo;

@protocol WePkgDownloaderDelegate <NSObject>
- (void)downloaderDidFinishDownloadFor:(WePkgFileDownloadInfo *)arg1 TmpFilePath:(NSString *)arg2 isSuccess:(_Bool)arg3 isLocalValidFile:(_Bool)arg4;
@end

