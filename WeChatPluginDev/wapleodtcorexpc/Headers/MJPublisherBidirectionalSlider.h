//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, UIColor;

@interface MJPublisherBidirectionalSlider
{
    UIColor *_highlightedTrackTintColor;
    CALayer *_highlightedTrackLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *highlightedTrackLayer; // @synthesize highlightedTrackLayer=_highlightedTrackLayer;
@property(retain, nonatomic) UIColor *highlightedTrackTintColor; // @synthesize highlightedTrackTintColor=_highlightedTrackTintColor;
- (double)ratioForValue:(double)arg1;
- (void)layoutHighlightedLayerAnimated:(_Bool)arg1;
- (void)setMaximumTrackTintColor:(id)arg1;
- (struct CGRect)highlightedTrackRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2;
- (void)tintColorDidChange;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)commonInit;

@end

