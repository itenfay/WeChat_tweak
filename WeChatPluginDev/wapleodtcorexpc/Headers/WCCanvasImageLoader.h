//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSRecursiveLock, NSString, WCDownloadImageCdnMgr;
@protocol OS_dispatch_queue;

@interface WCCanvasImageLoader
{
    NSRecursiveLock *m_lock;
    NSObject<OS_dispatch_queue> *_request_queue;
    NSMutableDictionary *m_requestInfoDictionary;
    unsigned int m_imageDataSize;
    NSMutableDictionary *m_imageCaches;
    NSMutableArray *m_imageCacheFIFO;
    unsigned int m_gifDataSize;
    NSMutableDictionary *m_gifDataCaches;
    NSMutableArray *m_gifDataCacheFIFO;
    WCDownloadImageCdnMgr *_cdnMgr;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void).cxx_destruct;
@property(retain, nonatomic) WCDownloadImageCdnMgr *cdnMgr; // @synthesize cdnMgr=_cdnMgr;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock;
- (void)onCdnDownloadImageProcessChanged:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onCdnDownloadImageCancel:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageBegin:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageAddedQueue:(id)arg1 downloadType:(long long)arg2;
- (id)cdnGetSnsOperationsWithFeedId:(id)arg1;
- (void)onCdnDownloadImageFail:(id)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageFinish:(id)arg1 downloadType:(long long)arg2;
- (id)urlMD5ForConnection:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (id)fetchSphereThumbIDForOriUrl:(id)arg1 thumbSize:(struct CGSize)arg2;
- (void)removeConnectionForUrl:(id)arg1;
- (void)saveImage:(id)arg1 imageData:(id)arg2;
- (void)removeCacheForURLs:(id)arg1;
- (void)removeCacheForURL:(id)arg1;
- (void)removeGifDataCacheForKey:(id)arg1;
- (void)removeImageCacheForKey:(id)arg1;
- (_Bool)isImageLoaded:(id)arg1;
- (void)cancelLoadAllURLs:(id)arg1;
- (void)cancelLoadForURL:(id)arg1 oberver:(id)arg2;
- (void)loadAdImageForURL:(id)arg1 observer:(id)arg2;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2 atScene:(unsigned int)arg3 isPreload:(_Bool)arg4 useSnsCdnDownload:(_Bool)arg5;
- (id)imagePathForURL:(id)arg1;
- (id)imageDataForURL:(id)arg1 LoadOnMainThread:(_Bool)arg2;
- (id)imageCacheForURL:(id)arg1 LoadOnMainThread:(_Bool)arg2;
- (_Bool)imageCacheExistsForURL:(id)arg1;
- (id)imageForURL:(id)arg1 LoadOnMainThread:(_Bool)arg2;
- (void)callAllExtWithOrder:(id)arg1 Data:(id)arg2 Url:(id)arg3 UrlMd5:(id)arg4;
- (void)callImageDidLoadOrFailedExt:(id)arg1 Url:(id)arg2 UrlMd5:(id)arg3;
- (_Bool)callImageDidLoadWithDataOrFailedExt:(id)arg1 Url:(id)arg2 withUrlMd5:(id)arg3;
- (void)callImageDidLoadWithDataExt:(id)arg1 Url:(id)arg2 withUrlMd5:(id)arg3;
- (void)callImageDidLoadExt:(id)arg1 Url:(id)arg2 withUrlMd5:(id)arg3;
- (id)getDataFromCache:(id)arg1;
- (id)getImageFromImageCache:(id)arg1;
- (id)getImageFromCache:(id)arg1;
- (id)cacheImageFromData:(id)arg1 fromUrl:(id)arg2;
- (id)cacheNotGifImageFromFile:(id)arg1 fromUrl:(id)arg2;
- (id)cacheImageFromFile:(id)arg1 fromUrl:(id)arg2;
- (id)cacheDataFromFile:(id)arg1 fromUrl:(id)arg2;
- (void)onServiceMemoryWarning;
- (void)setImageObject:(id)arg1 forKey:(id)arg2;
- (void)setImageDataObject:(id)arg1 forKey:(id)arg2;
- (id)imageObjectForKey:(id)arg1;
- (id)imageDataObjectForKey:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

