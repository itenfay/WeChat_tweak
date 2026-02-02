//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QArcOverlayAnimation, QArcStyle;

@interface QArcOverlay
{
    _Bool _enable3D;
    NSArray *_curves;
    QArcStyle *_style;
    QArcOverlayAnimation *_animation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enable3D; // @synthesize enable3D=_enable3D;
@property(retain, nonatomic) QArcOverlayAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) QArcStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *curves; // @synthesize curves=_curves;
- (void)recordGLoverlayCount:(id)arg1;
- (_Bool)checkDrawStatus;
- (RGBColor_7aedc9dc)rgbColor:(id)arg1;
- (void)destoryImpl;
- (id)makeUpGradientColor;
- (struct Gradient *)createGradient;
- (vector_60e76471)createArcLineCells;
- (void)setArcLineData:(void *)arg1 info:(struct ArcLineData *)arg2;
- (void)updateArcLineData:(void *)arg1;
- (void)setNeedsDisplay;
- (id)getType;
- (void *)createImpl;
- (void)setDisplayLevel:(long long)arg1;
- (void *)loadArcLineInfo:(struct ArcLineData *)arg1;
- (id)init;

@end

