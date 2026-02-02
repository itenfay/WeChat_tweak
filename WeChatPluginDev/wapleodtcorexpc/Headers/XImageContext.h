//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext;
@protocol OS_dispatch_queue;

@interface XImageContext : NSObject
{
    struct ObjectRef<xnet::rci::RciRenderDevice> _renderDevice;
    struct unique_ptr<rfx::RfxRenderGraph, std::default_delete<rfx::RfxRenderGraph>> _renderGraph;
    struct vector<PixelBufferPool, std::allocator<PixelBufferPool>> _pixelBufferPools;
    struct __CVMetalTextureCache *_cvMetalTextureCache;
    struct __CVOpenGLESTextureCache *_cvGLTextureCache;
    EAGLContext *_glContext;
    EAGLContext *_originGLContext;
    struct ObjectRef<rfx::RfxContext> _rfxContext;
    NSObject<OS_dispatch_queue> *_queue;
    struct mutex _mutex;
}

+ (id)builtInShaderPath;
+ (id)context;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (struct __CVBuffer *)createPixelBuffer:(unsigned int)arg1 width:(int)arg2 height:(int)arg3;
- (struct __CVPixelBufferPool *)getCompatiblePixelBufferPool:(unsigned int)arg1 width:(int)arg2 height:(int)arg3;
- (void *)rfxContext;
- (id)glContext;
- (struct __CVOpenGLESTextureCache *)cvGLTextureCache;
- (struct __CVMetalTextureCache *)cvMetalTextureCache;
- (void *)assetManager;
- (void *)pipelineStateCache;
- (void *)shaderLibrary;
- (void *)renderGraph;
- (void *)renderDevice;
- (_Bool)isValid;
- (void)unBindFromTLS;
- (void)bindToTLS;
- (void)dealloc;
- (void)clear;
- (id)initWithGLContext:(id)arg1;
- (id)init;
- (void)setup:(id)arg1;

@end

