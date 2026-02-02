//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnDownloadTaskInfo, NSString;

@protocol CdnServiceDownloadMgrExt <NSObject>
- (void)onDownloadProgress:(NSString *)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onDownloadSuccess:(CdnDownloadTaskInfo *)arg1;
- (void)onDownloadFail:(CdnDownloadTaskInfo *)arg1;
@end

