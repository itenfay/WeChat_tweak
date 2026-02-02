//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GPUImageSaturationFilter : NSObject
{
    int saturationUniform;
    double _saturation;
}

@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
- (id)init;

@end

