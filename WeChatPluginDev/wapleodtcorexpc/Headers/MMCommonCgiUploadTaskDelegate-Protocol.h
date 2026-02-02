//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMCommonCgiUploadTask, ParallelUploadResponse;

@protocol MMCommonCgiUploadTaskDelegate <NSObject>
- (void)onTaskFailure:(MMCommonCgiUploadTask *)arg1 canRetry:(_Bool)arg2 retCode:(long long)arg3;
- (void)onTaskSuccess:(MMCommonCgiUploadTask *)arg1 response:(ParallelUploadResponse *)arg2;
@end

