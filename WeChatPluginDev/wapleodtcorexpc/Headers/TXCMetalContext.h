//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXCMetalRenderKernel;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

@interface TXCMetalContext : NSObject
{
    id <MTLCommandBuffer> _sharedCommandBuffer;
    TXCMetalRenderKernel *_sharedBGRARenderKernel;
    TXCMetalRenderKernel *_sharedRGBARenderKernel;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    struct __CVMetalTextureCache *_metalTextureCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CVMetalTextureCache *metalTextureCache; // @synthesize metalTextureCache=_metalTextureCache;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (void)waitUntilScheduled;
- (void)finish;
- (void)flush;
- (id)textureFromCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)newTXCMetalTexture:(struct CGSize)arg1;
- (void)dealloc;
@property(readonly, nonatomic) TXCMetalRenderKernel *sharedRGBARenderKernel; // @synthesize sharedRGBARenderKernel=_sharedRGBARenderKernel;
@property(readonly, nonatomic) TXCMetalRenderKernel *sharedBGRARenderKernel; // @synthesize sharedBGRARenderKernel=_sharedBGRARenderKernel;
@property(readonly, nonatomic) id <MTLCommandBuffer> sharedCommandBuffer; // @synthesize sharedCommandBuffer=_sharedCommandBuffer;
- (id)init;

@end

