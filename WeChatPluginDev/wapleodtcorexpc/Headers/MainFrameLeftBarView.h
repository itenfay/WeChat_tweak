//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor, UIImageView, UIView;

@interface MainFrameLeftBarView
{
    _Bool _resumeAnimateAtMoveToWindow;
    UIColor *_iconTintedColor;
    UIView *_contentView;
    UIImageView *_iconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool resumeAnimateAtMoveToWindow; // @synthesize resumeAnimateAtMoveToWindow=_resumeAnimateAtMoveToWindow;
@property(retain, nonatomic) UIColor *iconTintedColor; // @synthesize iconTintedColor=_iconTintedColor;
- (void)didMoveToWindow;
- (void)playShakeAnimation;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

