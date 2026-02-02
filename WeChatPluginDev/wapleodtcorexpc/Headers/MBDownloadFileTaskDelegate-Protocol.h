//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MBDownloadFileTask;

@protocol MBDownloadFileTaskDelegate <NSObject>
- (void)downloadFileTaskDidEnd:(MBDownloadFileTask *)arg1;
@end

