//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnDownloadTaskInfo;

@protocol MMResourceCdnDownloaderNotifierDelegate <NSObject>
- (void)onCdnDownloadFinish:(CdnDownloadTaskInfo *)arg1;
@end

