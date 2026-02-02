//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AffStarDataManager : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct AffStarDataManagerCppCover cpp_cover;
    struct weak_ptr<star::AffStarDataManagerDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasData;
- (void)getAllStarDataAsync:(unsigned long long)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAllStarDataAsync:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getByIdAndType:(id)arg1 btype:(int)arg2;
- (void)deleteByIdAndTypeAsync:(id)arg1 btype:(int)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteByIdAndTypeAsync:(id)arg1 btype:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteByIdAsync:(unsigned long long)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteByIdAsync:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertByIdAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertByIdAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)initWithConfigDir:(id)arg1;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_a1c0600b)getDispatcher;

@end

