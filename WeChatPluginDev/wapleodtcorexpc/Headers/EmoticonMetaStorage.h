//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EmoticonMetaStorage : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct EmoticonMetaStorageCppCover cpp_cover;
    struct weak_ptr<emoticon::EmoticonMetaStorageDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)saveStoreItemToCache:(id)arg1;
- (id)loadStoreItemFromCache:(id)arg1;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_0be0b842)getDispatcher;

@end

