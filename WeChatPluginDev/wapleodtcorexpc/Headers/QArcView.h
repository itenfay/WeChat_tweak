//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QArc, QTexturePolylineView, UIColor;

@interface QArcView
{
    _Bool _drawSymbol;
    _Bool _disableCollideLabel;
    double _borderWidth;
    UIColor *_borderColor;
    NSArray *_lineDashPattern;
    double _symbolGap;
    QTexturePolylineView *_internalPolyline;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QTexturePolylineView *internalPolyline; // @synthesize internalPolyline=_internalPolyline;
@property(nonatomic) _Bool disableCollideLabel; // @synthesize disableCollideLabel=_disableCollideLabel;
@property(nonatomic) double symbolGap; // @synthesize symbolGap=_symbolGap;
@property(nonatomic, getter=isDrawSymbol) _Bool drawSymbol; // @synthesize drawSymbol=_drawSymbol;
@property(copy, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void)onWillRemove;
- (void)onDidAdd;
- (void)setFillColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
@property(readonly, nonatomic) QArc *arc;
- (id)initWithArc:(id)arg1;

@end

