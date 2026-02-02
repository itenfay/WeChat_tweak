//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString;

@interface MMImageLoader
{
    NSRecursiveLock *_lockRequest;
}

+ (id)RelativePathByTargetURL:(id)arg1;
+ (id)CacheBaseDirectory;
+ (id)DeprecatedCacheBaseDirectory;
+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSRecursiveLock *lockRequest; // @synthesize lockRequest=_lockRequest;
- (void)saveImage:(id)arg1 imageData:(id)arg2;
- (void)removeCacheForURL:(id)arg1;
- (_Bool)isImageLoaded:(id)arg1;
- (void)cancelLoadAllURLs:(id)arg1;
- (void)cancelLoadForURL:(id)arg1 oberver:(id)arg2;
- (void)loadImageForURL:(id)arg1 requestURL:(id)arg2 observer:(id)arg3 reqContext:(id)arg4 scene:(long long)arg5;
- (void)loadImageForURL:(id)arg1 requestURL:(id)arg2 observer:(id)arg3 reqContext:(id)arg4;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2 reqContext:(id)arg3;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2 scene:(long long)arg3 onlyNeedData:(_Bool)arg4 disableCacheWrite:(_Bool)arg5;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2 scene:(long long)arg3;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2;
- (id)makeImagePathForURL:(id)arg1;
- (id)imagePathForURL:(id)arg1;
- (id)imageDataForURL:(id)arg1 LoadOnMainThread:(_Bool)arg2;
- (id)imageCacheForURL:(id)arg1 LoadOnMainThread:(_Bool)arg2;
- (_Bool)imageCacheExistsForURL:(id)arg1;
- (id)imageForURL:(id)arg1 LoadOnMainThread:(_Bool)arg2;
- (void)loadImageFor:(id)arg1 taskGenerator:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadImageFor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;
- (id)swiftImageFor:(id)arg1 loadOnMainThread:(_Bool)arg2;
- (id)swiftImageDataFor:(id)arg1 loadOnMainThread:(_Bool)arg2;
- (void)swiftLoadImageFor:(id)arg1 observer:(id)arg2 downloadTaskGenerator:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_swiftLoadImageFor:(NSString *)arg1 scene:(long long)arg2 completionHandler:(void (^)(UIImage *, NSError *))arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

