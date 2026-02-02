//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, MTKView, NSString;
@protocol MTLBuffer, MTLCommandQueue, MTLRenderPipelineState, MTLTexture;

@interface WCAdAlphaVideoMetalRender
{
    int _videoCompositeType;
    MTKView *_mtkView;
    struct __CVMetalTextureCache *_textureCache;
    id <MTLRenderPipelineState> _pipelineState;
    id <MTLCommandQueue> _commandQueue;
    id <MTLTexture> _texture;
    id <MTLBuffer> _vertices;
    unsigned long long _numVertices;
    struct __CVBuffer *_inputPixelBuffer;
    MISSING_TYPE *_viewportSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct __CVBuffer *inputPixelBuffer; // @synthesize inputPixelBuffer=_inputPixelBuffer;
@property(nonatomic) unsigned long long numVertices; // @synthesize numVertices=_numVertices;
@property(retain, nonatomic) id <MTLBuffer> vertices; // @synthesize vertices=_vertices;
@property(retain, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) id <MTLRenderPipelineState> pipelineState; // @synthesize pipelineState=_pipelineState;
@property(nonatomic) MISSING_TYPE *viewportSize; // @synthesize viewportSize=_viewportSize;
@property(nonatomic) struct __CVMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(retain, nonatomic) MTKView *mtkView; // @synthesize mtkView=_mtkView;
@property(nonatomic) int videoCompositeType; // @synthesize videoCompositeType=_videoCompositeType;
- (void)drawTextureWithEncoder:(id)arg1;
- (void)drawInMTKView:(id)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)dealloc;
- (void)setupVertex;
- (void)setupPipeline;
- (void)setupMTKView;
- (void)setup;
- (void)clearFrame;
- (void)renderFrame:(struct __CVBuffer *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 videoCompositeType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

