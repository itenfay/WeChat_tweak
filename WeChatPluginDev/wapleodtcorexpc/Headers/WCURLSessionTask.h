//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHTTPURLResponse, NSString, NSURLRequest;
@protocol WCURLSessionTaskInternalDelegate;

@interface WCURLSessionTask : NSObject
{
    unsigned long long _taskIdentifier;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSHTTPURLResponse *_response;
    id <WCURLSessionTaskInternalDelegate> _taskDelegate;
    NSString *_cronetRequestId;
    shared_ptr_70ca3131 _cronetRequestCallBack;
}

+ (id)new;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_70ca3131 cronetRequestCallBack; // @synthesize cronetRequestCallBack=_cronetRequestCallBack;
@property(copy, nonatomic) NSString *cronetRequestId; // @synthesize cronetRequestId=_cronetRequestId;
@property(nonatomic) __weak id <WCURLSessionTaskInternalDelegate> taskDelegate; // @synthesize taskDelegate=_taskDelegate;
@property(copy, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(copy) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(copy, nonatomic) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(nonatomic) unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void)dealloc;
- (void)cancel;
- (_Bool)resume;
- (id)initWithTaskIdentifier:(unsigned long long)arg1 request:(id)arg2 delegate:(id)arg3;
- (id)init;
- (_Bool)onCornetTaskReceiveData:(id)arg1;
- (int)onCornetTaskReceiveHeader:(id)arg1 statusCode:(int)arg2 taskId:(id)arg3 taskProtocol:(id)arg4;
- (void)onCornetTaskProgressUpdate:(long long)arg1 currentBytes:(unsigned long long)arg2 taskId:(id)arg3;
- (void)onCornetTaskComplete:(const void *)arg1;
- (void)_onCornetTaskCompleteWithError:(id)arg1;
- (void)appendHeaderForRequest:(id)arg1 value:(id)arg2 headers:(void *)arg3;
- (struct CronetTaskParams)buildRequestParamters;

@end

