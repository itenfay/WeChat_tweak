//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAdaptiveBubbleParams, MMAdaptiveBubbleShapeView, UIView;

@interface MMAdaptiveBubbleView
{
    UIView *_mainPartContentView;
    MMAdaptiveBubbleParams *_parames;
    UIView *_highlightCoverView;
    MMAdaptiveBubbleShapeView *_shapeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAdaptiveBubbleShapeView *shapeView; // @synthesize shapeView=_shapeView;
@property(retain, nonatomic) UIView *highlightCoverView; // @synthesize highlightCoverView=_highlightCoverView;
@property(retain, nonatomic) MMAdaptiveBubbleParams *parames; // @synthesize parames=_parames;
@property(retain, nonatomic) UIView *mainPartContentView; // @synthesize mainPartContentView=_mainPartContentView;
- (void)layoutMainPartContentView;
- (void)relayoutAllSubviews;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic) struct UIEdgeInsets mainPartContentViewEdgeInsets; // @dynamic mainPartContentViewEdgeInsets;
@property(nonatomic) double arrowImageViewRight; // @dynamic arrowImageViewRight;
- (void)setupShapeView;
- (void)setupHighlightView;
- (void)setupBlurEffectView;
- (id)initWithParams:(id)arg1;

@end

