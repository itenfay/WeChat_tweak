//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OVCColorAdjustmentDesc : NSObject
{
    double _brightnessBias;
    double _contrastBias;
    double _saturationBias;
    double _tintBias;
    double _hueBias;
    double _temperatureBias;
    double _exposureBias;
    double _vibranceBias;
    double _sharpness;
    double _vignette;
}

@property(nonatomic) double vignette; // @synthesize vignette=_vignette;
@property(nonatomic) double sharpness; // @synthesize sharpness=_sharpness;
@property(nonatomic) double vibranceBias; // @synthesize vibranceBias=_vibranceBias;
@property(nonatomic) double exposureBias; // @synthesize exposureBias=_exposureBias;
@property(nonatomic) double temperatureBias; // @synthesize temperatureBias=_temperatureBias;
@property(nonatomic) double hueBias; // @synthesize hueBias=_hueBias;
@property(nonatomic) double tintBias; // @synthesize tintBias=_tintBias;
@property(nonatomic) double saturationBias; // @synthesize saturationBias=_saturationBias;
@property(nonatomic) double contrastBias; // @synthesize contrastBias=_contrastBias;
@property(nonatomic) double brightnessBias; // @synthesize brightnessBias=_brightnessBias;
- (id)init;

@end

