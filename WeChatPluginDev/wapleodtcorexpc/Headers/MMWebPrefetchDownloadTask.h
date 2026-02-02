//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebPrefetchDownloadTaskRequest, NSURLSession, NSURLSessionDownloadTask;

@interface MMWebPrefetchDownloadTask
{
    _Bool _isCancel;
    MMWebPrefetchDownloadTaskRequest *_request;
    NSURLSession *_urlSession;
    CDUnknownBlockType _completionHandler;
    NSURLSessionDownloadTask *_sessionTask;
    unsigned long long _startTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSURLSessionDownloadTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) MMWebPrefetchDownloadTaskRequest *request; // @synthesize request=_request;
- (void)mainThread_callBackWithResult:(id)arg1 error:(id)arg2;
- (void)mainThread_callBackFailWithErrCode:(long long)arg1 errMsg:(id)arg2;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (void)handleDownloadResponse:(id)arg1 response:(id)arg2 error:(id)arg3;
- (_Bool)saveRespData:(id)arg1 path:(id)arg2 error:(id *)arg3 errMsg:(id *)arg4 dataSize:(unsigned int *)arg5;
- (_Bool)saveRespHeaderFieldsData:(id)arg1 toPath:(id)arg2 error:(id *)arg3 errMsg:(id *)arg4;
- (void)handleTaskDidFinishCollectingMetrics:(id)arg1;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 urlSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

