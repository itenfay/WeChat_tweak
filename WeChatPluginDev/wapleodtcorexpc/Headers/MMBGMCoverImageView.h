//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PAGView, UIView;

@interface MMBGMCoverImageView
{
    UIView *_maskView;
    PAGView *_dotPagView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *dotPagView; // @synthesize dotPagView=_dotPagView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)layoutSubviews;
- (void)initDotPagView;
- (void)initMaskView;
- (void)initView;
- (void)stopAnimation;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

