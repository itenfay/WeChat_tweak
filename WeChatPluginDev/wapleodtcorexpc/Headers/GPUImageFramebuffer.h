//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GPUImageFramebuffer : NSObject
{
    unsigned int framebuffer;
    unsigned int _depthbuffer;
    unsigned int frameLumabuffer;
    unsigned int frameChromabuffer;
    struct __CVBuffer *renderTarget;
    struct __CVBuffer *renderTexture;
    unsigned long long readLockCount;
    struct __CVBuffer *renderYUV420Target;
    struct __CVBuffer *renderLumaTexture;
    struct __CVBuffer *renderChromaTexture;
    unsigned long long framebufferReferenceCount;
    _Bool referenceCountingDisabled;
    _Bool generateFrameBufferSuccess;
    _Bool _missingFramebuffer;
    unsigned int _texture;
    unsigned int _lumaTexture;
    unsigned int _chromaTexture;
    struct CGSize _size;
    struct GPUTextureOptions _textureOptions;
}

@property(readonly) unsigned int chromaTexture; // @synthesize chromaTexture=_chromaTexture;
@property(readonly) unsigned int lumaTexture; // @synthesize lumaTexture=_lumaTexture;
@property(readonly) _Bool missingFramebuffer; // @synthesize missingFramebuffer=_missingFramebuffer;
@property(readonly) struct GPUTextureOptions textureOptions; // @synthesize textureOptions=_textureOptions;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (void)getPixelsFromFramebufferContentsVoipExt:(char *)arg1;
- (struct __CVBuffer *)getRenderYUV420Target;
@property(readonly) unsigned int texture; // @synthesize texture=_texture;
- (struct __CVBuffer *)pixelBuffer;
- (char *)byteBuffer;
- (unsigned long long)bytesPerRow;
- (void)unlockAfterReading;
- (void)lockForReading;
- (void)restoreRenderTarget;
- (struct CGImage *)newCGImageFromFramebufferContentsExt;
- (struct CGImage *)newCGImageFromFramebufferContents;
- (void)enableReferenceCounting;
- (void)disableReferenceCounting;
- (void)clearAllLocks;
- (void)unlock;
- (void)lock;
- (void)activateChromaFramebuffer;
- (void)activateLumaFramebuffer;
- (void)activateFramebuffer;
- (void)destroyFramebuffer;
- (void)generateYUV420Framebuffer;
- (void)generateFramebuffer;
- (void)generateDepthBuffer:(struct CGSize)arg1;
- (void)generateTexture;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 overriddenTexture:(unsigned int)arg2;
- (id)initWithSize:(struct CGSize)arg1 textureOptions:(struct GPUTextureOptions)arg2 onlyTexture:(_Bool)arg3 useRGB2YUV420:(_Bool)arg4;
- (id)initWithSize:(struct CGSize)arg1 textureOptions:(struct GPUTextureOptions)arg2 onlyTexture:(_Bool)arg3;

@end

