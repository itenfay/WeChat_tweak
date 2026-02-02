//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SpatiotemporalDenosingPreProcess, XImage, XMMGPUClarityPreProcess;

@interface XVoipEffectManager
{
    struct CGSize _renderTargetSizeWithoutRotation;
    struct CGSize _renderTargetSize;
    struct CGSize _yuvTextureSize;
    struct CGSize _yuvTexturePoolSize;
    struct CGSize _renderingInputSize;
    XImage *_renderingInputTexture;
    XImage *_algorithmInputTexture;
    XImage *_renderingOutputTexture;
    XImage *_renderOutputTextureY;
    XImage *_renderOutputTextureUV;
    struct __CVPixelBufferPool *_renderOuputYUVPool;
    struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> _yuvToRGBFilter;
    struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> _rgbImageCropFilter;
    struct unique_ptr<rfx::XRgba2YFilter, std::default_delete<rfx::XRgba2YFilter>> _rgb2Y;
    struct unique_ptr<rfx::XRgba2UVFilter, std::default_delete<rfx::XRgba2UVFilter>> _rgb2UV;
    struct unique_ptr<rfx::XMMGPUSpatiotemporalDenosing, std::default_delete<rfx::XMMGPUSpatiotemporalDenosing>> _denosingFilter;
    struct unique_ptr<rfx::ClarityFilter, std::default_delete<rfx::ClarityFilter>> _clarityFilter;
    SpatiotemporalDenosingPreProcess *denosingPreProcess;
    struct vector<unsigned char, std::allocator<unsigned char>> sdkSrcRGBData;
    ObjectRef_32b092d4 _exportedRenderingOutput;
    struct unique_ptr<rfx::XDenoising, std::default_delete<rfx::XDenoising>> _liveDenoising;
    struct unique_ptr<rfx::RfxRenderGraph, std::default_delete<rfx::RfxRenderGraph>> _algorithmGraph;
    struct shared_ptr<wevision::HardwareBufferTexture> _lastCameraOutputY;
    struct shared_ptr<wevision::HardwareBufferTexture> _lastCameraOutputUV;
    XMMGPUClarityPreProcess *_clarityPreProcess;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) XMMGPUClarityPreProcess *clarityPreProcess; // @synthesize clarityPreProcess=_clarityPreProcess;
- (void)clean;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 toRGBAImage:(id *)arg2 yuvPixelBuffer:(struct __CVBuffer **)arg3 cropSizeWithoutRotation:(struct CGSize)arg4 flipX:(_Bool)arg5 shouldIgnoreBackground:(_Bool)arg6;
- (_Bool)encodeDenosing:(struct __CVBuffer *)arg1 cameraOutputY:(void *)arg2 cameraOutputUV:(void *)arg3 renderTarget:(void *)arg4 toGraph:(void *)arg5;
- (void *)registerPixelBuffer:(struct __CVBuffer *)arg1 forPlane:(unsigned int)arg2 toGraph:(void *)arg3 name:(id)arg4;
- (void)encodeRGB:(void *)arg1 toY:(void *)arg2 toUV:(void *)arg3 graph:(void *)arg4;
- (void)encodeRciEffect:(struct RGTexture **)arg1 toTexture:(struct RGTexture **)arg2 graph:(void *)arg3;
- (void)encodeOriginalDenosingYTexture:(struct RGTexture **)arg1 uvTexture:(struct RGTexture **)arg2 toTexture:(struct RGTexture **)arg3 graph:(void *)arg4 motionLevel:(int)arg5 noiseLevel:(int)arg6 pixelMapping:(const void *)arg7;
- (void)executeAlgorithm:(struct __CVBuffer *)arg1;
- (void)encodeTrackFace:(struct RGTexture **)arg1 graph:(void *)arg2;
- (void)encodeScale:(struct RGTexture **)arg1 uv:(struct RGTexture **)arg2 toTexture:(struct RGTexture **)arg3 graph:(void *)arg4 flipX:(_Bool)arg5;
- (void)encodeConvertY:(void *)arg1 uv:(void *)arg2 toRGB:(void *)arg3 graph:(void *)arg4;
- (void)encodeClarifyConvertY:(void *)arg1 uv:(void *)arg2 toRGB:(void *)arg3 graph:(void *)arg4 pixelMapping:(const void *)arg5;
- (void)enableSTDenoiseFilter:(_Bool)arg1 useSpatioFilter:(_Bool)arg2 useMultiTemporalFilter:(_Bool)arg3;
- (void)enableClarityFilter:(_Bool)arg1 withMode:(int)arg2;
- (_Bool)callFaceTrack:(shared_ptr_4854a30e)arg1;
- (_Bool)updateTexturesWithClipSize:(struct CGSize)arg1;
- (struct CGSize)getAlgorithmInputSize;
- (_Bool)updateExtraOutputTextureSize;
- (void)setRGBATextureSize:(struct CGSize)arg1 yuvSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithSceneType:(long long)arg1 modelKeyArray:(id)arg2 runDeviceType:(unsigned long long)arg3 isAllowFp16:(_Bool)arg4;

@end

