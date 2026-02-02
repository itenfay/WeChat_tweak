//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderVideoDownLoadMgrExt <NSObject>

@optional
- (void)finderMediaVideoStreamDownloadFailedWithTid:(NSString *)arg1;
- (void)finderMediaVideoDownloadQueueChange;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(NSString *)arg1;
@end

