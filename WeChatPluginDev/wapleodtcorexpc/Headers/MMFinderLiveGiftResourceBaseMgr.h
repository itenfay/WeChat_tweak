//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMFinderLiveGiftResourceBaseMgr
{
}

- (id)unzipPathForProductID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (id)filterInvalidateCatalogue:(id)arg1;
- (void)getAnchorCustomizeImageWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (id)getAnchorCustomizeImageWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (void)getAttackGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2 maybeAsyncBlock:(CDUnknownBlockType)arg3;
- (id)getAttackGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2;
- (id)getInteractionGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2;
- (void)getInteractionGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2 maybeAsyncBlock:(CDUnknownBlockType)arg3;
- (void)cleanGiftResourceCaches;
- (void)cleanUnusedGiftResources;
- (void)getTextCustomizationPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getForegroundRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getForegroundPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getTextCustomizationPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getThumbnailWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getLandscapeFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getLandscapeFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (id)getTextCustomizationPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getForegroundRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getForegroundPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getTextCustomizationPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getThumbnailWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getLandscapeFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getLandscapeFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (void)clearGiftResourceWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (_Bool)checkGiftResExistenceWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (unsigned long long)currentDownloadingCount;
- (void)stopAllPreloadDownLoad;
- (void)cancelLoadAllURLs:(id)arg1;
- (void)cancelLoadForResourceId:(id)arg1 targetURL:(id)arg2 resourceType:(long long)arg3 oberver:(id)arg4;
- (void)loadGiftResForURL:(id)arg1 resType:(long long)arg2 productId:(id)arg3 fileMD5:(id)arg4 memoryCacheOptions:(unsigned long long)arg5 isPreload:(_Bool)arg6 oberver:(id)arg7 extra:(id)arg8;
- (void)loadGiftResForURL:(id)arg1 resType:(long long)arg2 productId:(id)arg3 fileMD5:(id)arg4 memoryCacheOptions:(unsigned long long)arg5 isPreload:(_Bool)arg6 oberver:(id)arg7;
- (void)loadGiftResForURL:(id)arg1 resType:(long long)arg2 productId:(id)arg3 fileMD5:(id)arg4 memoryCacheOptions:(unsigned long long)arg5 oberver:(id)arg6 extra:(id)arg7;
- (void)loadGiftResForURL:(id)arg1 resType:(long long)arg2 productId:(id)arg3 fileMD5:(id)arg4 memoryCacheOptions:(unsigned long long)arg5 oberver:(id)arg6;

@end

