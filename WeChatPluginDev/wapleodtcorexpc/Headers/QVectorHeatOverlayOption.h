//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, QAnimation;

@interface QVectorHeatOverlayOption : NSObject
{
    _Bool _enable3D;
    int _type;
    double _size;
    double _gap;
    double _opacity;
    double _minZoom;
    double _maxZoom;
    double _minHeight;
    double _maxHeight;
    QAnimation *_animation;
    NSArray *_colors;
    NSArray *_startPoints;
    double _minIntensity;
    double _maxIntensity;
}

- (void).cxx_destruct;
@property(nonatomic) double maxIntensity; // @synthesize maxIntensity=_maxIntensity;
@property(nonatomic) double minIntensity; // @synthesize minIntensity=_minIntensity;
@property(retain, nonatomic) NSArray *startPoints; // @synthesize startPoints=_startPoints;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) QAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) _Bool enable3D; // @synthesize enable3D=_enable3D;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxZoom; // @synthesize maxZoom=_maxZoom;
@property(nonatomic) double minZoom; // @synthesize minZoom=_minZoom;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double gap; // @synthesize gap=_gap;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)setMinIntensity:(double)arg1 maxIntensity:(double)arg2;
- (void)setColors:(id)arg1 startPoints:(id)arg2;
- (id)init;

@end

