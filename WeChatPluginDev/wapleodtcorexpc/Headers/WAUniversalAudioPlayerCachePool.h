//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WAUniversalAudioPlayerCachePool
{
    NSMutableDictionary *_cachePool;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    unsigned long long _currentMemoryUsage;
    unsigned long long _memoryCapacity;
    unsigned long long _preferredMemoryUsageAfterPurge;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long preferredMemoryUsageAfterPurge; // @synthesize preferredMemoryUsageAfterPurge=_preferredMemoryUsageAfterPurge;
@property(nonatomic) unsigned long long memoryCapacity; // @synthesize memoryCapacity=_memoryCapacity;
@property(nonatomic) unsigned long long currentMemoryUsage; // @synthesize currentMemoryUsage=_currentMemoryUsage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(retain, nonatomic) NSMutableDictionary *cachePool; // @synthesize cachePool=_cachePool;
- (void)didReceiveMemoryWarning;
- (void)removeAllCache;
- (id)cacheForKey:(id)arg1;
- (void)addCache:(id)arg1 forIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithSuffix:(id)arg1;

@end

