//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSCache, NSOperationQueue;

@interface WCFImageCache : NSObject
{
    _Bool _isHighEnd;
    NSOperationQueue *_ioQueue;
    NSCache *_memoryCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(retain, nonatomic) NSOperationQueue *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(readonly, nonatomic) _Bool isHighEnd; // @synthesize isHighEnd=_isHighEnd;
- (id)queryImagesExistsByKeys:(id)arg1 options:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)queryImageForKey:(id)arg1 size:(struct CGSize)arg2 options:(long long)arg3 cacheType:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)callCompletion:(CDUnknownBlockType)arg1 image:(id)arg2 data:(id)arg3 type:(long long)arg4;
- (void)removeDiskImageForKey:(id)arg1;
- (id)imageDataFromDiskForKey:(id)arg1;
- (id)imageFromMemoryForKey:(id)arg1 size:(struct CGSize)arg2;
- (id)imageForKey:(id)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2 size:(struct CGSize)arg3;
- (void)clearMemory;
- (void)clear;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (void)setCostLimit:(long long)arg1;
- (id)pathForKey:(id)arg1;
- (id)realKey:(id)arg1 size:(struct CGSize)arg2;
- (id)init;

@end

