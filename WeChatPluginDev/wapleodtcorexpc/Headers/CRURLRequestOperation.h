//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSURLRequest, NSURLSession, NSURLSessionTask;

@interface CRURLRequestOperation
{
    NSURLSessionTask *_task;
    NSURLSession *_session;
    NSURLRequest *_request;
    long long _retryCount;
    CDUnknownBlockType _completionHandler;
}

+ (id)operationWithRequest:(id)arg1 session:(id)arg2 retryCount:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
- (void)dealloc;
- (void)finish;
- (void)startAsyncOperation;
- (id)initWithRequest:(id)arg1 retryCount:(long long)arg2 sesssion:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

