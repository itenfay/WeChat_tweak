//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, QGPColor;
@protocol QTCOptional;

@interface QGPSetAmbientLightParam
{
    QGPColor<QTCOptional> *_color;
    NSNumber<QTCOptional> *_intensity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber<QTCOptional> *intensity; // @synthesize intensity=_intensity;
@property(retain, nonatomic) QGPColor<QTCOptional> *color; // @synthesize color=_color;

@end

