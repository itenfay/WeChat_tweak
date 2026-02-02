//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, UIColor, UIView;

@interface MinimizeRecordFloatingView
{
    UIColor *_gradientBackgroundColor;
    UIView *_redDotView;
    double _titleMaxWidthWithCurrentState;
    UIView *_shadowLayerView;
    UIView *_shadowSubLayerView;
    UIView *_whiteBackgroundView;
    CAShapeLayer *_outterBorderLayer;
    CAShapeLayer *_innerBorderLayer;
    struct CGRect _frameBeforeMove;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *innerBorderLayer; // @synthesize innerBorderLayer=_innerBorderLayer;
@property(retain, nonatomic) CAShapeLayer *outterBorderLayer; // @synthesize outterBorderLayer=_outterBorderLayer;
@property(retain, nonatomic) UIView *whiteBackgroundView; // @synthesize whiteBackgroundView=_whiteBackgroundView;
@property(retain, nonatomic) UIView *shadowSubLayerView; // @synthesize shadowSubLayerView=_shadowSubLayerView;
@property(retain, nonatomic) UIView *shadowLayerView; // @synthesize shadowLayerView=_shadowLayerView;
@property(nonatomic) double titleMaxWidthWithCurrentState; // @synthesize titleMaxWidthWithCurrentState=_titleMaxWidthWithCurrentState;
@property(nonatomic) struct CGRect frameBeforeMove; // @synthesize frameBeforeMove=_frameBeforeMove;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UIColor *gradientBackgroundColor; // @synthesize gradientBackgroundColor=_gradientBackgroundColor;
- (id)getDefaultClipPath:(struct CGRect)arg1;
- (struct CGRect)calcFrame:(struct CGRect)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)updateBorderLayer:(id)arg1 VisibleFrame:(struct CGRect)arg2 BorderColor:(id)arg3 BorderWidth:(double)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)resetBorderLayerWhenTraitCollectionDidChange;
- (void)resetBorderLayer;
- (void)updateShadow:(_Bool)arg1 Duration:(double)arg2;
- (void)updateMask:(_Bool)arg1 View:(id)arg2 Duration:(double)arg3;
- (void)updateMask:(_Bool)arg1 Duration:(double)arg2;
- (void)setRedDotViewHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)startCountdown;
- (void)initUI;

@end

