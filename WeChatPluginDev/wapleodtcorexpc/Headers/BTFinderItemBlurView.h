//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, UIColor, UIView;

@interface BTFinderItemBlurView
{
    CAGradientLayer *_colorGradientLayer;
    CAGradientLayer *_blurGradientLayer;
    UIView *_blurMaskView;
    UIColor *_mainColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *mainColor; // @synthesize mainColor=_mainColor;
@property(retain, nonatomic) UIView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
@property(retain, nonatomic) CAGradientLayer *blurGradientLayer; // @synthesize blurGradientLayer=_blurGradientLayer;
@property(retain, nonatomic) CAGradientLayer *colorGradientLayer; // @synthesize colorGradientLayer=_colorGradientLayer;
- (void)refreshBlurGradientLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

