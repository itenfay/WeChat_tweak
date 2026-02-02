//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSURLProtocol.h>

@class NSDate, NSString, QBDNSQueryItem, QBNetwork, QBProtocolProxy;

@interface QBProxyURLProtocol : NSURLProtocol
{
    long long _directReasonType;
    _Bool _stopLoading;
    int _resourceType;
    QBProtocolProxy *_protocolProxy;
    QBDNSQueryItem *_currentQueryItem;
    QBDNSQueryItem *_preQueryItem;
    NSDate *_startTime;
    long long _dnsHTTPStatus;
    long long _preQueryErr;
    _Bool _isTBSInnerRequest;
    _Bool _isHTMLRespnse;
    _Bool _hadProceJs;
    _Bool _hadFindFirstFlag;
    unsigned char _FindInsertPostionStatus;
    char *_firstTag;
    unsigned long long _firstTagPos;
    _Bool _firstTagFound;
    _Bool _isWKType;
    _Bool _hadCSPHeader;
    _Bool _NoRspCharset;
    NSString *_originPOSTURLString;
    QBNetwork *_network;
}

+ (struct _opaque_pthread_t *)getWebThread;
+ (void)getSystemThreads;
+ (id)toInjectScriptTags;
+ (void)removeAllFrameInfo;
+ (void)removeFrameInfoWithAddress:(id)arg1;
+ (_Bool)isFrameSrcForInjectWithURLString:(id)arg1;
+ (_Bool)isFrameSrcForRedirectWithURLString:(id)arg1;
+ (void)addFrameInfoWithAddress:(id)arg1 withURLString:(id)arg2;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)isTBSInnerURL:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)getCurrentMainURL;
+ (void)setCurrentMainURL:(id)arg1;
+ (void)startProxyWithWorker:(Class)arg1;
@property(retain, nonatomic) QBNetwork *network; // @synthesize network=_network;
- (void).cxx_destruct;
- (void)reportDNSDadRequest:(long long)arg1 aInterval:(long long)arg2 bInterval:(long long)arg3 cInterval:(long long)arg4;
- (id)qbNetworkOriginHost:(id)arg1;
- (void)qbNetwork:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)qbNetwork:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (struct __SecTrust *)newServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (id)qbNetwork:(id)arg1 willCacheResponse:(id)arg2;
- (id)qbNetwork:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)qbNetwork:(id)arg1 didFailWithError:(id)arg2;
- (void)qbNetworkDidFinishLoading:(id)arg1;
- (void)qbNetwork:(id)arg1 didReceiveData:(id)arg2;
- (void)sendRspToWebView:(id)arg1;
- (void)qbNetwork:(id)arg1 didReceiveResponse:(id)arg2;
- (void)ifNeedNotfiyJsGetCookieResponse:(id)arg1;
- (_Bool)isNeedSpecialRedirectedProcessByHttpResponseHeaders:(id)arg1;
- (void)sendRspToWebViewForRedirectWithLocation:(id)arg1;
- (_Bool)isNeedProcRedirectForLess_9_2_IOS;
- (id)injectScriptToData:(id)arg1;
- (void)recordRspContentType:(id)arg1;
- (_Bool)returnCacheDataFor304:(unsigned long long)arg1;
- (_Bool)isValidateConditionalRequest;
- (_Bool)canLoadCacheData;
- (id)cachedURLResponseIfPossible:(long long *)arg1;
- (long long)isValidCachedResponse:(id)arg1;
- (_Bool)isValidVary:(id)arg1 withResponse:(id)arg2;
- (void)dealloc;
- (void)mttStopLoading;
- (void)stopLoading;
- (void)_doSendRequest:(id)arg1 directType:(long long)arg2;
- (void)_doSendRequestWarpper:(id)arg1;
- (id)_dnsQueryItem:(id)arg1 cached:(_Bool)arg2;
- (void)_sendRequestDirect:(long long)arg1;
- (void)mttStartLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

