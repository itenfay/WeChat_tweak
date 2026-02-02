//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSCachedURLResponse, NSData, NSURLResponse, NSURLSession, NSURLSessionDataTask, NSURLSessionDownloadTask, NSURLSessionStreamTask;

@protocol NSURLSessionDataDelegate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 willCacheResponse:(NSCachedURLResponse *)arg3 completionHandler:(void (^)(NSCachedURLResponse *))arg4;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didBecomeStreamTask:(NSURLSessionStreamTask *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didBecomeDownloadTask:(NSURLSessionDownloadTask *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(long long))arg4;
@end

