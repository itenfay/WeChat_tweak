//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, CALayer, CAShapeLayer, NSArray, NSString, UIColor;

@interface VoiceRecordTextureButtonView
{
    _Bool _hideVoiceIcon;
    long long _state;
    CALayer *_voiceIconMaskLayer;
    CALayer *_voiceIconContentLayer;
    double _voiceIconCenterY;
    NSString *_voiceIconName;
    CAShapeLayer *_ovalLayer;
    CAShapeLayer *_ovalWaveLayer;
    CAShapeLayer *_maskLayer;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_strokeLayer;
    UIColor *_fillColor;
    UIColor *_unselectedFillColor;
    UIColor *_strokeColor;
    NSArray *_gradientColors;
    struct CGRect _originOvalFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *unselectedFillColor; // @synthesize unselectedFillColor=_unselectedFillColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CAShapeLayer *ovalWaveLayer; // @synthesize ovalWaveLayer=_ovalWaveLayer;
@property(retain, nonatomic) CAShapeLayer *ovalLayer; // @synthesize ovalLayer=_ovalLayer;
@property(retain, nonatomic) NSString *voiceIconName; // @synthesize voiceIconName=_voiceIconName;
@property(nonatomic) double voiceIconCenterY; // @synthesize voiceIconCenterY=_voiceIconCenterY;
@property(retain, nonatomic) CALayer *voiceIconContentLayer; // @synthesize voiceIconContentLayer=_voiceIconContentLayer;
@property(retain, nonatomic) CALayer *voiceIconMaskLayer; // @synthesize voiceIconMaskLayer=_voiceIconMaskLayer;
@property(nonatomic) _Bool hideVoiceIcon; // @synthesize hideVoiceIcon=_hideVoiceIcon;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) struct CGRect originOvalFrame; // @synthesize originOvalFrame=_originOvalFrame;
- (void)doWaveAnimationWithVolume:(unsigned long long)arg1;
- (_Bool)isPointInOval:(struct CGPoint)arg1;
- (double)getOvalYFromX:(double)arg1;
- (void)doFadeAnimation;
- (void)doDeselectAnimation:(_Bool)arg1;
- (void)doExpandAnimation;
- (void)layoutAllSublayers;
- (void)createAndAddAllSublayers;
- (void)removeAllSublayers;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 voiceIconName:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

