//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UIVisualEffectView;

@interface ImageFitWithBlurredBackgroundView
{
    UIImageView *_backgroundView;
    UIVisualEffectView *_blurView;
    UIImageView *_realImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *realImageView; // @synthesize realImageView=_realImageView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)setupImage:(id)arg1;
- (void)layoutSubviews;
- (void)setupRealImageView;
- (void)setupBlurView;
- (void)setupBackgroundView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

