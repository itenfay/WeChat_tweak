//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SpatiotemporalDenosingPreProcess, XImage, XLiveRenderTargetPool, XMMGPUClarityPreProcess;

@interface XLiveEffectMgr
{
    struct CGSize _renderTargetSizeWithoutRotation;
    struct CGSize _renderTargetSize;
    struct CGSize _yuvTextureSize;
    struct CGSize _yuvTexturePoolSize;
    struct CGSize _renderingInputSize;
    XImage *_renderingInputTexture;
    XImage *_algorithmInputTexture;
    XImage *_renderOutputTextureY;
    XImage *_renderOutputTextureUV;
    struct __CVPixelBufferPool *_renderOuputYUVPool;
    struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> _yuvToRGBFilter;
    struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> _bgra8ImageCropFilter;
    struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> _rgbImageCropFilter;
    struct unique_ptr<rfx::XRgba2YFilter, std::default_delete<rfx::XRgba2YFilter>> _rgb2Y;
    struct unique_ptr<rfx::XRgba2UVFilter, std::default_delete<rfx::XRgba2UVFilter>> _rgb2UV;
    struct unique_ptr<rfx::XMMGPUSpatiotemporalDenosing, std::default_delete<rfx::XMMGPUSpatiotemporalDenosing>> _denosingFilter;
    struct unique_ptr<rfx::ClarityFilter, std::default_delete<rfx::ClarityFilter>> _clarityFilter;
    SpatiotemporalDenosingPreProcess *denosingPreProcess;
    struct vector<unsigned char, std::allocator<unsigned char>> sdkSrcRGBData;
    struct unique_ptr<rfx::XDenoising, std::default_delete<rfx::XDenoising>> _liveDenoising;
    struct unique_ptr<rfx::XLiveCompose, std::default_delete<rfx::XLiveCompose>> _liveComposing;
    float _rotationInDegree;
    struct unique_ptr<rfx::RfxRenderGraph, std::default_delete<rfx::RfxRenderGraph>> _algorithmGraph;
    XLiveRenderTargetPool *_pool;
    _Bool _allowCompressedForRenderingYUV;
    XMMGPUClarityPreProcess *_clarityPreProcess;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) XMMGPUClarityPreProcess *clarityPreProcess; // @synthesize clarityPreProcess=_clarityPreProcess;
@property(nonatomic) _Bool allowCompressedForRenderingYUV; // @synthesize allowCompressedForRenderingYUV=_allowCompressedForRenderingYUV;
- (int)getMaxTextureImageUnit;
- (id)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 yuvPixelBuffer:(struct __CVBuffer **)arg2 flipX:(_Bool)arg3;
- (void)executeAlgorithm:(struct __CVBuffer *)arg1;
- (id)processPixelBuffer:(struct __CVBuffer *)arg1 flipX:(_Bool)arg2;
- (void)executeAlgorithmWithComposingElements:(id)arg1;
- (id)processRenderFrames:(id)arg1;
- (void)setRotation:(int)arg1;
- (void *)registerPixelBuffer:(struct __CVBuffer *)arg1 forPlane:(unsigned int)arg2 toGraph:(void *)arg3 name:(id)arg4;
- (void)encodeRGB:(void *)arg1 toY:(void *)arg2 toUV:(void *)arg3 graph:(void *)arg4;
- (void)encodeRciEffect:(struct RGTexture **)arg1 toTexture:(struct RGTexture **)arg2 graph:(void *)arg3;
- (void)encodeDenosingYTexture:(struct RGTexture **)arg1 uvTexture:(struct RGTexture **)arg2 toTexture:(struct RGTexture **)arg3 graph:(void *)arg4 motionLevel:(int)arg5 noiseLevel:(int)arg6 pixelMapping:(const void *)arg7;
- (void *)encodeTrackFace:(struct RGTexture **)arg1 graph:(void *)arg2;
- (_Bool)callFaceTrack:(shared_ptr_4854a30e)arg1;
- (void)composeElements:(id)arg1 toTexture:(struct RGTexture **)arg2 graph:(void *)arg3 targetSize:(struct CGSize)arg4;
- (void)encodeScale:(struct RGTexture **)arg1 uv:(struct RGTexture **)arg2 toTexture:(struct RGTexture **)arg3 graph:(void *)arg4 flipX:(_Bool)arg5;
- (void)encodeConvertYPanel:(id)arg1 uvPanel:(id)arg2 toRGB:(void *)arg3 graph:(void *)arg4 flipX:(_Bool)arg5;
- (void)encodeConvertYPanel:(id)arg1 uPanel:(id)arg2 vPanel:(id)arg3 toRGB:(void *)arg4 graph:(void *)arg5 flipX:(_Bool)arg6;
- (void)encodeConvertY:(void *)arg1 uv:(void *)arg2 toRGB:(void *)arg3 graph:(void *)arg4 flipX:(_Bool)arg5 range:(int)arg6 standard:(int)arg7;
- (void)encodeClarifyConvertY:(void *)arg1 uv:(void *)arg2 toRGB:(void *)arg3 graph:(void *)arg4 pixelMapping:(const void *)arg5 flipX:(_Bool)arg6;
- (struct CGSize)getAlgorithmInputSize;
- (_Bool)updateTexturesWithClipSize:(struct CGSize)arg1;
- (void)clean;
- (_Bool)updateExtraOutputTextureSize;
- (unsigned int)getSuitablePixelFormatType;
- (void)setOutputRGBAtTextureSize:(struct CGSize)arg1 yuvSize:(struct CGSize)arg2;
- (void)dealloc;
- (void)enableClarityFilter:(_Bool)arg1 withMode:(int)arg2;
- (void)enableSTDenoiseFilter:(_Bool)arg1 useSpatioFilter:(_Bool)arg2;
- (id)initWithGlContext:(id)arg1 globalContext:(void *)arg2 sceneType:(long long)arg3 modelKeyArray:(id)arg4 SDKMode:(int)arg5 isAllowFp16:(_Bool)arg6 energyController:(id)arg7 beautyAssetsDirectory:(id)arg8;

@end

