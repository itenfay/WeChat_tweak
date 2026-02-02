//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GPUImageGaussianBlurFilter
{
    _Bool shouldResizeBlurRadiusWithImageSize;
    double _blurRadiusInPixels;
    double _texelSpacingMultiplier;
    double _blurRadiusAsFractionOfImageWidth;
    double _blurRadiusAsFractionOfImageHeight;
    unsigned long long _blurPasses;
}

+ (id)fragmentShaderForOptimizedBlurOfRadius:(unsigned long long)arg1 sigma:(double)arg2;
+ (id)vertexShaderForOptimizedBlurOfRadius:(unsigned long long)arg1 sigma:(double)arg2;
+ (id)fragmentShaderForStandardBlurOfRadius:(unsigned long long)arg1 sigma:(double)arg2;
+ (id)vertexShaderForStandardBlurOfRadius:(unsigned long long)arg1 sigma:(double)arg2;
@property(nonatomic) unsigned long long blurPasses; // @synthesize blurPasses=_blurPasses;
@property(nonatomic) double blurRadiusAsFractionOfImageHeight; // @synthesize blurRadiusAsFractionOfImageHeight=_blurRadiusAsFractionOfImageHeight;
@property(nonatomic) double blurRadiusAsFractionOfImageWidth; // @synthesize blurRadiusAsFractionOfImageWidth=_blurRadiusAsFractionOfImageWidth;
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels=_blurRadiusInPixels;
@property(nonatomic) double texelSpacingMultiplier; // @synthesize texelSpacingMultiplier=_texelSpacingMultiplier;
- (void)switchToVertexShader:(id)arg1 fragmentShader:(id)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)init;
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;

@end

