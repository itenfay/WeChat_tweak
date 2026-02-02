//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CaraNativeAccountFeatureCenter : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraNativeAccountFeatureCenterCppCover cpp_cover;
    struct weak_ptr<cara::CaraNativeAccountFeatureCenterDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isRegisteredInChina;
- (id)discoverTab;
- (int)momentPrivacy;
- (int)gender;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_fec15eb6)getDispatcher;

@end

