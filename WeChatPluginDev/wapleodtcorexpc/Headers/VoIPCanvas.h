//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, VoIPCanvasBuffer;
@protocol MTLCommandQueue, MTLDevice, OS_dispatch_queue;

@interface VoIPCanvas : NSObject
{
    struct __CVMetalTextureCache *_metalTextureCache;
    _Bool _isRendering;
    _Bool _needRender;
    VoIPCanvasBuffer *_buffer;
    NSMutableArray *_mutablePlugins;
    NSObject<OS_dispatch_queue> *_queue;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needRender; // @synthesize needRender=_needRender;
@property(nonatomic) _Bool isRendering; // @synthesize isRendering=_isRendering;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *mutablePlugins; // @synthesize mutablePlugins=_mutablePlugins;
@property(retain, nonatomic) VoIPCanvasBuffer *buffer; // @synthesize buffer=_buffer;
- (void)clear;
- (struct __CVBuffer *)createMetalTextureFromPixelBuffer:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 planeIndex:(long long)arg3;
- (void)render;
- (void)resizeWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)delPlugin:(id)arg1;
- (void)addPlugin:(id)arg1;
- (void)dealloc;
- (id)initWithBuffer:(id)arg1 metalTextureCache:(struct __CVMetalTextureCache *)arg2 device:(id)arg3 commandQueue:(id)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 queue:(id)arg7;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 queue:(id)arg3;

@end

