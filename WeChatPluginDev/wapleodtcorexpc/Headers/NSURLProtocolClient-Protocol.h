//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSCachedURLResponse, NSData, NSError, NSURLAuthenticationChallenge, NSURLProtocol, NSURLRequest, NSURLResponse;

@protocol NSURLProtocolClient <NSObject>
- (void)URLProtocol:(NSURLProtocol *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)URLProtocol:(NSURLProtocol *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)URLProtocol:(NSURLProtocol *)arg1 didFailWithError:(NSError *)arg2;
- (void)URLProtocolDidFinishLoading:(NSURLProtocol *)arg1;
- (void)URLProtocol:(NSURLProtocol *)arg1 didLoadData:(NSData *)arg2;
- (void)URLProtocol:(NSURLProtocol *)arg1 didReceiveResponse:(NSURLResponse *)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)URLProtocol:(NSURLProtocol *)arg1 cachedResponseIsValid:(NSCachedURLResponse *)arg2;
- (void)URLProtocol:(NSURLProtocol *)arg1 wasRedirectedToRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end

