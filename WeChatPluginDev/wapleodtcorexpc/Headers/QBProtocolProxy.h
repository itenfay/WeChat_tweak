//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURLProtocol, QBProtocolWorker;

@interface QBProtocolProxy : NSObject
{
    QBProtocolWorker *_worker;
    int _resType;
    _Bool _isQBWebViewRequest;
    unsigned long long _byteLength;
    NSURLProtocol *_protocol;
}

+ (_Bool)workerClassRespondsToSelector:(SEL)arg1;
+ (_Bool)protocolRequestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)protocolCanonicalRequestForRequest:(id)arg1;
+ (id)protocolAddCustomHTTPHeader:(id)arg1;
+ (_Bool)protocolCanInitWithRequest:(id)arg1 isQBWebViewRequest:(_Bool)arg2;
+ (void)setProtocolWorkerClass:(Class)arg1;
+ (unsigned long long)indexOfDelegate:(id)arg1;
+ (void)removeProxyAuthenticationDelegate:(id)arg1;
+ (void)addProxyAuthenticationDelegate:(id)arg1;
+ (id)validURLForRequest:(id)arg1;
@property(nonatomic) __weak NSURLProtocol *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (_Bool)protocolDidReceiveChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 forURL:(id)arg3;
- (_Bool)protocolWillSendRequestForAuthenticationChallenge:(id)arg1 forURL:(id)arg2;
- (void)protocolAfterSendRequest:(id)arg1;
- (void)protocolDidSendRequest:(id)arg1 type:(long long)arg2;
- (void)protocolDidResolveDNS:(double)arg1 type:(unsigned long long)arg2 address:(id)arg3 errCode:(long long)arg4;
- (void)protocolDidStopLoading;
- (id)protocolWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)protocolDidFailWithError:(id)arg1;
- (void)protocolDidFinishLoadingWithCached:(id)arg1 errCode:(long long)arg2;
- (void)protocolDidFinishLoading;
- (id)protocolDidReceiveData:(id)arg1;
- (_Bool)protocolDidReceiveResponse:(inout id *)arg1 error:(id *)arg2;
- (void)protocolDidStartLoading;
- (_Bool)protocolShouldStartLoading;
- (void)protocolDidInitialized:(id)arg1 resourceType:(int)arg2;

@end

