//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CaraCppLiveFeatureCenter : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraCppLiveFeatureCenterCppCover cpp_cover;
    struct weak_ptr<cara::CaraCppLiveFeatureCenterDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setUserActiveLevel:(int)arg1;
- (void)reportThatCellConsume;
- (void)reportThatCellExpose;
- (void)reportThatReddotConsume:(id)arg1 anchor:(id)arg2 score:(const void *)arg3;
- (void)reportThatReddotExpose:(id)arg1 anchor:(id)arg2 score:(const void *)arg3;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_c915e89a)getDispatcher;

@end

