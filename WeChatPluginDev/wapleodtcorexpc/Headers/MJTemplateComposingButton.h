//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, CATextLayer, UIFont, UIImageView;

@interface MJTemplateComposingButton
{
    UIImageView *_iconView;
    CATextLayer *_textLayer;
    CAGradientLayer *_gradientLayer;
    UIFont *_customFont;
    struct CGSize _textContentWidth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *customFont; // @synthesize customFont=_customFont;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) struct CGSize textContentWidth; // @synthesize textContentWidth=_textContentWidth;
- (void)clearPreviousEffect;
- (void)setupUIForDisabled;
- (void)setupUIForEnabled;
- (void)updateUIForDisabled;
- (void)updateUIForEnabled;
- (void)layoutSubviews;
- (id)init;

@end

