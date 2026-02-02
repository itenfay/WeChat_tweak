//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoIPMPSystemAuthAPI : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct VoIPMPSystemAuthAPICppCover cpp_cover;
    struct weak_ptr<voipmp::VoIPMPSystemAuthAPIDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestAsync:(int)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAsync:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_4e8fd9fa)getDispatcher;

@end

