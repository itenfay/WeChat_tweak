//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, NSURLSession;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface TPDownloadCGIRequester : NSObject
{
    int _maxRetryTimes;
    int _retryInterval;
    double _timeout;
    NSURLSession *_session;
    NSMutableDictionary *_retryItemsDict;
    NSRecursiveLock *_retryLock;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_cgiRequestQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cgiRequestQueue; // @synthesize cgiRequestQueue=_cgiRequestQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSRecursiveLock *retryLock; // @synthesize retryLock=_retryLock;
@property(retain, nonatomic) NSMutableDictionary *retryItemsDict; // @synthesize retryItemsDict=_retryItemsDict;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) int retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) int maxRetryTimes; // @synthesize maxRetryTimes=_maxRetryTimes;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)releaseRequest:(int)arg1;
- (void)handleErrorWithUrlString:(id)arg1 taskType:(int)arg2 oldTaskId:(int)arg3 newTaskId:(int)arg4;
- (void)requestWithUrlString:(id)arg1 taskId:(int)arg2 taskType:(int)arg3;
- (double)getTimeStamp;
- (void)initTimer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

