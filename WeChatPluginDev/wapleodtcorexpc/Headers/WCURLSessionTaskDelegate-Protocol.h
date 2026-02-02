//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCURLSessionDelegate-Protocol.h"

@class NSError, WCURLSession, WCURLSessionTask;

@protocol WCURLSessionTaskDelegate <WCURLSessionDelegate>

@optional
- (void)WCURLSession:(WCURLSession *)arg1 task:(WCURLSessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
@end

