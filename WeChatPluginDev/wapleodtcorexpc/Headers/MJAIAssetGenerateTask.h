//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAIAssetGenerateRequest, MJAIAssetGenerateResult, MMTimer, NSError, NSString;

@interface MJAIAssetGenerateTask : NSObject
{
    unsigned int _nextQueryInterval;
    unsigned int _queryCount;
    NSString *_taskID;
    MJAIAssetGenerateRequest *_request;
    double _timeoutInterval;
    long long _state;
    MJAIAssetGenerateResult *_result;
    NSError *_error;
    CDUnknownBlockType _completionHandler;
    MMTimer *_timeoutTimer;
    double _startTimeInterval;
    long long _maxRetryTimes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int queryCount; // @synthesize queryCount=_queryCount;
@property(nonatomic) unsigned int nextQueryInterval; // @synthesize nextQueryInterval=_nextQueryInterval;
@property(nonatomic) long long maxRetryTimes; // @synthesize maxRetryTimes=_maxRetryTimes;
@property(nonatomic) double startTimeInterval; // @synthesize startTimeInterval=_startTimeInterval;
@property(retain, nonatomic) MMTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) MJAIAssetGenerateResult *result; // @synthesize result=_result;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, nonatomic) MJAIAssetGenerateRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
- (void)cancelWithTaskID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryWithTaskID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_callCompletionHandler;
- (void)_completeWithResult:(id)arg1 error:(id)arg2;
- (void)_taskDidTimeout;
- (void)_stopTimeoutTimer;
- (void)_startTimeoutTimer;
- (void)didRecieveCompletionNotify;
- (void)_handleQueryFailWithError:(id)arg1;
- (void)_handleQuerySuccessWithResult:(id)arg1 isRepeatedly:(_Bool)arg2;
- (void)_disposedQueryGenerateResult;
- (void)_repeatedlyQueryGenerateResult;
- (void)_handleSubmitFailWithError:(id)arg1;
- (void)_handleSubmitSuccessWithResult:(id)arg1;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1 timeoutInterval:(double)arg2;

@end

