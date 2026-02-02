//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURLProtocol;

@interface QBProtocolWorker : NSObject
{
    NSURLProtocol *_protocol;
}

+ (id)qbProxyCanonicalRequestForRequest:(id)arg1;
+ (id)qbProxyProtocolAddCustomHTTPHeader:(id)arg1;
+ (_Bool)qbProxyProtocolCanInitWithRequest:(id)arg1 isQBWebViewRequest:(_Bool)arg2;
+ (void)removeAuthenticationDelegate:(id)arg1;
+ (void)addAuthenticationDelegate:(id)arg1;
@property(nonatomic) __weak NSURLProtocol *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (void)qbProxyProtocolAfterSendRequest:(id)arg1;
- (void)qbProxyProtocolDidFinishLoadingWithCached:(id)arg1 errCode:(long long)arg2;
- (void)qbProxyProtocolDidStopLoading;
- (id)qbProxyProtocolWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)qbProxyProtocolDidFailWithError:(id)arg1;
- (void)qbProxyProtocolDidFinishLoading;
- (id)qbProxyProtocolDidReceiveData:(id)arg1;
- (_Bool)qbProxyProtocolDidReceiveResponse:(inout id *)arg1 error:(id *)arg2;
- (void)qbProxyProtocolDidStartLoading;
- (_Bool)qbProxyProtocolShouldStartLoading;
- (void)qbProxyProtocolDidInitialized;

@end

