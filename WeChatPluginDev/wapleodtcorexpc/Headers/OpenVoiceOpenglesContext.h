//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAEAGLLayer, EAGLContext;
@protocol OpenVoiceOpenglesContextDelegate;

@interface OpenVoiceOpenglesContext
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
    unsigned int indexBuffer;
    float _degrees;
    _Bool _full;
    float _viewWidth;
    float _viewHeight;
    _Bool _hasInit;
    _Bool _isNV12;
    _Bool _isMirrored;
    _Bool needUpdateParam;
    int notInitErrorCnt;
    _Bool m_deleteFlag;
    _Bool _fitView;
    int _objectFit;
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_context;
    id <OpenVoiceOpenglesContextDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) int objectFit; // @synthesize objectFit=_objectFit;
@property(nonatomic) _Bool fitView; // @synthesize fitView=_fitView;
@property(nonatomic) __weak id <OpenVoiceOpenglesContextDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_deleteFlag; // @synthesize m_deleteFlag;
@property(retain, nonatomic) EAGLContext *_context; // @synthesize _context;
@property(retain, nonatomic) CAEAGLLayer *_eaglLayer; // @synthesize _eaglLayer;
- (void)compileShaders;
- (void)applyRotation:(float)arg1;
- (_Bool)isUnmatch;
- (float)getDegrees;
- (void)setDegrees:(float)arg1;
- (void)resetMirrored:(_Bool)arg1;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
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
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 objectFit:(int)arg4;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(_Bool)arg4;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage2:(char **)arg1 Swidth:(unsigned int)arg2 Sheight:(unsigned int)arg3 Dwidth:(unsigned int)arg4 Dheight:(unsigned int)arg5;
- (void)renderImage:(char *)arg1 Swidth:(unsigned int)arg2 Sheight:(unsigned int)arg3 Dwidth:(unsigned int)arg4 Dheight:(unsigned int)arg5;
- (void)changeFrame:(struct CGRect)arg1;
- (void)deleteELGS;
- (void)internalSetupELGS:(id)arg1 IsNV12:(_Bool)arg2 IsMirrored:(_Bool)arg3;
- (void)setupELGS:(id)arg1 IsNV12:(_Bool)arg2 IsMirrored:(_Bool)arg3;
- (void)setupELGS:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

