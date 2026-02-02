//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VQMAPI : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct VQMAPICppCover cpp_cover;
    struct weak_ptr<vqm::VQMAPIDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateEvent:(int)arg1 bytesInfo:(id)arg2;
- (unsigned long long)timestampMSCurrentSystem;
- (unsigned long long)timestampMSCurrentSteady;
- (void)confirm;
- (void)loadProfileAsync:(int)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadProfileAsync:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateProfileSync:(int)arg1 bytesInfo:(id)arg2;
- (void)updateProfile:(int)arg1 bytesInfo:(id)arg2;
- (_Bool)isActived;
- (void)end;
- (void)begin;
- (void)detachObserver:(id)arg1;
- (void)attachObserver:(id)arg1;
- (void)launch;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_c92d46f7)getDispatcher;

@end

