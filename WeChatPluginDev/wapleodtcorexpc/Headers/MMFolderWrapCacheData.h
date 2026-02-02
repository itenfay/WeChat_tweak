//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMFolderWrapCacheData : NSObject
{
    _Bool _isSharedCache;
    unsigned int _totalProgress;
    NSMutableDictionary *_dicCache;
    NSString *_cacheID;
    NSRecursiveLock *_lock;
}

+ (id)getCacheKeyFromFullPath:(id)arg1;
+ (id)loadFolderWrapCache;
+ (void)initialize;
+ (void)PBArrayAdd_totalProgress;
+ (void)PBArrayAdd_dicCache;
+ (void)PBArrayAdd_cacheID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool isSharedCache; // @synthesize isSharedCache=_isSharedCache;
@property(nonatomic) unsigned int totalProgress; // @synthesize totalProgress=_totalProgress;
@property(retain, nonatomic) NSString *cacheID; // @synthesize cacheID=_cacheID;
@property(retain, nonatomic) NSMutableDictionary *dicCache; // @synthesize dicCache=_dicCache;
- (void)deleteCacheByKey:(id)arg1;
- (void)setWrapCache:(id)arg1 withKey:(id)arg2;
- (id)getWrapCacheByKey:(id)arg1;
- (void)saveFolderWrapCache;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

