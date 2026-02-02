//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MTLRenderPassDescriptor, NSString, TAVMediaMetalView;
@protocol MTLBuffer, MTLRenderPipelineState, MTLTexture;

@interface TAVMediaRenderer : NSObject
{
    _Bool _firstFrameDidAppear;
    CDUnknownBlockType _firstFrameAppearBlock;
    id <MTLRenderPipelineState> _renderPipelineState;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    id <MTLTexture> _inputTexture;
    id <MTLBuffer> _positionBuffer;
    id <MTLBuffer> _textureCoordinateBuffer;
    TAVMediaMetalView *_metalView;
    struct CGSize _textureSize;
}

+ (id)convertPixelBuffer:(struct __CVBuffer *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool firstFrameDidAppear; // @synthesize firstFrameDidAppear=_firstFrameDidAppear;
@property(nonatomic) struct CGSize textureSize; // @synthesize textureSize=_textureSize;
@property(retain, nonatomic) TAVMediaMetalView *metalView; // @synthesize metalView=_metalView;
@property(retain, nonatomic) id <MTLBuffer> textureCoordinateBuffer; // @synthesize textureCoordinateBuffer=_textureCoordinateBuffer;
@property(retain, nonatomic) id <MTLBuffer> positionBuffer; // @synthesize positionBuffer=_positionBuffer;
@property(retain, nonatomic) id <MTLTexture> inputTexture; // @synthesize inputTexture=_inputTexture;
@property(retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor; // @synthesize renderPassDescriptor=_renderPassDescriptor;
@property(retain, nonatomic) id <MTLRenderPipelineState> renderPipelineState; // @synthesize renderPipelineState=_renderPipelineState;
@property(copy, nonatomic) CDUnknownBlockType firstFrameAppearBlock; // @synthesize firstFrameAppearBlock=_firstFrameAppearBlock;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (void)refreshMetalView;
- (void)updatePixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithMetalKitView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

