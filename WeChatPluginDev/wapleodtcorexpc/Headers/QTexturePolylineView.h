//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QAnimation, QPolyline, QProgressAnimation, UIColor, UIImage;

@interface QTexturePolylineView
{
    _Bool _useGradient;
    _Bool _drawSymbol;
    _Bool _internal;
    long long _drawType;
    NSArray *_segmentColor;
    UIImage *_styleTextureImage;
    NSArray *_segmentStyle;
    UIImage *_symbolImage;
    double _symbolGap;
    UIColor *_eraseColor;
    double _footprintStep;
    QProgressAnimation *_appearAnimation;
    QPolyline *_animationLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QPolyline *animationLine; // @synthesize animationLine=_animationLine;
@property(retain, nonatomic) QProgressAnimation *appearAnimation; // @synthesize appearAnimation=_appearAnimation;
@property(nonatomic) _Bool internal; // @synthesize internal=_internal;
@property(nonatomic) double footprintStep; // @synthesize footprintStep=_footprintStep;
@property(retain, nonatomic) UIColor *eraseColor; // @synthesize eraseColor=_eraseColor;
@property(nonatomic) double symbolGap; // @synthesize symbolGap=_symbolGap;
@property(retain, nonatomic) UIImage *symbolImage; // @synthesize symbolImage=_symbolImage;
@property(nonatomic, getter=isDrawSymbol) _Bool drawSymbol; // @synthesize drawSymbol=_drawSymbol;
@property(copy, nonatomic) NSArray *segmentStyle; // @synthesize segmentStyle=_segmentStyle;
@property(retain, nonatomic) UIImage *styleTextureImage; // @synthesize styleTextureImage=_styleTextureImage;
@property(copy, nonatomic) NSArray *segmentColor; // @synthesize segmentColor=_segmentColor;
@property(nonatomic) _Bool useGradient; // @synthesize useGradient=_useGradient;
@property(nonatomic) long long drawType; // @synthesize drawType=_drawType;
- (void)update:(double)arg1;
- (void)removeAnimationLine;
- (_Bool)shouldUpdateAnimation;
- (void)setLineDashPattern:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)eraseFromStartToCurrentPoint:(struct CLLocationCoordinate2D)arg1 searchFrom:(int)arg2 toColor:(_Bool)arg3;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (id)initWithPolyline:(id)arg1;
- (void)clearTurnArrow;
- (void)setTurnArrowColor:(id)arg1 borderColor:(id)arg2;
- (void)setTurnArrowAtSegmentIndex:(int)arg1;
@property(nonatomic) QAnimation *emergeAnimation;
- (void)onWillRemove;
- (void)onDidAdd;

@end

