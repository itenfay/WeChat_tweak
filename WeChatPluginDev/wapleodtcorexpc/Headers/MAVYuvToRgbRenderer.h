//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVMetalContext;
@protocol MTLCommandQueue, MTLDevice;

@interface MAVYuvToRgbRenderer : NSObject
{
    MAVMetalContext *_context;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    struct __CVMetalTextureCache *_textureCache;
}

- (void).cxx_destruct;
@property(nonatomic) struct __CVMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) MAVMetalContext *context; // @synthesize context=_context;
- (struct __CVBuffer *)acquireTextureFromBuffer:(struct __CVBuffer *)arg1 isLuma:(_Bool)arg2;
- (void)fromPixelBuffer:(struct __CVBuffer *)arg1 toTexture:(id)arg2;
- (id)initWithContext:(id)arg1 CommandQueue:(id)arg2;

@end

