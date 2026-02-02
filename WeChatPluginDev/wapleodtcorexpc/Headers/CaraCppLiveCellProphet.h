//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CaraCppLiveCellProphet : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct CaraCppLiveCellProphetCppCover cpp_cover;
    struct weak_ptr<cara::CaraCppLiveCellProphetDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reportThatPreload:(const void *)arg1;
- (void)reportThatCellConsume:(const void *)arg1;
- (void)predict:(id)arg1 callback:(id)arg2;
- (void)reportThatCellExpose:(const void *)arg1 context:(id)arg2;
- (id)init;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_4a79c824)getDispatcher;

@end

