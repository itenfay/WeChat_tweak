//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JITRuntime, NSThread;

@interface JITRuntimeWorker : NSObject
{
    _Bool _threadStopped;
    int _workerId;
    NSThread *_thread;
    JITRuntime *_runtime;
    CDUnknownBlockType _finishBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) __weak JITRuntime *runtime; // @synthesize runtime=_runtime;
@property _Bool threadStopped; // @synthesize threadStopped=_threadStopped;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(readonly, nonatomic) int workerId; // @synthesize workerId=_workerId;
- (void)runThread:(id)arg1;
- (_Bool)runCodeInWorkerThreadImpl:(CDUnknownBlockType)arg1 sync:(_Bool)arg2;
- (void)realRunCodeInWorkerThread:(CDUnknownBlockType)arg1;
- (_Bool)runCodeInWorkerThreadSync:(CDUnknownBlockType)arg1;
- (_Bool)runCodeInWorkerThread:(CDUnknownBlockType)arg1;
- (void)destroy;
- (void)setup:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)initWithId:(int)arg1;

@end

