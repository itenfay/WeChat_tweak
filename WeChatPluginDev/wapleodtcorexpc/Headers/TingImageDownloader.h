//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TingImageDownloader : NSObject
{
    NSMutableDictionary *_blockMap;
    NSMutableDictionary *_momentBlockMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *momentBlockMap; // @synthesize momentBlockMap=_momentBlockMap;
@property(retain, nonatomic) NSMutableDictionary *blockMap; // @synthesize blockMap=_blockMap;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)cancelAllDownloadMomentImage:(id)arg1;
- (void)cancelDownloadMomentThumbnail:(id)arg1 observer:(id)arg2;
- (void)loadMomentThumbnail:(id)arg1 observer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelDownloadMomentImage:(id)arg1 downloadType:(long long)arg2 observer:(id)arg3;
- (void)loadMomentImage:(id)arg1 downloadType:(long long)arg2 observer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)cachedThumbnailForWCMediaItem:(id)arg1;
- (id)cachedImageForWCMediaItem:(id)arg1 photoType:(long long)arg2;
- (id)keyForWCMediaItem:(id)arg1 downloadType:(long long)arg2;
- (id)thumbnailItem:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)cancelImageDownloadForUrl:(id)arg1 observer:(id)arg2;
- (void)loadImageWithUrl:(id)arg1 observer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cachedImageForUrl:(id)arg1;
- (id)existHanlderForObserver:(id)arg1 inHandlers:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

