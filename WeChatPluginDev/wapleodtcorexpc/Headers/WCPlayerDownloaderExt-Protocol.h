//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnComVideoProcessInfo, CdnDownloadTaskInfo, CdnProgressInfo, NSString;

@protocol WCPlayerDownloaderExt <NSObject>

@optional
- (void)OnCdnVideoPreloadCompleted:(CdnProgressInfo *)arg1;
- (void)OnCdnDownloadError:(CdnDownloadTaskInfo *)arg1;
- (void)OnCdnDownloadSuccess:(CdnDownloadTaskInfo *)arg1;
- (void)OnPlayerDownloadProgress:(NSString *)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnPlayerMoovReady:(CdnComVideoProcessInfo *)arg1;
@end

