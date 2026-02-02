//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURLSession, NSURLSessionDownloadTask, WADownloadFileConfig, WADownloadFileProgressInfo;
@protocol OS_dispatch_queue, WADownloadFileTaskDelegate;

@interface WADownloadFileTask : NSObject
{
    struct shared_ptr<CronetDownloadCallback> m_pCallback;
    struct CronetTaskParams params_download;
    NSString *_appID;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSString *_taskID;
    NSURLSessionDownloadTask *_task;
    CDUnknownBlockType _completionHandler;
    _Bool _isRedirectInvalid;
    NSString *_url;
    NSMutableDictionary *_dicContext;
    _Bool _isFirstPkg;
    unsigned int _appServiceType;
    unsigned int _downloadMaxConcurrentCount;
    basic_string_5909a4e2 _cronetTaskID;
    NSString *_nsCronetTaskID;
    double _timeout;
    _Bool _isCronetDownload;
    _Bool _useQuic;
    _Bool _useHttp2;
    _Bool _useCache;
    _Bool _hasCallBack;
    WADownloadFileConfig *_downloadFileConfig;
    NSString *_redirectHost;
    unsigned long long _beginCGITimestamp;
    unsigned long long _CGICallbackTimestamp;
    _Bool _isIgnoreCheckDomain;
    _Bool _isExceedMaxFileSize;
    _Bool _isCanceled;
    unsigned int _timeoutMS;
    unsigned int _workerId;
    id <WADownloadFileTaskDelegate> delegate;
    NSDictionary *_dichttpHeader;
    NSMutableDictionary *_dicTaskContext;
    NSString *_userAgent;
    NSString *_httpHeaderReferer;
    CDUnknownBlockType _headerHandler;
    CDUnknownBlockType _progressHandler;
    NSString *_savePath;
    NSString *_localID;
    unsigned long long _lastUpdateProgressAbsoluteTime;
    WADownloadFileProgressInfo *_lastNotNotifyProgressInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) WADownloadFileProgressInfo *lastNotNotifyProgressInfo; // @synthesize lastNotNotifyProgressInfo=_lastNotNotifyProgressInfo;
@property unsigned long long lastUpdateProgressAbsoluteTime; // @synthesize lastUpdateProgressAbsoluteTime=_lastUpdateProgressAbsoluteTime;
@property _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(retain) NSString *localID; // @synthesize localID=_localID;
@property(retain) NSString *savePath; // @synthesize savePath=_savePath;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType headerHandler; // @synthesize headerHandler=_headerHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) unsigned int workerId; // @synthesize workerId=_workerId;
@property(retain, nonatomic) NSString *httpHeaderReferer; // @synthesize httpHeaderReferer=_httpHeaderReferer;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) unsigned int timeoutMS; // @synthesize timeoutMS=_timeoutMS;
@property(retain) NSMutableDictionary *dicTaskContext; // @synthesize dicTaskContext=_dicTaskContext;
@property(retain) NSDictionary *dichttpHeader; // @synthesize dichttpHeader=_dichttpHeader;
@property(retain) NSString *url; // @synthesize url=_url;
@property _Bool isExceedMaxFileSize; // @synthesize isExceedMaxFileSize=_isExceedMaxFileSize;
@property(nonatomic) _Bool isIgnoreCheckDomain; // @synthesize isIgnoreCheckDomain=_isIgnoreCheckDomain;
@property __weak id <WADownloadFileTaskDelegate> delegate; // @synthesize delegate;
- (void)OnReceiveHeader:(const void *)arg1 status_code:(int)arg2 protocol:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (void)OnProgress:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)OnCompleted:(const void *)arg1;
- (void)onCronetResponse:(id)arg1 mimeType:(id)arg2 error:(id)arg3 status:(long long)arg4 header:(id)arg5 profile:(id)arg6;
- (void)reportTaskRecord:(id)arg1 url:(id)arg2 method:(id)arg3 statusCode:(unsigned int)arg4 result:(_Bool)arg5;
- (void)flushProgressNotifcation;
- (void)notifyProgressWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)taskDidEnd;
- (id)workerQueue;
- (void)callCompletionHandlerWithResult:(id)arg1 error:(id)arg2 errNo:(id)arg3;
- (void)setProgressHandler:(CDUnknownBlockType)arg1 headerHandler:(CDUnknownBlockType)arg2;
- (void)markRedirectFail:(id)arg1;
- (id)task;
- (void)cancelWithError:(id)arg1 errNo:(id)arg2;
- (void)cancelForExceedMaxSize;
- (void)cancel;
- (void)taskDidCompleteCronetWithError:(id)arg1 statusCode:(unsigned long long)arg2 header:(id)arg3 profile:(id)arg4;
- (void)taskDidCompleteWithError:(id)arg1 statusCode:(unsigned long long)arg2;
- (void)anyThread_didFinishCronetDownloadingToURL:(id)arg1 mimeType:(id)arg2 url:(id)arg3;
- (void)anyThread_didFinishDownloadingToURL:(id)arg1 mimeType:(id)arg2 url:(id)arg3;
- (void)anyThread_updateTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)anyThread_didCronetReceiveResponse:(id)arg1;
- (void)anyThread_didReceiveResponse;
- (void)anyThread_didCronetSendoutRequest:(id)arg1;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)startWithURL:(id)arg1 httpHeaders:(id)arg2 timeoutMS:(unsigned int)arg3 userAgent:(id)arg4 referer:(id)arg5 context:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 headerHandler:(CDUnknownBlockType)arg8 progressHandler:(CDUnknownBlockType)arg9;
- (void)callCronetDownload:(struct CronetTaskParams)arg1;
- (void)cronetDwonloadTimeOut;
- (void)startCronetWithURL:(id)arg1 httpHeaders:(id)arg2 timeoutMS:(unsigned int)arg3 userAgent:(id)arg4 referer:(id)arg5 context:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 headerHandler:(CDUnknownBlockType)arg8 progressHandler:(CDUnknownBlockType)arg9;
- (id)getTaskID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 urlSession:(id)arg2 workerQueue:(id)arg3 taskID:(id)arg4 downloadConfig:(id)arg5 isUseCronet:(_Bool)arg6 useQuic:(_Bool)arg7 useHttp2:(_Bool)arg8 useCache:(_Bool)arg9 appType:(unsigned int)arg10;

@end

