//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSURLSession, WAUploadFileConfig;
@protocol OS_dispatch_queue;

@interface WAUploadFileHandler : NSObject
{
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WAUploadFileConfig *_uploadFileConfig;
    NSMutableArray *_arrUploadTask;
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadFileTaskDidEnd:(id)arg1;
- (unsigned int)maxTaskCount;
- (void)markRedirectFailWithSessionTask:(id)arg1 host:(id)arg2;
- (_Bool)isIgnoreCheckDomainWithSessionTask:(id)arg1;
- (void)setupNSURLSession;
- (void)cancelAndDeleteAllTaskWithError:(id)arg1 errNo:(id)arg2;
- (void)deleteTask:(id)arg1;
- (id)getUploadTaskWithTaskID:(id)arg1;
- (id)getUploadTaskWithTask:(id)arg1;
- (id)getNewUploadTask:(id)arg1 context:(id)arg2 uploadConfig:(id)arg3;
- (_Bool)isExceedMaxTaskCount;
- (void)invalidate;
- (_Bool)abortUploadTask:(id)arg1 getError:(id *)arg2;
- (void)startUploadTaskWithURL:(id)arg1 taskID:(id)arg2 filePath:(id)arg3 fileFieldName:(id)arg4 httpHeaders:(id)arg5 formFields:(id)arg6 isIgnoreCheckDomain:(_Bool)arg7 context:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

