//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VQMObserver : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct VQMObserverCppCover cpp_cover;
    struct weak_ptr<vqm::VQMObserverDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReport:(id)arg1;
- (void)didUpdateProfile:(int)arg1 bytesFromProfile:(id)arg2 bytesToProfile:(id)arg3;
- (void)didPoll;
- (unsigned long long)identifier;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initWithZidlImpl:(id)arg1;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_27ac3723)getDispatcher;

@end

