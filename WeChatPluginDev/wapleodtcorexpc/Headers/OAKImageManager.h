//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OAKImageManager : NSObject
{
    struct XMutexPOSIX _mutex;
    struct map<unsigned int, OAKImageRequestEntity *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, OAKImageRequestEntity *>>> _requestEntitiesByID;
}

+ (id)defaultManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)onRequestDidCompleteWithAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3 taskID:(unsigned int)arg4;
- (void)onRequestDidCompleteWithImageData:(id)arg1 dataUTI:(id)arg2 orientation:(long long)arg3 info:(id)arg4 taskID:(unsigned int)arg5;
- (void)onLivePhotoRequestDidCompleteWithTaskID:(unsigned int)arg1 error:(id)arg2;
- (int)requestLivePhotoVideoWithAsset:(id)arg1 toFile:(id)arg2 livePhotoCompletionHandler:(CDUnknownBlockType)arg3;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end

