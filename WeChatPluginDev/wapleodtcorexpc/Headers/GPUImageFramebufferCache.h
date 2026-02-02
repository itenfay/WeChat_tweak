//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GPUImageFramebufferCache : NSObject
{
    NSMutableDictionary *framebufferCache;
    NSMutableDictionary *framebufferTypeCounts;
    NSMutableArray *activeImageCaptureList;
    id memoryWarningObserver;
    NSObject<OS_dispatch_queue> *framebufferCacheQueue;
}

- (void).cxx_destruct;
- (void)removeFramebufferFromActiveImageCaptureList:(id)arg1;
- (void)addFramebufferToActiveImageCaptureList:(id)arg1;
- (void)purgeAllUnassignedFramebuffers;
- (void)returnFramebufferToCache:(id)arg1;
- (id)fetchFramebufferForSize:(struct CGSize)arg1 onlyTexture:(_Bool)arg2;
- (id)fetchFramebufferForSize:(struct CGSize)arg1 textureOptions:(struct GPUTextureOptions)arg2 onlyTexture:(_Bool)arg3 useRGB2YUV420:(_Bool)arg4;
- (id)fetchFramebufferForSize:(struct CGSize)arg1 textureOptions:(struct GPUTextureOptions)arg2 onlyTexture:(_Bool)arg3;
- (id)hashForSize:(struct CGSize)arg1 textureOptions:(struct GPUTextureOptions)arg2 onlyTexture:(_Bool)arg3;
- (void)dealloc;
- (id)init;

@end

