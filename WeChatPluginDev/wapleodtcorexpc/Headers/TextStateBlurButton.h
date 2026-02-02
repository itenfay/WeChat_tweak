//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBadgeView, UIColor, UIView;

@interface TextStateBlurButton
{
    _Bool _useRoundCorner;
    UIView *_highlightMaskView;
    UIColor *_blurColor;
    UIView *_backgroundBlurView;
    MMBadgeView *_badgeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIColor *blurColor; // @synthesize blurColor=_blurColor;
@property(nonatomic) _Bool useRoundCorner; // @synthesize useRoundCorner=_useRoundCorner;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
- (void)layoutBadgeView;
- (void)removeSmallRedDotWithoutNumber;
- (void)showSmallRedDotWithoutNumber;
- (void)setHighlighted:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)removeBtnBlurEffect;
- (void)setBtnBlurEffect:(unsigned int)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

