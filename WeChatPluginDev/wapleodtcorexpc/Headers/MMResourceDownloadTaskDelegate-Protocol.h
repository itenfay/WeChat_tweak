//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMResourceDownloadTask, NSData;

@protocol MMResourceDownloadTaskDelegate <NSObject>
- (void)onDownloadFinish:(long long)arg1 downloadData:(NSData *)arg2 task:(MMResourceDownloadTask *)arg3;
@end

