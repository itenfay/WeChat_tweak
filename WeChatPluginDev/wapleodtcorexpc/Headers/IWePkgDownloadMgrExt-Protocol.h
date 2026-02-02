//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WePkgDownloadMgr, WePkgFileDownloadInfo;

@protocol IWePkgDownloadMgrExt <NSObject>

@optional
- (void)downloadMgr:(WePkgDownloadMgr *)arg1 didFailForDownloadInfo:(WePkgFileDownloadInfo *)arg2 errCode:(int)arg3 NoAutoRetry:(_Bool)arg4;
- (void)downloadMgr:(WePkgDownloadMgr *)arg1 didSuccessForDownloadInfo:(WePkgFileDownloadInfo *)arg2;
@end

