//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QPolyline, QText, UIColor;

@interface QPolylineView
{
    _Bool _disableCollideLabel;
    double _borderWidth;
    UIColor *_borderColor;
    NSArray *_lineDashPattern;
    QText *_text;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableCollideLabel; // @synthesize disableCollideLabel=_disableCollideLabel;
@property(retain, nonatomic) QText *text; // @synthesize text=_text;
@property(copy, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void)onWillRemove;
- (void)onDidAdd;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (void)doAddText;
- (void)doRemoveText;
- (void)setFillColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
@property(readonly, nonatomic) QPolyline *polyline;
- (id)initWithPolyline:(id)arg1;

@end

