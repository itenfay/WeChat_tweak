//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, UIColor, UIImage;

@interface WCCanvasMusicPlayButton
{
    _Bool _isAnimating;
    long long _playState;
    UIColor *_viewColor;
    double _iconWidth;
    UIImage *_circleImage;
    UIImage *_circleLoadingImage;
    UIImage *_playIconImage;
    UIImage *_pauseIconImage;
    MMUIImageView *_bgView;
    MMUIImageView *_iconView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) MMUIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImage *pauseIconImage; // @synthesize pauseIconImage=_pauseIconImage;
@property(retain, nonatomic) UIImage *playIconImage; // @synthesize playIconImage=_playIconImage;
@property(retain, nonatomic) UIImage *circleLoadingImage; // @synthesize circleLoadingImage=_circleLoadingImage;
@property(retain, nonatomic) UIImage *circleImage; // @synthesize circleImage=_circleImage;
@property(nonatomic) double iconWidth; // @synthesize iconWidth=_iconWidth;
@property(retain, nonatomic) UIColor *viewColor; // @synthesize viewColor=_viewColor;
@property(nonatomic) long long playState; // @synthesize playState=_playState;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)updateViews;
- (void)initViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewColor:(id)arg2 iconWidth:(double)arg3;

@end

