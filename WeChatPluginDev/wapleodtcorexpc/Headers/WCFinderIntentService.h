//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLRUCache, NSRecursiveLock, NSString;

@interface WCFinderIntentService
{
    NSRecursiveLock *m_lock;
    MMLRUCache *intentCache;
}

+ (id)hashIntent:(id)arg1;
- (void).cxx_destruct;
- (_Bool)clear:(id)arg1;
- (_Bool)bindIntent:(id)arg1 andPreIntent:(id)arg2;
- (id)traceValByKey:(id)arg1 atObjHash:(id)arg2;
- (id)getValByKey:(id)arg1 atObjHash:(id)arg2;
- (void)putKey:(id)arg1 andVal:(id)arg2 atObjHash:(id)arg3;
- (void)removeKey:(id)arg1;
- (id)getValByKey:(id)arg1;
- (void)putKey:(id)arg1 andVal:(id)arg2;
- (void)removeCache:(id)arg1;
- (void)clearIntentItem:(id)arg1;
- (void)clearLinkedList;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

