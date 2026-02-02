//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSMutableDictionary, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface MMFinderLiveGiftResourceCDNMgr
{
    NSRecursiveLock *_cacheLock;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_thumbnailCaches;
    NSMutableDictionary *_fullPagFileCaches;
    NSMutableDictionary *_landscapeFullPagFileCaches;
    NSMutableDictionary *_previewPagFileCaches;
    NSMutableDictionary *_textCustomizationPreviewPagFileCaches;
    NSMutableDictionary *_giftForegroundPAGFileCaches;
    NSMutableDictionary *_fullRfxPagFileCaches;
    NSMutableDictionary *_landscapeFullRfxPagFileCaches;
    NSMutableDictionary *_previewRfxPagFileCaches;
    NSMutableDictionary *_textCustomizationPreviewRfxPagFileCaches;
    NSMutableDictionary *_giftForegroundRfxPAGFileCaches;
    NSMutableDictionary *_newedCustomizationComponentValueThumbnailCaches;
    NSMutableDictionary *_interactionGiftFileCaches;
    NSMutableDictionary *_attackGiftFileCaches;
    NSMutableDictionary *_anchorCustomizeImageCaches;
    NSMutableDictionary *_requestObjectDict;
    NSMutableArray *_waittingRequestObjectQueue;
    NSMutableArray *_downloadingRequestObjectQueue;
    MMTimer *_memoryCacheManagementTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *memoryCacheManagementTimer; // @synthesize memoryCacheManagementTimer=_memoryCacheManagementTimer;
@property(retain, nonatomic) NSMutableArray *downloadingRequestObjectQueue; // @synthesize downloadingRequestObjectQueue=_downloadingRequestObjectQueue;
@property(retain, nonatomic) NSMutableArray *waittingRequestObjectQueue; // @synthesize waittingRequestObjectQueue=_waittingRequestObjectQueue;
@property(retain, nonatomic) NSMutableDictionary *requestObjectDict; // @synthesize requestObjectDict=_requestObjectDict;
@property(retain, nonatomic) NSMutableDictionary *anchorCustomizeImageCaches; // @synthesize anchorCustomizeImageCaches=_anchorCustomizeImageCaches;
@property(retain, nonatomic) NSMutableDictionary *attackGiftFileCaches; // @synthesize attackGiftFileCaches=_attackGiftFileCaches;
@property(retain, nonatomic) NSMutableDictionary *interactionGiftFileCaches; // @synthesize interactionGiftFileCaches=_interactionGiftFileCaches;
@property(retain, nonatomic) NSMutableDictionary *newedCustomizationComponentValueThumbnailCaches; // @synthesize newedCustomizationComponentValueThumbnailCaches=_newedCustomizationComponentValueThumbnailCaches;
@property(retain, nonatomic) NSMutableDictionary *giftForegroundRfxPAGFileCaches; // @synthesize giftForegroundRfxPAGFileCaches=_giftForegroundRfxPAGFileCaches;
@property(retain, nonatomic) NSMutableDictionary *textCustomizationPreviewRfxPagFileCaches; // @synthesize textCustomizationPreviewRfxPagFileCaches=_textCustomizationPreviewRfxPagFileCaches;
@property(retain, nonatomic) NSMutableDictionary *previewRfxPagFileCaches; // @synthesize previewRfxPagFileCaches=_previewRfxPagFileCaches;
@property(retain, nonatomic) NSMutableDictionary *landscapeFullRfxPagFileCaches; // @synthesize landscapeFullRfxPagFileCaches=_landscapeFullRfxPagFileCaches;
@property(retain, nonatomic) NSMutableDictionary *fullRfxPagFileCaches; // @synthesize fullRfxPagFileCaches=_fullRfxPagFileCaches;
@property(retain, nonatomic) NSMutableDictionary *giftForegroundPAGFileCaches; // @synthesize giftForegroundPAGFileCaches=_giftForegroundPAGFileCaches;
@property(retain, nonatomic) NSMutableDictionary *textCustomizationPreviewPagFileCaches; // @synthesize textCustomizationPreviewPagFileCaches=_textCustomizationPreviewPagFileCaches;
@property(retain, nonatomic) NSMutableDictionary *previewPagFileCaches; // @synthesize previewPagFileCaches=_previewPagFileCaches;
@property(retain, nonatomic) NSMutableDictionary *landscapeFullPagFileCaches; // @synthesize landscapeFullPagFileCaches=_landscapeFullPagFileCaches;
@property(retain, nonatomic) NSMutableDictionary *fullPagFileCaches; // @synthesize fullPagFileCaches=_fullPagFileCaches;
@property(retain, nonatomic) NSMutableDictionary *thumbnailCaches; // @synthesize thumbnailCaches=_thumbnailCaches;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) NSRecursiveLock *cacheLock; // @synthesize cacheLock=_cacheLock;
- (_Bool)useProprietaryProtocol;
- (void)purgeUnusedObjectsInMemoryCache:(id)arg1;
- (void)performRecurrentMemoryCacheManagement;
- (void)clearCrashProtectKeyForProductId:(id)arg1 fileMD5:(id)arg2;
- (void)setCrashProtectKeyForProductId:(id)arg1 fileMD5:(id)arg2;
- (id)getCdnComInfoForRequestObj:(id)arg1;
- (_Bool)loadFromCachePathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3 memoryCacheOptions:(unsigned long long)arg4 extraInfo:(id)arg5;
- (id)taskKeyForResourceId:(id)arg1 uri:(id)arg2 resourceType:(long long)arg3;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (id)readDataFromFile:(id)arg1;
- (id)filterInvalidateCatalogue:(id)arg1;
- (void)getAnchorCustomizeImageWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (id)getAnchorCustomizeImageWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (void)getAttackGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2 maybeAsyncBlock:(CDUnknownBlockType)arg3;
- (id)getAttackGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2;
- (void)getInteractionGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2 maybeAsyncBlock:(CDUnknownBlockType)arg3;
- (id)getInteractionGiftFileWithResourceID:(id)arg1 fileMD5:(id)arg2;
- (id)unzipPathForProductID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (void)getNewCustomizationComponentValueThumbnailWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getThumbnailWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (id)getNewCustomizationComponentValueThumbnailWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getThumbnailWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (void)_getPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3 cacheDict:(id)arg4 memoryCacheOptions:(unsigned long long)arg5 maybeAsyncBlock:(CDUnknownBlockType)arg6;
- (void)getLandscapeFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getTextCustomizationPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getForegroundPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getLandscapeFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getForegroundRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)getPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (void)_getRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3 cacheDict:(id)arg4 memoryCacheOptions:(unsigned long long)arg5 maybeAsyncBlock:(CDUnknownBlockType)arg6;
- (void)getTextCustomizationPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3 maybeAsyncBlock:(CDUnknownBlockType)arg4;
- (id)_getPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3 cacheDict:(id)arg4 memoryCacheOptions:(unsigned long long)arg5;
- (id)getForegroundPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getTextCustomizationPreviewPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getLandscapeFullPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)_getRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3 cacheDict:(id)arg4 memoryCacheOptions:(unsigned long long)arg5;
- (id)getForegroundRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getLandscapeFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getFullRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getTextCustomizationPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (id)getPreviewRfxPagFileWithResourceID:(id)arg1 fileMD5:(id)arg2 memoryCacheOptions:(unsigned long long)arg3;
- (void)clearGiftResourceWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (_Bool)checkGiftResExistenceWithResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
- (void)retryDownLoadForRequestObj:(id)arg1;
- (void)tryResumeNextDownloadRequest;
- (_Bool)startDownloadWithProprietaryDownloadWithMediaInfo:(id)arg1;
- (void)cleanGiftResourceCaches;
- (void)cleanUnusedGiftResources;
- (void)cancelLoadAllURLs:(id)arg1;
- (void)cancelLoadForResourceId:(id)arg1 targetURL:(id)arg2 resourceType:(long long)arg3 oberver:(id)arg4;
- (void)loadGiftResForURL:(id)arg1 resType:(long long)arg2 productId:(id)arg3 fileMD5:(id)arg4 memoryCacheOptions:(unsigned long long)arg5 isPreload:(_Bool)arg6 oberver:(id)arg7 extra:(id)arg8;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (unsigned long long)currentDownloadingCount;
- (void)stopAllPreloadDownLoad;
- (void)stopAllDownLoad;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

