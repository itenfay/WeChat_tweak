//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSCache, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMLiveCacheMgr
{
    NSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_imageIOQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageIOQueue; // @synthesize imageIOQueue=_imageIOQueue;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
- (void)precacheImageAsyncWithLiveTask:(id)arg1;
- (void)asyncLoadImageFromDiskForPath:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)precacheImageForKey:(id)arg1 path:(id)arg2 complection:(CDUnknownBlockType)arg3;
- (void)precacheImageForKey:(id)arg1 path:(id)arg2;
- (void)removeImageCacheForKey:(id)arg1;
- (void)cacheImage:(id)arg1 forKey:(id)arg2;
- (id)imageFromCacheForKey:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

