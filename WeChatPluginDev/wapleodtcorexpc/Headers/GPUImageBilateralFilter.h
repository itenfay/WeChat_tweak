//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GPUImageBilateralFilter
{
    double firstDistanceNormalizationFactorUniform;
    double secondDistanceNormalizationFactorUniform;
    double _distanceNormalizationFactor;
}

@property(nonatomic) double distanceNormalizationFactor; // @synthesize distanceNormalizationFactor=_distanceNormalizationFactor;
- (id)init;

@end

