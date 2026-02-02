//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QTrailLineStyle;

@interface QTrailOverlay
{
    int _linesCount;
    NSArray *_lines;
    QTrailLineStyle *_style;
}

- (void).cxx_destruct;
@property(nonatomic) int linesCount; // @synthesize linesCount=_linesCount;
@property(retain, nonatomic) QTrailLineStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *lines; // @synthesize lines=_lines;
- (void)recordGLoverlayCount:(id)arg1;
- (int)getTrailType;
- (RGBColor_7aedc9dc)rgbColor:(id)arg1;
- (struct vec2)convertCoordToMapCoord:(struct CLLocationCoordinate2D)arg1;
- (struct Gradient *)createGradient;
- (_Bool)validateTrailData:(id)arg1;
- (struct TrailCell *)constructTrailCellWithTimestamp:(id)arg1;
- (struct TrailCell **)buildDataByCustomTime:(id)arg1;
- (struct TrailCell **)getNodeData;
- (void)updateTrailData:(struct TrailData *)arg1;
- (void)destoryInfoData:(struct TrailData *)arg1;
- (void)destoryImpl;
- (void *)createImpl;
- (void)setNeedsDisplay;
- (id)initWithTrailData:(id)arg1;

@end

