//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GameHaowanUploadTask, NSArray, NSError;

@protocol GameHaowanUploadTaskDelegate <NSObject>

@optional
- (void)uploadTask:(GameHaowanUploadTask *)arg1 willRetryWithCount:(unsigned long long)arg2;
- (void)uploadTask:(GameHaowanUploadTask *)arg1 didProgressChanged:(float)arg2;
- (_Bool)uploadTask:(GameHaowanUploadTask *)arg1 didFailedWithError:(NSError *)arg2 canRetry:(_Bool)arg3;
- (void)uploadTask:(GameHaowanUploadTask *)arg1 didSucceedWithResIds:(NSArray *)arg2;
@end

