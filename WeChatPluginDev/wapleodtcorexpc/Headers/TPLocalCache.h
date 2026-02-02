//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface TPLocalCache : NSObject
{
    int _diskItemCount;
    NSMutableDictionary *_memeryCacheMap;
    NSMutableArray *_memeryItemArray;
    NSRecursiveLock *_lock;
    NSString *_cachePath;
    long long _diskItemCacheSize;
    NSMutableArray *_diskItemArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *diskItemArray; // @synthesize diskItemArray=_diskItemArray;
@property(nonatomic) long long diskItemCacheSize; // @synthesize diskItemCacheSize=_diskItemCacheSize;
@property(nonatomic) int diskItemCount; // @synthesize diskItemCount=_diskItemCount;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *memeryItemArray; // @synthesize memeryItemArray=_memeryItemArray;
@property(retain, nonatomic) NSMutableDictionary *memeryCacheMap; // @synthesize memeryCacheMap=_memeryCacheMap;
- (id)logTag;
- (void)clearDiskCache;
- (void)removeAll;
- (void)removeWithKey:(id)arg1;
- (void)writeItemArray:(id)arg1;
- (void)writeItemInfo:(long long)arg1 itemCount:(int)arg2;
- (void)removeItemPath:(id)arg1 itemKey:(id)arg2;
- (void)addInfoToFile:(id)arg1 cacheSize:(long long)arg2;
- (_Bool)writeToFile:(id)arg1 cacheObject:(id)arg2;
- (void)removeOneItem:(id)arg1;
- (void)clearCache;
- (void)clearMemery;
- (double)getFileLastModifyTime:(id)arg1 key:(id)arg2;
- (long long)getFileSize:(id)arg1 key:(id)arg2;
- (id)get:(id)arg1 memeryOnly:(_Bool)arg2;
- (id)get:(id)arg1;
- (void)put:(id)arg1 value:(id)arg2;
- (void)put:(id)arg1 value:(id)arg2 cacheTime:(double)arg3;
- (void)put:(id)arg1 value:(id)arg2 cacheTime:(double)arg3 saveDisk:(_Bool)arg4;
- (void)initDefaultDisk;
- (id)initWithName:(id)arg1;

@end

