//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GPUImageTwoPassTextureSamplingFilter
{
    int verticalPassTexelWidthOffsetUniform;
    int verticalPassTexelHeightOffsetUniform;
    int horizontalPassTexelWidthOffsetUniform;
    int horizontalPassTexelHeightOffsetUniform;
    float verticalPassTexelWidthOffset;
    float verticalPassTexelHeightOffset;
    float horizontalPassTexelWidthOffset;
    float horizontalPassTexelHeightOffset;
    double _verticalTexelSpacing;
    double _horizontalTexelSpacing;
}

@property(nonatomic) double horizontalTexelSpacing; // @synthesize horizontalTexelSpacing=_horizontalTexelSpacing;
@property(nonatomic) double verticalTexelSpacing; // @synthesize verticalTexelSpacing=_verticalTexelSpacing;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;

@end

