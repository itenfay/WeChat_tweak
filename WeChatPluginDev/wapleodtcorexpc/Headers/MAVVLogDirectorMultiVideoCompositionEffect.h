//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MAVCopyRendererMetal;

@interface MAVVLogDirectorMultiVideoCompositionEffect
{
    _Bool _outputSizeChanged;
    float _outputWidth;
    float _outputHeight;
    MAVCopyRendererMetal *_copyRender;
    struct __CVBuffer *_destTexRef;
    struct CGRect _outputCrop;
}

- (void).cxx_destruct;
@property(nonatomic) struct __CVBuffer *destTexRef; // @synthesize destTexRef=_destTexRef;
@property(retain, nonatomic) MAVCopyRendererMetal *copyRender; // @synthesize copyRender=_copyRender;
@property(nonatomic) _Bool outputSizeChanged; // @synthesize outputSizeChanged=_outputSizeChanged;
@property(nonatomic) float outputHeight; // @synthesize outputHeight=_outputHeight;
@property(nonatomic) float outputWidth; // @synthesize outputWidth=_outputWidth;
@property(nonatomic) struct CGRect outputCrop; // @synthesize outputCrop=_outputCrop;
- (struct CGRect)calcCenterCropCropRect:(struct CGRect)arg1 track:(id)arg2;
- (void)addTrackInputTexture:(id)arg1;
- (void)renderTracks:(long long)arg1 trackList:(id)arg2 renderInfo:(id)arg3 toPixelBuffer:(struct __CVBuffer *)arg4;
- (int)checkCreateDestTextureFromPixelBuffer:(struct __CVBuffer *)arg1;
- (void)setAssetSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)init;

@end

