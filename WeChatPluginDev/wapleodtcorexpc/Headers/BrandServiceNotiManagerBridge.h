//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ConcurrentDictionary, NSMapTable;

@interface BrandServiceNotiManagerBridge : NSObject
{
    struct weak_ptr<zidl::ZClientInvoker> client_invoker_;
    ConcurrentDictionary *insertBlockDict;
    ConcurrentDictionary *onBatchReadBlockDict;
    NSMapTable *notiListReadEventMap;
    ConcurrentDictionary *onBatchExposeBlockDict;
    NSMapTable *insertNotiEventMap;
    NSMapTable *editNotiEventMap;
    NSMapTable *deleteNotiEventMap;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasInit;
- (void)callOnDeleteNoti:(unsigned long long)arg1 username:(id)arg2 svrId:(unsigned long long)arg3;
- (void)unSubscribeDeleteNotiEvent:(id)arg1;
- (void)subscribeDeleteNotiEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeDeleteNotiEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)callOnEditNoti:(id)arg1;
- (void)unSubscribeEditNotiEvent:(id)arg1;
- (void)subscribeEditNotiEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeEditNotiEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)callOnInsertNoti:(id)arg1;
- (void)unSubscribeInsertNotiEvent:(id)arg1;
- (void)subscribeInsertNotiEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeInsertNotiEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (_Bool)deleteByUserName:(id)arg1;
- (_Bool)deleteByLocalId:(unsigned long long)arg1;
- (void)onBatchExposeAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onBatchExposeAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)callOnNotiListRead;
- (void)unSubscribeNotiListReadEvent:(id)arg1;
- (void)subscribeNotiListReadEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeNotiListReadEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)onBatchReadAsync:(unsigned long long)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onBatchReadAsync:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getFirstUnreadData;
- (unsigned long long)getTotalUnreadCount;
- (unsigned long long)getTotalCount;
- (id)getByLocalId:(unsigned long long)arg1;
- (id)getLaterData:(unsigned long long)arg1 limit:(int)arg2;
- (id)getData:(unsigned long long)arg1 limit:(int)arg2;
- (void)insertAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)zidlBuild;
- (shared_ptr_91287a9c)getClientInvoker;
- (void)attachClientInvoker:(const void *)arg1;

@end

