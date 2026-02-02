//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJColorAdjustmentDesc : NSObject
{
    float _brightnessBias;
    float _contrastBias;
    float _saturationBias;
    float _tintBias;
    float _hueBias;
    float _temperatureBias;
    float _exposureBias;
    float _vibranceBias;
    float _sharpness;
    float _vignette;
}

@property(nonatomic) float vignette; // @synthesize vignette=_vignette;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
@property(nonatomic) float vibranceBias; // @synthesize vibranceBias=_vibranceBias;
@property(nonatomic) float exposureBias; // @synthesize exposureBias=_exposureBias;
@property(nonatomic) float temperatureBias; // @synthesize temperatureBias=_temperatureBias;
@property(nonatomic) float hueBias; // @synthesize hueBias=_hueBias;
@property(nonatomic) float tintBias; // @synthesize tintBias=_tintBias;
@property(nonatomic) float saturationBias; // @synthesize saturationBias=_saturationBias;
@property(nonatomic) float contrastBias; // @synthesize contrastBias=_contrastBias;
@property(nonatomic) float brightnessBias; // @synthesize brightnessBias=_brightnessBias;
- (id)initWithColorAdjustmentDesc:(id)arg1;
- (id)init;

@end

