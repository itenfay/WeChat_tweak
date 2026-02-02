//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, NSRecursiveLock;

@interface GPUWorkflowImpl : NSObject
{
    unsigned int _fbo;
    EAGLContext *_glContextOld;
    EAGLContext *_glContextNew;
    struct __CVOpenGLESTextureCache *_textureCacheRef;
    struct GPUWorkflowShader *_shader;
    NSRecursiveLock *_glLock;
}

- (void).cxx_destruct;
- (void)restoreContext;
- (void)makeArContext;
- (id)glContext;
- (void)setCurrentEGLContext:(void *)arg1;
- (void)drawYTexture:(unsigned int)arg1 uvTexture:(unsigned int)arg2 viewport:(struct CGSize)arg3 displayTransform:(mat_1cb8bd66)arg4;
- (_Bool)attachOffscreenFramebufferToTargetTexture:(unsigned int)arg1;
- (void)ensureGLVariables;
- (_Bool)renderYTexture:(unsigned int)arg1 uvTexture:(unsigned int)arg2 toTexture:(unsigned int)arg3 viewport:(struct CGSize)arg4 displayTransform:(mat_1cb8bd66)arg5;
- (void)setupTextureCache;
- (_Bool)createTextureFromPixelBuffer:(struct __CVBuffer **)arg1 yTexture:(unsigned int *)arg2 uvTexture:(unsigned int *)arg3;
- (void *)getCameraBufferWithYTexture:(unsigned int)arg1 uvTexture:(unsigned int)arg2 textureSize:(struct CGSize)arg3 viewport:(struct CGSize)arg4 displayTransform:(mat_1cb8bd66)arg5;
- (void *)getCameraBufferWithPixelBuffer:(struct __CVBuffer **)arg1 viewport:(struct CGSize)arg2 displayTransform:(mat_1cb8bd66)arg3;
- (void)releaseGLRes;
- (void)dealloc;
- (id)init;

@end

