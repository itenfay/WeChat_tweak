//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WADownloadFileTask;

@protocol WADownloadFileTaskDelegate <NSObject>
- (void)downloadFileTaskDidEnd:(WADownloadFileTask *)arg1;
@end

