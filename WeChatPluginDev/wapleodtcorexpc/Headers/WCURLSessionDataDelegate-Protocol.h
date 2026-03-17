//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCURLSessionTaskDelegate-Protocol.h"

@class NSData, NSHTTPURLResponse, WCURLSession, WCURLSessionTask;

@protocol WCURLSessionDataDelegate <WCURLSessionTaskDelegate>

@optional
- (void)WCURLSession:(WCURLSession *)arg1 dataTask:(WCURLSessionTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)WCURLSession:(WCURLSession *)arg1 dataTask:(WCURLSessionTask *)arg2 didReceiveResponse:(NSHTTPURLResponse *)arg3 completionHandler:(void (^)(long long))arg4;
@end

