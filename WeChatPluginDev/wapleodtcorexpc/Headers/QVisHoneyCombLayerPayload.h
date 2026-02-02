//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QAnimation, QVectorHeatOverlayOption;

@interface QVisHoneyCombLayerPayload
{
    int _type;
    NSArray *_nodes;
    double _minIntensity;
    double _maxIntensity;
    QAnimation *_animation;
    QVectorHeatOverlayOption *_option;
    NSArray *_colors;
    NSArray *_startPoints;
    double _minHeight;
    double _maxHeight;
    double _size;
    double _gap;
}

- (void).cxx_destruct;
@property(nonatomic) double gap; // @synthesize gap=_gap;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *startPoints; // @synthesize startPoints=_startPoints;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) QVectorHeatOverlayOption *option; // @synthesize option=_option;
@property(retain, nonatomic) QAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) double maxIntensity; // @synthesize maxIntensity=_maxIntensity;
@property(nonatomic) double minIntensity; // @synthesize minIntensity=_minIntensity;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;

@end

