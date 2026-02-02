//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface WSWebViewPlugin_ParallelRequest
{
    MISSING_TYPE *pRequestID;
    MISSING_TYPE *parallelHandlerDict;
    MISSING_TYPE *eventResponseDict;
    MISSING_TYPE *$__lazy_storage_$_tempWebview;
}

- (void).cxx_destruct;
- (id)init;
- (id)webView;
- (id)getWebViewOwner;
- (unsigned long long)getLocalJSBusinessType;
- (void)eventEndWithHandler:(id)arg1 result:(id)arg2;
- (void)sendEvent:(id)arg1 handler:(id)arg2 result:(id)arg3;
- (void)dispatch:(id)arg1 params:(id)arg2;
- (_Bool)tryUseCacheWithRealEventHandler:(id)arg1;
@property(nonatomic) unsigned long long pRequestID; // @synthesize pRequestID;
- (id)genReqSearchParams:(id)arg1;
- (_Bool)shouldEnabelParallelReqSearch;
- (_Bool)tryParallelAsyncWebSearch:(unsigned long long)arg1 sessionID:(id)arg2 scene:(unsigned int)arg3 query:(id)arg4 initExtParams:(id)arg5;

@end

