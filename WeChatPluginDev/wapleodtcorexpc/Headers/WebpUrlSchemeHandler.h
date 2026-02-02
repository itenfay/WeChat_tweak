//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WebpUrlSchemeHandler : NSObject
{
    NSMutableDictionary *_taskDic;
}

+ (void)installSchemeTo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *taskDic; // @synthesize taskDic=_taskDic;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

