//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QCircle;

@interface QCircleView
{
    unsigned long long _lineType;
    NSArray *_lineDashPattern;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(nonatomic) unsigned long long lineType; // @synthesize lineType=_lineType;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setFillColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)prepareForUse;
@property(readonly, nonatomic) QCircle *circle;
- (void)dealloc;
- (id)initWithCircle:(id)arg1;

@end

