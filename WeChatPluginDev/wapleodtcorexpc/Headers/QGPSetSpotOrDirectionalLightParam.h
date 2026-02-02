//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, QGPColor, QGPVector3;
@protocol QTCOptional;

@interface QGPSetSpotOrDirectionalLightParam
{
    long long _type;
    QGPColor<QTCOptional> *_color;
    QGPVector3<QTCOptional> *_direction;
    NSNumber<QTCOptional> *_intensity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber<QTCOptional> *intensity; // @synthesize intensity=_intensity;
@property(retain, nonatomic) QGPVector3<QTCOptional> *direction; // @synthesize direction=_direction;
@property(retain, nonatomic) QGPColor<QTCOptional> *color; // @synthesize color=_color;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

