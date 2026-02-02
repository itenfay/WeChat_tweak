//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QPolygon, UIImage;

@interface QPolygonView
{
    _Bool _userInteractionEnabled;
    _Bool _disableCollideLabel;
    unsigned long long _lineType;
    NSArray *_lineDashPattern;
    double _textureGap;
    UIImage *_styleTextureImage;
    NSArray *_holeStrokeIds;
    QPolygon *_originPolygon;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableCollideLabel; // @synthesize disableCollideLabel=_disableCollideLabel;
@property(retain, nonatomic) QPolygon *originPolygon; // @synthesize originPolygon=_originPolygon;
@property(copy, nonatomic) NSArray *holeStrokeIds; // @synthesize holeStrokeIds=_holeStrokeIds;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(retain, nonatomic) UIImage *styleTextureImage; // @synthesize styleTextureImage=_styleTextureImage;
@property(nonatomic) double textureGap; // @synthesize textureGap=_textureGap;
@property(copy, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(nonatomic) unsigned long long lineType; // @synthesize lineType=_lineType;
- (void)removeObserverForPolygon:(id)arg1;
- (void)addObserverForPolygon:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onWillRemove;
- (void)onDidAdd;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (void)setFillColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
@property(readonly, nonatomic) QPolygon *polygon;
- (void)dealloc;
- (id)initWithPolygon:(id)arg1;
- (void)resotrePolygon;
- (void)changePolygon:(id)arg1;
- (void)savePolygon;

@end

