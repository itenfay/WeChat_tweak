//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIView;

@interface MMLaconButton
{
    _Bool _bUseMaskHighlightedEffect;
    UIView *_leftImage;
    MMUILabel *_label;
    UIView *_rightImage;
    double _buttonLeftPadding;
    double _buttonRightPadding;
    double _leftImageMargin;
    double _rightImageMargin;
    UIView *_maskView;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool bUseMaskHighlightedEffect; // @synthesize bUseMaskHighlightedEffect=_bUseMaskHighlightedEffect;
@property(nonatomic) double rightImageMargin; // @synthesize rightImageMargin=_rightImageMargin;
@property(nonatomic) double leftImageMargin; // @synthesize leftImageMargin=_leftImageMargin;
@property(nonatomic) double buttonRightPadding; // @synthesize buttonRightPadding=_buttonRightPadding;
@property(nonatomic) double buttonLeftPadding; // @synthesize buttonLeftPadding=_buttonLeftPadding;
@property(retain, nonatomic) UIView *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *leftImage; // @synthesize leftImage=_leftImage;
- (void)layoutSubviews;
- (void)doLayouts;
- (void)updateStatus;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

