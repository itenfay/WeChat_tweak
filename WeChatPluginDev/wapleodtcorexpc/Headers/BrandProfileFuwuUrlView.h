//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileFuwuInfo, MMUIButton, UIImageView, UIView;

@interface BrandProfileFuwuUrlView
{
    BrandProfileFuwuInfo *_fuwuInfo;
    UIView *_topDividingView;
    MMUIButton *_button;
    double _cachedFuwuViewHeight;
    UIImageView *_iconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) double cachedFuwuViewHeight; // @synthesize cachedFuwuViewHeight=_cachedFuwuViewHeight;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *topDividingView; // @synthesize topDividingView=_topDividingView;
@property(retain, nonatomic) BrandProfileFuwuInfo *fuwuInfo; // @synthesize fuwuInfo=_fuwuInfo;
- (void)onFuwuButtonClicked:(id)arg1;
- (void)updateFuwuInfo:(id)arg1;
- (double)calcuteFuwuViewHeight;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)init;

@end

