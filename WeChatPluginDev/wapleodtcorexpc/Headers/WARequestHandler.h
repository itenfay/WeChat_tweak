//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSURLSession, WARequestConfig;
@protocol OS_dispatch_queue;

@interface WARequestHandler : NSObject
{
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workQueue;
    WARequestConfig *_requestConfig;
    _Bool _hasInvalidate;
    NSMutableArray *_arrRequestTask;
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
- (void)requestTaskDidEnd:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned int)timeoutMS;
- (unsigned int)maxTaskCount;
- (void)markRedirectFailWithSessionTask:(id)arg1 host:(id)arg2;
- (_Bool)isIgnoreCheckDomainWithSessionTask:(id)arg1;
- (void)setupNSURLSession;
- (void)cancelAndDeleteAllTaskWithError:(id)arg1 errNo:(id)arg2 isInvalidate:(_Bool)arg3;
- (void)deleteTask:(id)arg1;
- (id)getRequestTaskWithTaskID:(id)arg1;
- (id)getRequestTaskWithTask:(id)arg1;
- (id)getNewRequestTask:(id)arg1 isUseCronet:(_Bool)arg2 useQuic:(_Bool)arg3 useHttp2:(_Bool)arg4 useCache:(_Bool)arg5 useChunked:(_Bool)arg6 appType:(unsigned int)arg7 context:(id)arg8;
- (_Bool)isExceedMaxTaskCount;
- (void)invalidate;
- (_Bool)abortRequestTask:(id)arg1 getError:(id *)arg2;
- (void)startRequestTaskWithURL:(id)arg1 ip:(id)arg2 port:(unsigned int)arg3 host:(id)arg4 forbidReuse:(_Bool)arg5 taskID:(id)arg6 data:(id)arg7 httpHeaders:(id)arg8 method:(id)arg9 isIgnoreCheckDomain:(_Bool)arg10 context:(id)arg11 completionHandler:(CDUnknownBlockType)arg12 isUseCronet:(_Bool)arg13 useQuic:(_Bool)arg14 useHttp2:(_Bool)arg15 useCache:(_Bool)arg16 useChunked:(_Bool)arg17 appType:(unsigned int)arg18 forceCellularNetwork:(_Bool)arg19;
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

