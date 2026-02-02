//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVMetalContext, MTLRenderPassDescriptor, MTLRenderPipelineDescriptor;
@protocol MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder, MTLRenderPipelineState, MTLTexture;

@interface MAVCopyRendererMetal : NSObject
{
    MTLRenderPassDescriptor *_renderToTextureRenderPassDescriptor;
    float _inputRatio;
    MAVMetalContext *_context;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLRenderCommandEncoder> _encoder;
    MTLRenderPipelineDescriptor *_pipelineStateDescriptor;
    id <MTLRenderPipelineState> _renderToTextureRenderPipeline;
    id <MTLTexture> _inputTexture;
    CDStruct_14d5dc5e _inputMatrix;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_14d5dc5e inputMatrix; // @synthesize inputMatrix=_inputMatrix;
@property(nonatomic) float inputRatio; // @synthesize inputRatio=_inputRatio;
@property(retain, nonatomic) id <MTLTexture> inputTexture; // @synthesize inputTexture=_inputTexture;
@property(retain, nonatomic) id <MTLRenderPipelineState> renderToTextureRenderPipeline; // @synthesize renderToTextureRenderPipeline=_renderToTextureRenderPipeline;
@property(retain, nonatomic) MTLRenderPipelineDescriptor *pipelineStateDescriptor; // @synthesize pipelineStateDescriptor=_pipelineStateDescriptor;
@property(retain, nonatomic) id <MTLRenderCommandEncoder> encoder; // @synthesize encoder=_encoder;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) MAVMetalContext *context; // @synthesize context=_context;
- (void)toScreen:(id)arg1;
- (void)toTexture:(id)arg1;
- (void)fromTexture:(id)arg1 Rotate:(long long)arg2;
- (void)fromTexture:(id)arg1;
- (id)initWithContext:(id)arg1 CommandQueue:(id)arg2;

@end

