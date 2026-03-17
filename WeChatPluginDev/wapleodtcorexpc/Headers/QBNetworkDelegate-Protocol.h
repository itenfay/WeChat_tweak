//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSCachedURLResponse, NSData, NSError, NSString, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, QBNetwork;

@protocol QBNetworkDelegate <NSObject>

@optional
- (NSString *)qbNetworkOriginHost:(QBNetwork *)arg1;
- (void)qbNetwork:(QBNetwork *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)qbNetwork:(QBNetwork *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)qbNetworkShouldUseCredentialStorage:(QBNetwork *)arg1;
- (NSCachedURLResponse *)qbNetwork:(QBNetwork *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2;
- (void)qbNetwork:(QBNetwork *)arg1 didFailWithError:(NSError *)arg2;
- (void)qbNetworkDidFinishLoading:(QBNetwork *)arg1;
- (void)qbNetwork:(QBNetwork *)arg1 didReceiveData:(NSData *)arg2;
- (void)qbNetwork:(QBNetwork *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (NSURLRequest *)qbNetwork:(QBNetwork *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end

