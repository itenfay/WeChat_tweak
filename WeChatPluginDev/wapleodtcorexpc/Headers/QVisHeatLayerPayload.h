//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QAnimation, QHeatGradient;

@interface QVisHeatLayerPayload
{
    NSArray *_nodes;
    double _minIntensity;
    double _maxIntensity;
    long long _decayRadius;
    QHeatGradient *_gradient;
    double _maxHeight;
    QAnimation *_animation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) QHeatGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) long long decayRadius; // @synthesize decayRadius=_decayRadius;
@property(nonatomic) double maxIntensity; // @synthesize maxIntensity=_maxIntensity;
@property(nonatomic) double minIntensity; // @synthesize minIntensity=_minIntensity;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;

@end

