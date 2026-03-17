//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSURLConnectionDelegate-Protocol.h"

@class NSCachedURLResponse, NSData, NSInputStream, NSURLConnection, NSURLRequest, NSURLResponse;

@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>

@optional
- (void)connectionDidFinishLoading:(NSURLConnection *)arg1;
- (NSCachedURLResponse *)connection:(NSURLConnection *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2;
- (void)connection:(NSURLConnection *)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (NSInputStream *)connection:(NSURLConnection *)arg1 needNewBodyStream:(NSURLRequest *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (NSURLRequest *)connection:(NSURLConnection *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end

