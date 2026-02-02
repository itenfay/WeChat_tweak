//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VQMConfAPI : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct VQMConfAPICppCover cpp_cover;
    struct weak_ptr<vqm::VQMConfAPIDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isEnable;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_b1180922)getDispatcher;

@end

