//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MTLRenderPipelineReflection, TXCMetalContext;
@protocol MTLDevice, MTLRenderPipelineState;

@interface TXCMetalRenderKernel : NSObject
{
    TXCMetalContext *_context;
    id <MTLRenderPipelineState> _renderPipelineState;
    MTLRenderPipelineReflection *_reflection;
}

+ (id)kernelWithSource:(id)arg1 pixelFormat:(unsigned long long)arg2 context:(id)arg3 vertexFunction:(id)arg4 fragmentFunction:(id)arg5;
+ (id)kernelWithSource:(id)arg1 context:(id)arg2 vertexFunction:(id)arg3 fragmentFunction:(id)arg4;
- (void).cxx_destruct;
- (id)renderTextures:(id)arg1 toTarget:(id)arg2 parameters:(id)arg3 coordinate:(id)arg4;
- (void)applyFragmentParameters:(id)arg1 encoder:(id)arg2;
- (id)initWithContext:(id)arg1 renderPipelineState:(id)arg2 reflection:(id)arg3;
@property(readonly, nonatomic) id <MTLDevice> device;

@end

