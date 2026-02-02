//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSContext, NSMutableDictionary, NSRecursiveLock, NSThread;
@protocol OS_dispatch_queue;

@interface MMWebJsTimerHandler : NSObject
{
    _Bool _hasStopped;
    _Bool _addRunloopCommonMode;
    JSContext *_jsContext;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSThread *_subThread;
    NSMutableDictionary *_timerObjs;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool addRunloopCommonMode; // @synthesize addRunloopCommonMode=_addRunloopCommonMode;
@property _Bool hasStopped; // @synthesize hasStopped=_hasStopped;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
@property(retain, nonatomic) NSThread *subThread; // @synthesize subThread=_subThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void)mainThread_clearTimer:(unsigned int)arg1;
- (void)onInovkeCallback:(CDUnknownBlockType)arg1;
- (void)onTimer:(id)arg1;
- (unsigned int)mainThread_addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (void)addApi_clearTimerHandler:(id)arg1;
- (void)addApi_setTimerHandler:(id)arg1;
- (void)setupTimerBlock:(id)arg1;
- (void)invalidAllTimers;
- (void)dealloc;
- (id)init;

@end

