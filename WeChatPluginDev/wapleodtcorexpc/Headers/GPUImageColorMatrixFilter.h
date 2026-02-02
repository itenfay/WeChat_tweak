//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GPUImageColorMatrixFilter
{
    int colorMatrixUniform;
    int intensityUniform;
    double _intensity;
    struct GPUMatrix4x4 _colorMatrix;
}

@property(nonatomic) struct GPUMatrix4x4 colorMatrix; // @synthesize colorMatrix=_colorMatrix;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (id)init;

@end

