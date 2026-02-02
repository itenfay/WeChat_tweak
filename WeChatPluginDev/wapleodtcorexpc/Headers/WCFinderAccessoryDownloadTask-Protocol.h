//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderAccessoryDownloadTask <NSObject>
- (void)setCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)stopDownload;
- (void)startDownload;
- (unsigned long long)timestamp;
- (long long)priority;
- (NSString *)identifierKey;

@optional
- (long long)batchIndex;
- (NSString *)groupId;
@end

