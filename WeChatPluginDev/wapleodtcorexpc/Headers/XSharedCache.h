//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface XSharedCache : NSObject
{
    struct ObjectRef<rfx::RfxShaderLibrary> _shaderLibrary;
    struct ObjectRef<rfx::RfxPipelineStateCache> _pipelineStateCache;
    struct ObjectRef<rfx::RfxAssetManager> _assetManager;
    struct ObjectRef<xnet::rci::RciRenderDevice> _device;
    shared_ptr_fb084d9c _threadPool;
}

+ (id)sharedCache;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_fb084d9c)threadPool;
- (void *)assetManager;
- (void *)pipelineStateCache;
- (void *)shaderLibrary;

@end

