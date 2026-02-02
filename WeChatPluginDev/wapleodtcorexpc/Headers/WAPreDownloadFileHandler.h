//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSURLSession, WADownloadFileConfig;
@protocol OS_dispatch_queue;

@interface WAPreDownloadFileHandler : NSObject
{
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WADownloadFileConfig *_downloadFileConfig;
    NSMutableArray *_arrDownloadTask;
    NSMutableArray *_arrTodoDownloadTask;
    NSURLSession *_urlSession;
    NSMutableDictionary *_downloadCompletionHandlerDic;
    NSNumber *__hasDownloadedFileSize;
}

- (void).cxx_destruct;
@property(retain) NSNumber *_hasDownloadedFileSize; // @synthesize _hasDownloadedFileSize=__hasDownloadedFileSize;
- (void)downloadFileTaskDidEnd:(id)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned int)maxTaskCount;
- (void)cancelTaskForExceedMaxSize:(id)arg1;
- (void)markRedirectFailWithSessionTask:(id)arg1 host:(id)arg2;
- (_Bool)isIgnoreCheckDomainWithSessionTask:(id)arg1;
- (void)cancelAndDeleteAllTaskWithError:(id)arg1 errNo:(id)arg2;
- (void)deleteTask:(id)arg1;
- (id)getDownloadTaskWithTaskID:(id)arg1;
- (id)getDownloadTaskWithTask:(id)arg1;
- (id)addNewTodoDownloadTask:(id)arg1;
- (id)getNewDownloadTask:(id)arg1;
- (_Bool)isExceedMaxTaskCount;
- (void)setupNSURLSession;
- (void)invalidate;
- (_Bool)abortDownloadTask:(id)arg1 getError:(id *)arg2;
- (void)startDownloadTaskWithUrl:(id)arg1 taskID:(id)arg2 httpHeaders:(id)arg3 isIgnoreCheckDomain:(_Bool)arg4 context:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3 context:(id)arg4;
- (unsigned int)getHasDownloadedFileSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

