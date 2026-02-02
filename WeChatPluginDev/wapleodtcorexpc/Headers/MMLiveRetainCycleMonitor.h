//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGCRootsTracer, MMTimer, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface MMLiveRetainCycleMonitor : NSObject
{
    _Bool _isRuning;
    NSMutableDictionary *_weakObjectsDict;
    NSMutableArray *_rootWeakObjects;
    NSMutableSet *_rootWeakObjectsAddressSet;
    MMTimer *_scheduleTimer;
    NSRecursiveLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MMGCRootsTracer *_tracer;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MMGCRootsTracer *tracer; // @synthesize tracer=_tracer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool isRuning; // @synthesize isRuning=_isRuning;
@property(retain, nonatomic) MMTimer *scheduleTimer; // @synthesize scheduleTimer=_scheduleTimer;
@property(retain, nonatomic) NSMutableSet *rootWeakObjectsAddressSet; // @synthesize rootWeakObjectsAddressSet=_rootWeakObjectsAddressSet;
@property(retain, nonatomic) NSMutableArray *rootWeakObjects; // @synthesize rootWeakObjects=_rootWeakObjects;
@property(retain, nonatomic) NSMutableDictionary *weakObjectsDict; // @synthesize weakObjectsDict=_weakObjectsDict;
- (_Bool)disableFinderBlockRetainCycle;
- (id)currentInsertList;
- (id)currentCheckList;
- (void)addGCRootObjects:(id)arg1;
- (void)addWillDeallocObject:(id)arg1;
- (void)asyncCheckLeakObjects;
- (void)checkLeakObjects;
- (id)getRawRootObjects;
- (void)registerWeakServiceByName:(id)arg1;
- (void)registerRootObjects;
- (void)startMonitor;
- (void)stopMonitor;
- (id)init;

@end

