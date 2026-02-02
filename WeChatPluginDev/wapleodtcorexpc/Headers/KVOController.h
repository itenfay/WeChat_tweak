//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface KVOController : NSObject
{
    NSMapTable *m_objectInfosMap;
    struct _opaque_pthread_mutex_t m_mutex;
    id _observer;
}

+ (id)controllerWithObserver:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void)_unobserveAll;
- (void)_unobserve:(id)arg1;
- (void)_unobserve:(id)arg1 info:(id)arg2;
- (void)_observe:(id)arg1 info:(id)arg2;
- (void)unobserveAll;
- (void)unobserve:(id)arg1;
- (void)unobserve:(id)arg1 keyPath:(id)arg2;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;
- (id)initWithObserver:(id)arg1 retainObserved:(_Bool)arg2;

@end

