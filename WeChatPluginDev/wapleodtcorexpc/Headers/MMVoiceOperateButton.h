//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor;

@interface MMVoiceOperateButton
{
    _Bool _isAnimating;
    UIColor *_normalColor;
    UIColor *_highlightedColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
- (void)layoutButtonWithImageTitleSpace:(double)arg1;
- (void)animateWithScale:(struct CGAffineTransform)arg1;
- (void)animateToHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;

@end

