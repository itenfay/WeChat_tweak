//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMGPUStrongBilateralFilter
{
    double distanceNormalizationFactorUniform;
    double texelWidthOffsetUniform;
    double texelHeightOffsetUniform;
    int sbfControlUniform;
    double _distanceNormalizationFactor;
    double _texelSpacingMultiplier;
}

@property(nonatomic) double texelSpacingMultiplier; // @synthesize texelSpacingMultiplier=_texelSpacingMultiplier;
@property(nonatomic) double distanceNormalizationFactor; // @synthesize distanceNormalizationFactor=_distanceNormalizationFactor;
- (void)setSBFControl:(int)arg1;
- (void)setFactor:(double)arg1 widthOffset:(float)arg2 heightOffset:(float)arg3;
- (id)init;

@end

