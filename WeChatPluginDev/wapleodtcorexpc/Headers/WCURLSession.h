//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock, NSString, WCURLSessionConfiguration;
@protocol WCURLSessionDelegate;

@interface WCURLSession : NSObject
{
    WCURLSessionConfiguration *_configuration;
    id <WCURLSessionDelegate> _delegate;
    unsigned long long _reqeustId;
    NSMutableArray *_taskArray;
    NSRecursiveLock *_lock;
}

+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2;
+ (id)sessionWithConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *taskArray; // @synthesize taskArray=_taskArray;
@property(nonatomic) unsigned long long reqeustId; // @synthesize reqeustId=_reqeustId;
@property(nonatomic) __weak id <WCURLSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)downloadTaskWithRequest:(id)arg1;
- (unsigned long long)generateAndIncreaseRequestId;
- (void)urlSessionTask:(id)arg1 didReceiveData:(id)arg2;
- (_Bool)checkDelegateConfirmsToProtocol:(id)arg1 selector:(SEL)arg2;
- (void)onCornetTaskProgressUpdate:(long long)arg1 currentBytes:(unsigned long long)arg2 taskId:(id)arg3;
- (void)urlSessionTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)urlSessionTask:(id)arg1 onCornetTaskProgressUpdate:(long long)arg2 currentBytes:(unsigned long long)arg3;
- (void)urlSessionTask:(id)arg1 onProgressUpdate:(unsigned long long)arg2 currentBytes:(unsigned long long)arg3;
- (void)urlSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)addTask:(id)arg1;
- (void)sessionTaskOnComplete:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)sessionTaskOnCancel:(id)arg1;
- (void)sessionTaskOnResume:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

