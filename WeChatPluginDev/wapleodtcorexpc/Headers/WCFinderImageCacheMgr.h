//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSCache, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCFinderImageCacheMgr
{
    NSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSCache *_playerThumbCache;
    NSCache *_headerImgCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *headerImgCache; // @synthesize headerImgCache=_headerImgCache;
@property(retain, nonatomic) NSCache *playerThumbCache; // @synthesize playerThumbCache=_playerThumbCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
- (id)cachedFileNameForKey:(id)arg1;
- (void)asyncGetHeaderImageFromCacheForKey:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)storeHeaderImage:(id)arg1 forKey:(id)arg2;
- (void)removeThumbForTid:(id)arg1;
- (void)setThumb:(id)arg1 forTid:(id)arg2;
- (id)thumbForTid:(id)arg1;
- (void)asyncGetImageFromDiskForPath:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (id)imageFromDiskForPath:(id)arg1;
- (id)imageFromMemoryForKey:(id)arg1;
- (id)imageFromCacheForKey:(id)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

