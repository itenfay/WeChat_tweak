//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPMetalColorHelper, VideoClarityMetal, VideoLucidMetal, VideoSharpenMetal;
@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLLibrary, MTLRenderPipelineState, MTLTexture;

@interface TPMetalRenderBase : NSObject
{
    id <MTLDevice> _metalDevice;
    id <MTLCommandQueue> _commandQueue;
    id <MTLLibrary> _defaultLibrary;
    id <MTLRenderPipelineState> _pipelineState;
    id <MTLBuffer> _vertexBuffer;
    id <MTLBuffer> _parametersBuffer;
    int _offset;
    VideoSharpenMetal *_MetalSharpenFilter;
    id <MTLTexture> _sTexture;
    int _yWidth;
    int _yHeight;
    VideoLucidMetal *_metalLucidFilter;
    VideoClarityMetal *_metalClarityFilter;
    _Bool _colorManagementFlag;
    _Bool _renderOptYuv420;
    int _rendererClarityFlag;
    int _rendererSharpenFlag;
    int _rendererLucidFlag;
    TPMetalColorHelper *_colorHelper;
}

- (void).cxx_destruct;
@property _Bool renderOptYuv420; // @synthesize renderOptYuv420=_renderOptYuv420;
@property int rendererLucidFlag; // @synthesize rendererLucidFlag=_rendererLucidFlag;
@property int rendererSharpenFlag; // @synthesize rendererSharpenFlag=_rendererSharpenFlag;
@property(retain, nonatomic) TPMetalColorHelper *colorHelper; // @synthesize colorHelper=_colorHelper;
@property int rendererClarityFlag; // @synthesize rendererClarityFlag=_rendererClarityFlag;
@property _Bool colorManagementFlag; // @synthesize colorManagementFlag=_colorManagementFlag;
- (id)getYTexture;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (_Bool)setupTexturesForFrame:(struct TPFrame *)arg1;
- (id)fragmentFunctionSourceName;
- (id)vertexFunctionSourceName;
- (id)shaderSource;
- (_Bool)drawFrame:(struct TPFrame *)arg1 withDestination:(id)arg2;
- (void)setupMetalFilters:(struct TPFrame *)arg1;
- (void)render:(id)arg1;
- (void)setRenderInfo:(struct TPFrame *)arg1;
- (_Bool)prepareRender;
- (id)currentMetalDevice;
- (_Bool)onMetalContextReady;
- (_Bool)loadAssets;
- (_Bool)setupMetal;
- (void)setClarityFlag:(int)arg1;
- (void)setLucidFlag:(int)arg1;
- (void)setSharpenFlag:(int)arg1;
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

