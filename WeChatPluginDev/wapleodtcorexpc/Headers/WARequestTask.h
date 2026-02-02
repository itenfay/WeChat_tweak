//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURLSession, NSURLSessionTask, WARequestConfig;
@protocol OS_dispatch_queue, WARequestTaskDelegate;

@interface WARequestTask : NSObject
{
    struct shared_ptr<CronetRequestCallback> m_pCallback;
    struct CronetTaskParams params_request;
    NSString *_appID;
    NSURLSession *_urlSession;
    NSString *_taskID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_url;
    NSString *_method;
    NSDictionary *_dicTaskContext;
    CDUnknownBlockType _completionHandler;
    NSURLSessionTask *_task;
    unsigned int _appServiceType;
    unsigned int _requestMaxConcurrentCount;
    basic_string_5909a4e2 _cronetTaskID;
    NSString *_nsCronetTaskID;
    double _timeout;
    _Bool _isCronetRequest;
    _Bool _useQuic;
    _Bool _useHttp2;
    _Bool _useCache;
    _Bool _useChunked;
    _Bool _callbackHasBeenDone;
    _Bool _hasCancelTimeOut;
    WARequestConfig *_requestConfig;
    _Bool _hasInvalidate;
    unsigned long long _beginCGITimestamp;
    unsigned long long _CGICallbackTimestamp;
    NSString *_redirectHost;
    _Bool _isManualRedirect;
    _Bool _isIgnoreCheckDomain;
    _Bool _isForceCellularNetwork;
    _Bool _isRedirectInvalid;
    unsigned int _workerId;
    id <WARequestTaskDelegate> delegate;
    unsigned long long _lastUpdateProgressAbsoluteTime;
    double _lastUpdateProgressPercent;
    long long _lastUpdateProgressWritten;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property long long lastUpdateProgressWritten; // @synthesize lastUpdateProgressWritten=_lastUpdateProgressWritten;
@property double lastUpdateProgressPercent; // @synthesize lastUpdateProgressPercent=_lastUpdateProgressPercent;
@property unsigned long long lastUpdateProgressAbsoluteTime; // @synthesize lastUpdateProgressAbsoluteTime=_lastUpdateProgressAbsoluteTime;
@property(nonatomic) _Bool isRedirectInvalid; // @synthesize isRedirectInvalid=_isRedirectInvalid;
@property(nonatomic) _Bool isForceCellularNetwork; // @synthesize isForceCellularNetwork=_isForceCellularNetwork;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
@property(nonatomic) _Bool isIgnoreCheckDomain; // @synthesize isIgnoreCheckDomain=_isIgnoreCheckDomain;
@property __weak id <WARequestTaskDelegate> delegate; // @synthesize delegate;
- (void)OnProgress:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)OnReceiveHeader:(const void *)arg1 status_code:(int)arg2 protocol:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (void)OnReceiveChunkedData:(const char *)arg1 length:(unsigned long long)arg2;
- (void)OnCompleted:(const void *)arg1;
- (void)reportTaskRecord:(id)arg1 url:(id)arg2 method:(id)arg3 statusCode:(unsigned int)arg4 result:(_Bool)arg5;
- (void)sendRequestTaskStateChange:(id)arg1;
- (void)callChunkedHandler:(id)arg1;
- (void)callCompletionHandler:(id)arg1 errNo:(id)arg2 string:(id)arg3 buffer:(id)arg4 statusCode:(long long)arg5 responseHeader:(id)arg6 profile:(id)arg7 clientInfo:(id)arg8;
- (void)callCompletionHandlerWithString:(id)arg1 buffer:(id)arg2 statusCode:(long long)arg3 responseHeader:(id)arg4 profile:(id)arg5;
- (void)callCompletionHandlerWithError:(id)arg1 errNo:(id)arg2;
- (void)callCompletionHandlerWithURLError:(id)arg1 errNo:(id)arg2 clientInfo:(id)arg3;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (id)headerDictionaryFromResponse:(id)arg1;
- (void)markRedirectFail:(id)arg1;
- (id)task;
- (void)invalidate;
- (void)cancelWithError:(id)arg1 errNo:(id)arg2;
- (void)cancel;
- (void)workThread_onCronetResponse:(id)arg1 data:(id)arg2 error:(id)arg3 status:(long long)arg4 profile:(id)arg5;
- (void)workThread_onResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)anyThread_didCronetReceiveResponse:(id)arg1 status:(long long)arg2;
- (void)anyThread_didReceiveResponse:(id)arg1;
- (void)onCronetResponse:(id)arg1 data:(id)arg2 error:(id)arg3 status:(long long)arg4 profile:(id)arg5;
- (void)onResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)anyThread_didCronetSendoutRequest:(id)arg1;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)startWithURL:(id)arg1 postData:(id)arg2 httpHeaders:(id)arg3 timeoutMS:(unsigned int)arg4 userAgent:(id)arg5 referer:(id)arg6 method:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)callCronetRequest:(struct CronetTaskParams)arg1;
- (void)cronetRequestTimeOut;
- (void)startCronetWithURL:(id)arg1 ip:(id)arg2 port:(unsigned int)arg3 host:(id)arg4 forbidReuse:(_Bool)arg5 postData:(id)arg6 httpHeaders:(id)arg7 timeoutMS:(unsigned int)arg8 userAgent:(id)arg9 referer:(id)arg10 method:(id)arg11 completionHandler:(CDUnknownBlockType)arg12;
- (id)getTaskID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 taskID:(id)arg3 workQueue:(id)arg4 requestConfig:(id)arg5 isUseCronet:(_Bool)arg6 useQuic:(_Bool)arg7 useHttp2:(_Bool)arg8 useCache:(_Bool)arg9 useChunked:(_Bool)arg10 appType:(unsigned int)arg11 context:(id)arg12;

@end

