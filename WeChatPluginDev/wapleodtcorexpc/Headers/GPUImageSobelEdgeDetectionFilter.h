//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GPUImageSobelEdgeDetectionFilter
{
    int texelWidthUniform;
    int texelHeightUniform;
    int edgeStrengthUniform;
    _Bool hasOverriddenImageSizeFactor;
    double _texelWidth;
    double _texelHeight;
    double _edgeStrength;
}

@property(nonatomic) double edgeStrength; // @synthesize edgeStrength=_edgeStrength;
@property(nonatomic) double texelHeight; // @synthesize texelHeight=_texelHeight;
@property(nonatomic) double texelWidth; // @synthesize texelWidth=_texelWidth;
- (_Bool)providesMonochromeOutput;
- (_Bool)wantsMonochromeInput;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end

