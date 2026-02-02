//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdTouchParticleInfo : NSObject
{
    int _basicRemWidth;
    int _basicRootFontSize;
    NSString *_imgUrl;
    double _imgWidth;
    double _imgHeight;
    long long _birthRateType;
    double _scale;
    double _scaleRange;
    double _scaleSpeed;
    double _alphaRange;
    double _lifetime;
    double _velocity;
    double _velocityRange;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) double velocityRange; // @synthesize velocityRange=_velocityRange;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double lifetime; // @synthesize lifetime=_lifetime;
@property(nonatomic) double alphaRange; // @synthesize alphaRange=_alphaRange;
@property(nonatomic) double scaleSpeed; // @synthesize scaleSpeed=_scaleSpeed;
@property(nonatomic) double scaleRange; // @synthesize scaleRange=_scaleRange;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) long long birthRateType; // @synthesize birthRateType=_birthRateType;
@property(nonatomic) double imgHeight; // @synthesize imgHeight=_imgHeight;
@property(nonatomic) double imgWidth; // @synthesize imgWidth=_imgWidth;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) int basicRootFontSize; // @synthesize basicRootFontSize=_basicRootFontSize;
@property(nonatomic) int basicRemWidth; // @synthesize basicRemWidth=_basicRemWidth;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

