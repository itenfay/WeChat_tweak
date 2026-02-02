//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WePkgWorker
{
}

+ (id)qbProxyProtocolAddCustomHTTPHeader:(id)arg1;
+ (_Bool)qbProxyProtocolCanInitWithRequest:(id)arg1 isQBWebViewRequest:(_Bool)arg2;
- (void)qbProxyProtocolDidStopLoading;
- (id)qbProxyProtocolWillSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)qbProxyProtocolDidFailWithError:(id)arg1;
- (void)qbProxyProtocolDidFinishLoading;
- (id)qbProxyProtocolDidReceiveData:(id)arg1;
- (_Bool)qbProxyProtocolDidReceiveResponse:(inout id *)arg1 error:(out id *)arg2;
- (void)qbProxyProtocolDidStartLoading;
- (_Bool)qbProxyProtocolShouldStartLoading;
- (void)qbProxyProtocolDidInitialized;

@end

