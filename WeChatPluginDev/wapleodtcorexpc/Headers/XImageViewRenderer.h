//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAEDRMetadata, CAMetalLayer, NSLock, NSString, UIView, XImage, XImageContext, XImageView;

@interface XImageViewRenderer : NSObject
{
    struct unique_ptr<rfx::RfxImageView, std::default_delete<rfx::RfxImageView>> _imageView;
    struct unique_ptr<rfx::SharpenFilter, std::default_delete<rfx::SharpenFilter>> _sharpenFilter;
    struct Matrix4x4<float> _transform;
    _Bool _useExternalTransform;
    ObjectRef_edd3069f _swapChain;
    struct CGColorSpace *_colorSpace;
    struct ObjectRef<xnet::rci::RciVertexInput> _vrVertexInput;
    struct ObjectRef<xnet::rci::RciBufferBlock> _vrPositionBlock;
    struct ObjectRef<xnet::rci::RciBufferBlock> _vrUVBlock;
    struct ObjectRef<rfx::RfxMaterial> _vrMaterial;
    struct RfxPushConstantID _vrTransformID;
    struct RfxPushConstantID _vrYuvToRGBID;
    struct RfxPushConstantID _vrColorOffsetID;
    _Bool _flipX;
    _Bool _flipY;
    _Bool _enableSharpenForYUV;
    _Bool _enableSharpenFor1080P;
    _Bool _disableOpaqueRender;
    _Bool _isSupportHDR;
    _Bool _preferHdr;
    float _contentsScale;
    int _sharpenIntensity;
    float _rotationInDegree;
    unsigned long long _contentMode;
    unsigned long long _sharpenMode;
    XImageView *_internalPreview;
    UIView *_lastView;
    CAMetalLayer *_previewLayer;
    NSString *_name;
    XImage *_lastImage;
    NSLock *_lock;
    XImageContext *_context;
    CAEDRMetadata *_EDRMetadata;
    struct CGRect _frame;
}

+ (_Bool)isSupportHDR;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) CAEDRMetadata *EDRMetadata; // @synthesize EDRMetadata=_EDRMetadata;
@property(nonatomic) _Bool preferHdr; // @synthesize preferHdr=_preferHdr;
@property(nonatomic) _Bool isSupportHDR; // @synthesize isSupportHDR=_isSupportHDR;
@property(retain, nonatomic) XImageContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) XImage *lastImage; // @synthesize lastImage=_lastImage;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak CAMetalLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) __weak UIView *lastView; // @synthesize lastView=_lastView;
@property(nonatomic) float rotationInDegree; // @synthesize rotationInDegree=_rotationInDegree;
@property(retain, nonatomic) XImageView *internalPreview; // @synthesize internalPreview=_internalPreview;
@property(nonatomic) _Bool disableOpaqueRender; // @synthesize disableOpaqueRender=_disableOpaqueRender;
@property(nonatomic) _Bool enableSharpenFor1080P; // @synthesize enableSharpenFor1080P=_enableSharpenFor1080P;
@property(nonatomic) int sharpenIntensity; // @synthesize sharpenIntensity=_sharpenIntensity;
@property(nonatomic) unsigned long long sharpenMode; // @synthesize sharpenMode=_sharpenMode;
@property(nonatomic) _Bool enableSharpenForYUV; // @synthesize enableSharpenForYUV=_enableSharpenForYUV;
@property(nonatomic) float contentsScale; // @synthesize contentsScale=_contentsScale;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) _Bool flipY; // @synthesize flipY=_flipY;
@property(nonatomic) _Bool flipX; // @synthesize flipX=_flipX;
- (void)insertToView:(id)arg1 index:(unsigned long long)arg2;
- (void)addToView:(id)arg1;
- (void)renderView:(id)arg1;
- (void)rotateInDegree:(float)arg1;
- (id)currentImage;
- (id)preview;
- (id)overlayView;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (void)setTransform:(float *)arg1;
- (_Bool)displayVrImage:(id)arg1 uImage:(id)arg2 vImage:(id)arg3;
- (_Bool)displayVrImage:(id)arg1 uvImage:(id)arg2 position:(float *)arg3 uv:(float *)arg4 vertexCount:(int)arg5;
- (_Bool)displayImage:(id)arg1;
- (_Bool)displayImage:(id)arg1 uvImage:(id)arg2;
- (_Bool)displayImage:(id)arg1 uImage:(id)arg2 vImage:(id)arg3;
- (void)resize:(struct CGSize)arg1;
- (void)waitUntilFinish;
- (_Bool)createSwapChainIfNeed:(id)arg1;
- (ObjectRef_edd3069f)createSwapChain:(struct CGSize)arg1;
- (_Bool)createVrVertexInput:(int)arg1;
- (void *)vrMaterial;
- (void *)sharpenFilter;
- (void *)imageView;
- (void)dealloc;
- (id)initWithView:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;

@end

