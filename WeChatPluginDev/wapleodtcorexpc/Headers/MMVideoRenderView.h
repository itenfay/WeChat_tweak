//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, CALayer, EAGLContext, MMCameraFocusSquare, MMOpenGLContext, UIPinchGestureRecognizer, UITapGestureRecognizer;
@protocol MMVideoRenderViewDelegate;

@interface MMVideoRenderView : UIView
{
    _Bool _isInBackground;
    _Bool _isInitOpenglParam;
    struct CGSize _bufSize;
    struct CGRect _frameRect;
    float _imageVertices[8];
    const float *_preferredConversion;
    const float *_preferredOffsetVec3;
    struct CGRect _frame;
    CALayer *_layer;
    unsigned long long _busyCount;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MMCameraFocusSquare *_focusSquare;
    unsigned int _originYuvYTexture;
    _Bool _mirror;
    _Bool _renderable;
    _Bool _focusable;
    _Bool _enableGestures;
    _Bool _isInRotationAnimation;
    _Bool _isMainThreadLag2024T31Enabled;
    _Bool _disableOpaqueRender;
    int _videoBlockThreshold;
    int _streamType;
    int _blockIntervalMs;
    unsigned int _renderBuffer;
    unsigned int _frameBuffer;
    unsigned int _yuvYTexture;
    unsigned int _yuvUTexture;
    unsigned int _yuvVTexture;
    unsigned int _maskTexture;
    unsigned int _vertexShader;
    unsigned int _fragmentShader;
    unsigned int _programHandle;
    unsigned int _positionSlot;
    unsigned int _texCoordSlot;
    unsigned int _yuvTypeUniform;
    unsigned int _textureUniformY;
    unsigned int _textureUniformU;
    unsigned int _textureUniformV;
    unsigned int _textureUniformMask;
    unsigned int _yuvConversionMatrixUniform;
    unsigned int _yuvOffsetMatrixUniform;
    unsigned int _mRawDataFrameType;
    long long _scene;
    long long _renderMode;
    long long _rotation;
    id <MMVideoRenderViewDelegate> _delegate;
    unsigned long long _lastBlockDuration;
    CDUnknownBlockType _onRenderEvent;
    MMOpenGLContext *_context;
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_curContext;
    struct CGRect _normalizedDisplayRect;
    struct CGRect _videoRect;
}

+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) unsigned int mRawDataFrameType; // @synthesize mRawDataFrameType=_mRawDataFrameType;
@property(nonatomic) unsigned int yuvOffsetMatrixUniform; // @synthesize yuvOffsetMatrixUniform=_yuvOffsetMatrixUniform;
@property(nonatomic) unsigned int yuvConversionMatrixUniform; // @synthesize yuvConversionMatrixUniform=_yuvConversionMatrixUniform;
@property(nonatomic) unsigned int textureUniformMask; // @synthesize textureUniformMask=_textureUniformMask;
@property(nonatomic) unsigned int textureUniformV; // @synthesize textureUniformV=_textureUniformV;
@property(nonatomic) unsigned int textureUniformU; // @synthesize textureUniformU=_textureUniformU;
@property(nonatomic) unsigned int textureUniformY; // @synthesize textureUniformY=_textureUniformY;
@property(nonatomic) unsigned int yuvTypeUniform; // @synthesize yuvTypeUniform=_yuvTypeUniform;
@property(nonatomic) unsigned int texCoordSlot; // @synthesize texCoordSlot=_texCoordSlot;
@property(nonatomic) unsigned int positionSlot; // @synthesize positionSlot=_positionSlot;
@property(nonatomic) unsigned int programHandle; // @synthesize programHandle=_programHandle;
@property(nonatomic) unsigned int fragmentShader; // @synthesize fragmentShader=_fragmentShader;
@property(nonatomic) unsigned int vertexShader; // @synthesize vertexShader=_vertexShader;
@property(nonatomic) unsigned int maskTexture; // @synthesize maskTexture=_maskTexture;
@property(nonatomic) unsigned int yuvVTexture; // @synthesize yuvVTexture=_yuvVTexture;
@property(nonatomic) unsigned int yuvUTexture; // @synthesize yuvUTexture=_yuvUTexture;
@property(nonatomic) unsigned int yuvYTexture; // @synthesize yuvYTexture=_yuvYTexture;
@property(nonatomic) unsigned int frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(nonatomic) unsigned int renderBuffer; // @synthesize renderBuffer=_renderBuffer;
@property(retain, nonatomic) EAGLContext *curContext; // @synthesize curContext=_curContext;
@property(retain, nonatomic) CAEAGLLayer *eaglLayer; // @synthesize eaglLayer=_eaglLayer;
@property(nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(nonatomic) _Bool disableOpaqueRender; // @synthesize disableOpaqueRender=_disableOpaqueRender;
@property struct CGRect normalizedDisplayRect; // @synthesize normalizedDisplayRect=_normalizedDisplayRect;
@property(retain, nonatomic) MMOpenGLContext *context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType onRenderEvent; // @synthesize onRenderEvent=_onRenderEvent;
@property(nonatomic) _Bool isMainThreadLag2024T31Enabled; // @synthesize isMainThreadLag2024T31Enabled=_isMainThreadLag2024T31Enabled;
@property(nonatomic) _Bool isInRotationAnimation; // @synthesize isInRotationAnimation=_isInRotationAnimation;
@property(nonatomic) _Bool enableGestures; // @synthesize enableGestures=_enableGestures;
@property(readonly, nonatomic) unsigned long long lastBlockDuration; // @synthesize lastBlockDuration=_lastBlockDuration;
@property(readonly, nonatomic) struct CGSize bufSize; // @synthesize bufSize=_bufSize;
@property(nonatomic) int blockIntervalMs; // @synthesize blockIntervalMs=_blockIntervalMs;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) int videoBlockThreshold; // @synthesize videoBlockThreshold=_videoBlockThreshold;
@property(nonatomic) _Bool focusable; // @synthesize focusable=_focusable;
@property(nonatomic) _Bool renderable; // @synthesize renderable=_renderable;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) __weak id <MMVideoRenderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)focusTap:(id)arg1;
- (void)deallocFocusView;
- (void)initFocusView;
- (void)handlePinch:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (struct CGRect)getCurrFrameRect;
- (unsigned long long)calculateRotation;
- (void)calculateVertices;
- (void)convertYUVToRGBOutput;
- (void)innerRenderTexture:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3 maskTexture:(unsigned int)arg4;
- (void)renderTexture:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3 maskTexture:(unsigned int)arg4;
- (void)renderWeEffectFrame:(id)arg1;
- (id)getFlagmentShaderStr;
- (id)getVertexShaderStr;
- (void)compileShaders;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)setupTexture;
- (void)setupFrameBuffer;
- (void)setupRenderBuffer;
- (void)setupLayer;
- (void)cleanup;
- (void)dealloc;
- (void)setup;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

