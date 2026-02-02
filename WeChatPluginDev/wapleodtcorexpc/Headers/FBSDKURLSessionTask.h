//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURLSessionTask;

@interface FBSDKURLSessionTask : NSObject
{
    NSURLSessionTask *_task;
    CDUnknownBlockType _handler;
    unsigned long long _requestStartTime;
    unsigned long long _loggerSerialNumber;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long loggerSerialNumber; // @synthesize loggerSerialNumber=_loggerSerialNumber;
@property(nonatomic) unsigned long long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
- (void)cancel;
- (void)start;
- (void)taskDidCompleteWithError:(id)arg1;
- (void)taskDidCompleteWithResponse:(id)arg1 data:(id)arg2;
- (void)logMessage:(id)arg1;
- (void)invokeHandler:(CDUnknownBlockType)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4;
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 response:(id)arg2 responseData:(id)arg3;
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (id)initWithRequest:(id)arg1 fromSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

