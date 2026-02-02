//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MTLRenderPassDescriptor, NSString, TPMTLDisplayConfig;
@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLLibrary, MTLRenderPipelineState;

@interface TPMTLFrameRendererBase : NSObject
{
    unsigned long long rendererType;
    id <MTLDevice> _mtlDevice;
    id <MTLCommandQueue> _cmdQueue;
    id <MTLLibrary> _library;
    id <MTLBuffer> _vertexTexBuffer;
    id <MTLRenderPipelineState> _pipelineState;
    MTLRenderPassDescriptor *_renderpassDescriptor;
    TPMTLDisplayConfig *_displayCfg;
}

- (void).cxx_destruct;
@property(retain) TPMTLDisplayConfig *displayCfg; // @synthesize displayCfg=_displayCfg;
@property(retain) MTLRenderPassDescriptor *renderpassDescriptor; // @synthesize renderpassDescriptor=_renderpassDescriptor;
@property(retain) id <MTLRenderPipelineState> pipelineState; // @synthesize pipelineState=_pipelineState;
@property(retain) id <MTLBuffer> vertexTexBuffer; // @synthesize vertexTexBuffer=_vertexTexBuffer;
@property(retain) id <MTLLibrary> library; // @synthesize library=_library;
@property(retain) id <MTLCommandQueue> cmdQueue; // @synthesize cmdQueue=_cmdQueue;
@property(retain) id <MTLDevice> mtlDevice; // @synthesize mtlDevice=_mtlDevice;
@property(readonly) unsigned long long rendererType; // @synthesize rendererType;
- (void)setFrame:(struct TPFrame *)arg1;
- (void)uploadResourcesToCommandEncoder:(id)arg1;
- (id)fragmentFunctionName;
- (id)vertexFunctionName;
- (id)shaderSource;
- (void)renderImpl:(id)arg1 withRenderPass:(id)arg2 withCmdBuffer:(id)arg3;
- (_Bool)render:(struct TPFrame *)arg1 destination:(id)arg2;
- (id)currentRenderPassDescriptor:(id)arg1;
- (_Bool)prepareRenderer:(id)arg1;
- (void)prepareMTLContext;
- (id)initWithMetalDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

