//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RoamDeviceManager : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct RoamDeviceManagerCppCover cpp_cover;
    struct weak_ptr<affroam::RoamDeviceManagerDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getDeviceInfoAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDeviceInfoAsync:(CDUnknownBlockType)arg1;
- (void)getVersionConflictInfoAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVersionConflictInfoAsync:(CDUnknownBlockType)arg1;
- (void)unsubscribeConnectivityChangedEvent:(id)arg1;
- (void)subscribeConnectivityChangedEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeConnectivityChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)disconnectAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disconnectAsync:(CDUnknownBlockType)arg1;
- (void)connectAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectAsync:(CDUnknownBlockType)arg1;
- (int)initializeCustomDevice:(id)arg1;
- (int)initialize:(id)arg1;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_f3dd2658)getDispatcher;

@end

