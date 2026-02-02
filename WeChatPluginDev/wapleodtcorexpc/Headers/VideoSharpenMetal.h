//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MTLRenderPassDescriptor, MTLTextureDescriptor;
@protocol MTLBuffer, MTLDevice, MTLLibrary, MTLRenderPipelineState, MTLTexture;

@interface VideoSharpenMetal : NSObject
{
    id <MTLDevice> _metalDevice;
    id <MTLLibrary> mShadersLibrary;
    id <MTLRenderPipelineState> mBlurPipeline;
    id <MTLRenderPipelineState> mExtractResiduePipeline;
    id <MTLRenderPipelineState> mUSM3FusionPipeline;
    MTLRenderPassDescriptor *mBlurPass1;
    MTLRenderPassDescriptor *mBlurPass2;
    MTLRenderPassDescriptor *mBlurPass3;
    MTLRenderPassDescriptor *mExtractResidueMapPass;
    MTLRenderPassDescriptor *mUSM3FusionPass;
    MTLTextureDescriptor *mTextureDescriptor;
    id <MTLTexture> mBlurTexture1;
    id <MTLTexture> mBlurTexture2;
    id <MTLTexture> mBlurTexture3;
    id <MTLTexture> mResidueMapTexture;
    id <MTLTexture> mUSM3FusionTexture;
    id <MTLBuffer> mvertexBuffer;
    int mWidth;
    int mHeight;
    int mSharpenMode;
}

- (void).cxx_destruct;
- (id)process:(id)arg1 commandbuf:(id)arg2 width:(int)arg3 height:(int)arg4 mode:(int)arg5;
- (void)setuptextures:(int)arg1 height:(int)arg2;
- (void)dealloc;
- (id)init:(int)arg1 device:(id)arg2;

@end

