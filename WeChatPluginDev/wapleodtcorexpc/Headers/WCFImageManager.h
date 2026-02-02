//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSLock, NSMutableArray, NSObject, NSString, WCFImageCache, WCFImageDownloader;
@protocol OS_dispatch_queue;

@interface WCFImageManager
{
    NSLock *_operationsLock;
    _Bool _fromShare;
    WCFImageCache *_cache;
    WCFImageDownloader *_downloader;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_queue> *_blocksQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *blocksQueue; // @synthesize blocksQueue=_blocksQueue;
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) WCFImageDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) WCFImageCache *cache; // @synthesize cache=_cache;
@property(nonatomic) _Bool fromShare; // @synthesize fromShare=_fromShare;
- (id)imageDownloader;
- (id)imageCache;
- (void)onImageLoaded:(id)arg1 operation:(id)arg2 key:(id)arg3 error:(id)arg4 param:(CDStruct_4b68193d)arg5 finished:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)callCompletion:(CDUnknownBlockType)arg1 image:(id)arg2 key:(id)arg3 param:(CDStruct_4b68193d)arg4 error:(id)arg5;
- (void)callCompletion:(CDUnknownBlockType)arg1 operations:(id)arg2 image:(id)arg3 param:(CDStruct_4b68193d)arg4 error:(id)arg5;
- (void)callDownload:(id)arg1 operations:(id)arg2 param:(CDStruct_4b68193d)arg3 completion:(CDUnknownBlockType)arg4;
- (void)callDownload:(id)arg1 url:(id)arg2 key:(id)arg3 size:(struct CGSize)arg4 options:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)callDownload:(id)arg1 media:(id)arg2 key:(id)arg3 param:(CDStruct_4b68193d)arg4 completion:(CDUnknownBlockType)arg5;
- (id)queryCacheForMedia:(id)arg1 type:(long long)arg2 size:(struct CGSize)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)queryCacheForMedia:(id)arg1 type:(long long)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (id)loadImagesWithBlock:(CDUnknownBlockType)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)loadImageWithMedia:(id)arg1 type:(long long)arg2 size:(struct CGSize)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)loadImageWithMedia:(id)arg1 isThumb:(_Bool)arg2 size:(struct CGSize)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)preloadImageWithMedia:(id)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)preloadImageWithMedia:(id)arg1 isThumb:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)loadImageWithURL:(id)arg1 imageIdentifier:(id)arg2 size:(struct CGSize)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)loadImageWithURL:(id)arg1 size:(struct CGSize)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addOperation:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceMemoryWarning;
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

