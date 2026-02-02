//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class POPSpringAnimation, UIImageView;

@interface CameraScanGoodsPinView
{
    UIImageView *_fgImageView;
    UIImageView *_bgImageView;
    POPSpringAnimation *_shakingAnimation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) POPSpringAnimation *shakingAnimation; // @synthesize shakingAnimation=_shakingAnimation;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImageView *fgImageView; // @synthesize fgImageView=_fgImageView;
- (void)stopShakingAnimation;
- (void)startShakingAnimation;
- (void)layoutSubviews;
- (void)setupAnimation;
- (void)setupSubviews;
- (id)init;

@end

