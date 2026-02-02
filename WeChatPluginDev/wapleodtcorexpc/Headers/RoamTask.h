//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RoamTask : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct RoamTaskCppCover cpp_cover;
    struct weak_ptr<affroam::RoamTaskDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)clearErrorLog;
- (id)getErrorLog;
- (void)unsubscribeTransferStatsChangedEvent:(id)arg1;
- (void)subscribeTransferStatsChangedEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeTransferStatsChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (id)getTransferStats;
- (void)unsubscribeDowngradeScheduledEvent:(id)arg1;
- (void)subscribeDowngradeScheduledEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeDowngradeScheduledEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeTaskCompletedEvent:(id)arg1;
- (void)subscribeTaskCompletedEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeTaskCompletedEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeConversationCompletedEvent:(id)arg1;
- (void)subscribeConversationCompletedEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeConversationCompletedEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeStateChangedEvent:(id)arg1;
- (void)subscribeStateChangedEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeStateChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeProgressEvent:(id)arg1;
- (void)subscribeProgressEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeProgressEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (float)getProgress;
- (id)getInfo;
- (void)stopAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopAsync:(CDUnknownBlockType)arg1;
- (void)resumeAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeAsync:(CDUnknownBlockType)arg1;
- (void)pauseAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pauseAsync:(CDUnknownBlockType)arg1;
- (void)startAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startAsync:(CDUnknownBlockType)arg1;
- (void)prepareAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareAsync:(CDUnknownBlockType)arg1;
- (int)initialize:(id)arg1;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_f523a40b)getDispatcher;

@end

