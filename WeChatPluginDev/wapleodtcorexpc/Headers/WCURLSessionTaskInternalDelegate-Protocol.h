//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSHTTPURLResponse, WCURLSessionConfiguration, WCURLSessionDataTask, WCURLSessionTask;

@protocol WCURLSessionTaskInternalDelegate <NSObject>
@property(readonly, nonatomic) WCURLSessionConfiguration *configuration;
- (void)urlSessionTask:(WCURLSessionDataTask *)arg1 didReceiveData:(NSData *)arg2;
- (void)urlSessionTask:(WCURLSessionDataTask *)arg1 didReceiveResponse:(NSHTTPURLResponse *)arg2 completionHandler:(void (^)(long long))arg3;
- (void)urlSessionTask:(WCURLSessionDataTask *)arg1 onProgressUpdate:(unsigned long long)arg2 currentBytes:(unsigned long long)arg3;
- (void)urlSessionTask:(WCURLSessionTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)sessionTaskOnComplete:(WCURLSessionTask *)arg1;
- (void)sessionTaskOnCancel:(WCURLSessionTask *)arg1;
- (void)sessionTaskOnResume:(WCURLSessionTask *)arg1;
@end

