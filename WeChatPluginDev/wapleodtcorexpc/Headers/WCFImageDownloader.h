//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSOperationQueue, WCFImageCache, WCFImageDownloadQueue;

@interface WCFImageDownloader : NSObject
{
    WCFImageCache *_cache;
    NSOperationQueue *_decodeQueue;
    WCFImageDownloadQueue *_downloadQueue;
    long long _serial;
}

- (void).cxx_destruct;
@property(nonatomic) long long serial; // @synthesize serial=_serial;
@property(retain, nonatomic) WCFImageDownloadQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSOperationQueue *decodeQueue; // @synthesize decodeQueue=_decodeQueue;
@property(readonly, nonatomic) WCFImageCache *cache; // @synthesize cache=_cache;
- (void)reportImageDownloadIDKeyWithOperation:(id)arg1 info:(id)arg2;
- (void)onOperationFinished:(id)arg1 info:(id)arg2;
- (void)OnCdnDownload:(id)arg1;
- (id)addOperation:(id)arg1 completion:(CDUnknownBlockType)arg2 token:(id)arg3 param:(CDStruct_4b68193d)arg4;
- (id)requestImageWithMedia:(id)arg1 key:(id)arg2 param:(CDStruct_4b68193d)arg3 completion:(CDUnknownBlockType)arg4;
- (id)requestImageWithOperations:(id)arg1 param:(CDStruct_4b68193d)arg2 completion:(CDUnknownBlockType)arg3;
- (id)requestImageWithURL:(id)arg1 key:(id)arg2 param:(CDStruct_4b68193d)arg3 completion:(CDUnknownBlockType)arg4;
- (id)cancelToken;
- (void)removeOperation:(id)arg1;
- (id)operationForKey:(id)arg1;
- (_Bool)addOperation:(id)arg1 forKey:(id)arg2;
- (id)initWithCache:(id)arg1;

@end

