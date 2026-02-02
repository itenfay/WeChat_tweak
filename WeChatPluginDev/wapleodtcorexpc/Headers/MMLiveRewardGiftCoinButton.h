//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, UIImageView, UIView;

@interface MMLiveRewardGiftCoinButton
{
    UIView *_loadingContainerView;
    UIView *_loadingBkgView;
    MMUIActivityIndicatorView *_loadingView;
    UIImageView *_chevronView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *loadingBkgView; // @synthesize loadingBkgView=_loadingBkgView;
@property(retain, nonatomic) UIView *loadingContainerView; // @synthesize loadingContainerView=_loadingContainerView;
- (void)stopLoading;
- (void)startLoading;
- (void)layoutLoadingView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

