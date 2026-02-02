//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebOptimizationPrefetchRequest, MMWebPrefetchDownloadTask, MMWebPrefetchInjectTask, MMWebPrefetchResPkgDownloadTask, NSMutableArray, NSURLSession;
@protocol MMWebOptimizationPrefetchTaskDelegate;

@interface MMWebOptimizationPrefetchTask
{
    _Bool _hasResPrefetchFail;
    _Bool _isTaskCancel;
    unsigned int _taskId;
    MMWebOptimizationPrefetchRequest *_request;
    CDUnknownBlockType _completionHandler;
    MMWebPrefetchDownloadTask *_documentDownloadTask;
    MMWebPrefetchResPkgDownloadTask *_resPkgDownloadTask;
    MMWebPrefetchInjectTask *_injectTask;
    NSMutableArray *_waitingDownloadTaskQueue;
    NSMutableArray *_downloadingTaskQueue;
    NSURLSession *_urlSession;
    NSMutableArray *_arrPrefetchSuccResInfo;
    id <MMWebOptimizationPrefetchTaskDelegate> _delegate;
    CDUnknownBlockType _pkgFetchCompletionHandler;
}

+ (unsigned int)genSubTaskRequestId;
+ (unsigned int)genTaskId;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType pkgFetchCompletionHandler; // @synthesize pkgFetchCompletionHandler=_pkgFetchCompletionHandler;
@property(nonatomic) __weak id <MMWebOptimizationPrefetchTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isTaskCancel; // @synthesize isTaskCancel=_isTaskCancel;
@property(nonatomic) _Bool hasResPrefetchFail; // @synthesize hasResPrefetchFail=_hasResPrefetchFail;
@property(retain, nonatomic) NSMutableArray *arrPrefetchSuccResInfo; // @synthesize arrPrefetchSuccResInfo=_arrPrefetchSuccResInfo;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableArray *downloadingTaskQueue; // @synthesize downloadingTaskQueue=_downloadingTaskQueue;
@property(retain, nonatomic) NSMutableArray *waitingDownloadTaskQueue; // @synthesize waitingDownloadTaskQueue=_waitingDownloadTaskQueue;
@property(retain, nonatomic) MMWebPrefetchInjectTask *injectTask; // @synthesize injectTask=_injectTask;
@property(retain, nonatomic) MMWebPrefetchResPkgDownloadTask *resPkgDownloadTask; // @synthesize resPkgDownloadTask=_resPkgDownloadTask;
@property(retain, nonatomic) MMWebPrefetchDownloadTask *documentDownloadTask; // @synthesize documentDownloadTask=_documentDownloadTask;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) MMWebOptimizationPrefetchRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (void)mainThread_callBackSuccess;
- (void)mainThread_callBackFailWithError:(id)arg1;
- (id)genCorsOrigin:(id)arg1 withDocumentUrl:(id)arg2;
- (void)startInjectTaskWithPkgPath:(id)arg1 htmlStringInPkg:(_Bool)arg2;
- (void)startInjectTask;
- (void)startFetchPkg;
- (void)handleResourceDownload:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)startDownloadResFile;
- (void)handleMainDocumentDownloadResult:(id)arg1 error:(id)arg2;
- (id)handleURLSession:(id)arg1 task:(id)arg2 performRedirection:(id)arg3 newRequest:(id)arg4;
- (void)handleURLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)startDownloadDocument:(CDUnknownBlockType)arg1;
- (void)checkDocUrlResPkgModeFinishDownload;
- (void)checkAllUrlModeFinishDownload;
- (void)checkFinishDownload;
- (_Bool)containSessionTask:(id)arg1;
- (id)domain;
- (id)identifier;
- (void)cancel;
- (void)handleDocUrlDownloadResult:(id)arg1;
- (void)startFetchPkgWithRespHeader:(id)arg1 documentUrl:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isUrlInPkgInjectBlackList:(id)arg1;
- (_Bool)saveTransferMainDocContent:(id)arg1 header:(id)arg2;
- (void)onTransferMainDocCallBack:(_Bool)arg1 errMsg:(id)arg2 respContent:(id)arg3 respHeader:(id)arg4;
- (void)startDocTransferResPkgDownload;
- (void)startDocUrlResPkgModeDownload;
- (void)startAllPkgModeDownload;
- (void)startAllUrlModeDownload;
- (void)start;
- (id)initWithRequest:(id)arg1 urlSession:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

