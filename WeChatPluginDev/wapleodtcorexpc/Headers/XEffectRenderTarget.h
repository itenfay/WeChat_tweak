//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAEAGLLayer, EAGLContext;
@protocol XEffectRenderTargetDelegate;

@interface XEffectRenderTarget : NSObject
{
    struct __CVOpenGLESTextureCache *_cvTextureCache;
    unsigned int _renderBuffer;
    unsigned int _frameBuffer;
    unsigned int _texVAO;
    unsigned int _texVBO;
    unsigned int _glProgTex;
    struct __CVBuffer *_videoTexture;
    unsigned int _videoTextureID;
    struct __CVBuffer *_drawTexture;
    unsigned int _drawTextureID;
    unsigned int _prevPointGroupCount;
    struct XEffect_GLContext _ctx;
    _Bool _shouldUpdateLayer;
    _Bool _isBackground;
    _Bool _shouldRecreateTexture;
    long long _orientation;
    struct __CVBuffer *_renderPixelBuffer;
    EAGLContext *_glContext;
    CAEAGLLayer *_layer;
    id <XEffectRenderTargetDelegate> _delegate;
    struct CGSize _currentViewSize;
    struct CGSize _drawTextureSize;
    struct CGRect _renderArea;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRecreateTexture; // @synthesize shouldRecreateTexture=_shouldRecreateTexture;
@property(nonatomic) __weak id <XEffectRenderTargetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CAEAGLLayer *layer; // @synthesize layer=_layer;
@property(nonatomic) struct CGSize drawTextureSize; // @synthesize drawTextureSize=_drawTextureSize;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) struct __CVBuffer *renderPixelBuffer; // @synthesize renderPixelBuffer=_renderPixelBuffer;
@property(nonatomic) _Bool shouldUpdateLayer; // @synthesize shouldUpdateLayer=_shouldUpdateLayer;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct CGSize currentViewSize; // @synthesize currentViewSize=_currentViewSize;
@property(nonatomic) struct CGRect renderArea; // @synthesize renderArea=_renderArea;
- (void)end;
- (void)begin;
- (_Bool)setContext:(id)arg1;
- (id)snapshotWithFrame:(struct CGRect)arg1 format:(long long)arg2 alwaysCopy:(_Bool)arg3;
- (id)getLayerForPreview;
- (struct CGSize)getDrawTextureSize;
- (unsigned int)getVideoTexture;
- (unsigned int)getDrawTexture;
- (void)renderDrawTexture;
- (void)rebindBuffer;
- (void)ensureDrawTexture:(struct CGSize)arg1;
- (void)ensureCoreVideoCache;
- (unsigned int)setupTexture:(struct __CVBuffer *)arg1;
- (_Bool)linkProgram:(unsigned int)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 shaderString:(const char *)arg3;
- (unsigned int)loadGLProgram:(const char *)arg1 frag:(const char *)arg2 ctx:(struct XEffect_GLContext *)arg3;
- (void)resetViewPort;
- (void)setupFramebuffers;
- (void)setupVerticeArrWithTexSize:(struct CGSize)arg1;
- (void)setupProgTex;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)registerBackgroundNotification;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

