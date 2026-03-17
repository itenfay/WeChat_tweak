//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSHTTPURLResponse, NSString, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, WKDownload;

@protocol WKDownloadDelegate <NSObject>
- (void)download:(WKDownload *)arg1 decideDestinationUsingResponse:(NSURLResponse *)arg2 suggestedFilename:(NSString *)arg3 completionHandler:(void (^)(NSURL *))arg4;

@optional
- (void)download:(WKDownload *)arg1 didFailWithError:(NSError *)arg2 resumeData:(NSData *)arg3;
- (void)downloadDidFinish:(WKDownload *)arg1;
- (void)download:(WKDownload *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)download:(WKDownload *)arg1 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg2 newRequest:(NSURLRequest *)arg3 decisionHandler:(void (^)(long long))arg4;
@end

