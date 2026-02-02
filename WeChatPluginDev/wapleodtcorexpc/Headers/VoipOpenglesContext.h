//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAEAGLLayer, EAGLContext, glVideoSharpen;
@protocol VoipOpenglesContextDelegate;

@interface VoipOpenglesContext
{
    char *m_pData[3];
    int srcWidth;
    int srcHeight;
    int dstWidth;
    int dstHeight;
    _Bool sizeChanged;
    unsigned int _colorRenderBuffer;
    unsigned int _YPlanarTexture;
    unsigned int _UPlanarTexture;
    unsigned int _VPlanarTexture;
    unsigned int _UVPlanarTexture;
    unsigned int _textureUniformY;
    unsigned int _textureUniformU;
    unsigned int _textureUniformV;
    unsigned int _textureUniformUV;
    unsigned int _positionSlot;
    unsigned int _texCoordSlot;
    unsigned int rotateUniform;
    unsigned int framebuffer;
    unsigned int vertexBuffer;
    unsigned int vertexArray;
    unsigned int indexBuffer;
    unsigned int programHandle;
    float _degrees;
    _Bool _full;
    float _viewWidth;
    float _viewHeight;
    _Bool _hasInit;
    _Bool _isNV12;
    _Bool _isMirrored;
    _Bool needUpdateParam;
    int notInitErrorCnt;
    int _useSharpenFilter;
    _Bool _enable1080pSharpen;
    long long _sharpenMode;
    _Bool m_deleteFlag;
    _Bool _isApplicationStateActive;
    _Bool _fitView;
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_context;
    id <VoipOpenglesContextDelegate> _m_delegate;
    glVideoSharpen *_sharpenFilter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fitView; // @synthesize fitView=_fitView;
@property(nonatomic) _Bool isApplicationStateActive; // @synthesize isApplicationStateActive=_isApplicationStateActive;
@property(retain, nonatomic) glVideoSharpen *sharpenFilter; // @synthesize sharpenFilter=_sharpenFilter;
@property(nonatomic) __weak id <VoipOpenglesContextDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_deleteFlag; // @synthesize m_deleteFlag;
@property(retain, nonatomic) EAGLContext *_context; // @synthesize _context;
@property(retain, nonatomic) CAEAGLLayer *_eaglLayer; // @synthesize _eaglLayer;
- (id)snapshot;
- (void)compileShaders;
- (void)applyRotation:(float)arg1;
- (float)getDegrees;
- (void)setDegrees:(float)arg1;
- (void)resetMirrored:(_Bool)arg1;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)drawFrameWithSharpenFilter:(_Bool)arg1;
- (void)renderToScreen:(unsigned int)arg1;
- (void)uploadData;
- (void)drawFrame:(_Bool)arg1;
- (void)updateRenderParam:(_Bool)arg1;
- (void)updateTextureYUVNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 texName:(unsigned int)arg4;
- (void)updateTextureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 texName:(unsigned int)arg4;
- (unsigned int)textureYUVNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (unsigned int)textureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (void)setupFrameBuffer;
- (void)setupRenderBuffer;
- (void)setupIndices;
- (void)setupContext;
- (void)setupLayer:(id)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(_Bool)arg4;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage2:(char **)arg1 Swidth:(unsigned int)arg2 Sheight:(unsigned int)arg3 Dwidth:(unsigned int)arg4 Dheight:(unsigned int)arg5;
- (void)renderImage:(char *)arg1 Swidth:(unsigned int)arg2 Sheight:(unsigned int)arg3 Dwidth:(unsigned int)arg4 Dheight:(unsigned int)arg5;
- (void)deleteELGS;
- (void)internalSetupELGS:(id)arg1 IsNV12:(_Bool)arg2 IsMirrored:(_Bool)arg3;
- (void)setupELGS:(id)arg1 IsNV12:(_Bool)arg2 IsMirrored:(_Bool)arg3;
- (void)setupELGS:(id)arg1;
- (void)setSharpenFilter:(int)arg1 sharpenMode:(long long)arg2 enable1080pSharpen:(int)arg3;
- (void)changeFrame:(struct CGRect)arg1;
- (id)init;
- (float)defaultDegrees;

@end

