//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AffStarManager : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct AffStarManagerCppCover cpp_cover;
    struct weak_ptr<star::AffStarManagerDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setOpenStarSwitch:(_Bool)arg1;
- (_Bool)isOpenStarSwitch;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_3136c3af)getDispatcher;

@end

