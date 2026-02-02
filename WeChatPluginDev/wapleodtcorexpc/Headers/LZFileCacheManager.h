//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, lzCacheCleanManager;
@protocol OS_dispatch_queue;

@interface LZFileCacheManager : NSObject
{
    NSMutableDictionary *_fileCacheMgrDic;
    NSObject<OS_dispatch_queue> *_fileOptQueue;
    NSString *_cachePath;
    lzCacheCleanManager *_cleanMgr;
    void *_lzCacheMgrQueueKey;
    CDUnknownBlockType _normalFilterBlock;
}

+ (void)validCachePath:(id)arg1 obj:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType normalFilterBlock; // @synthesize normalFilterBlock=_normalFilterBlock;
@property(readonly, nonatomic) lzCacheCleanManager *cleanMgr; // @synthesize cleanMgr=_cleanMgr;
- (void)cleanFileCaching:(id)arg1;
- (_Bool)createDirectoryIfNeed:(id)arg1;
- (id)fileNameForItem:(id)arg1 fileExt:(id)arg2;
- (_Bool)isFileCaching:(id)arg1;
- (_Bool)isFileAlreadyCached:(id)arg1;
- (_Bool)cacheLocalFile:(id)arg1 fileVid:(id)arg2 fileExt:(id)arg3 removeSrc:(_Bool)arg4;
- (id)buildFileSavePath:(id)arg1 fileVid:(id)arg2 fileExt:(id)arg3;
- (void)releaseFileCacheMgr:(id)arg1 forceClean:(_Bool)arg2;
- (id)acquireFileCacheMgr:(id)arg1 type:(unsigned long long)arg2 bLargeFile:(_Bool)arg3;
- (id)acquireFileCacheMgr:(id)arg1 type:(unsigned long long)arg2;
- (void)cleanCacheDir:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void)dealloc;
- (id)initWithQueueName:(const char *)arg1;
- (id)init;

@end

