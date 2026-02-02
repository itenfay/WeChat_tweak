//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileItemImageViewModel, CAGradientLayer, MMUILabel, UIImageView;

@interface BrandProfileItemImageCell
{
    UIImageView *_imageIconView;
    MMUILabel *_imageCountLabel;
    CAGradientLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) MMUILabel *imageCountLabel; // @synthesize imageCountLabel=_imageCountLabel;
@property(retain, nonatomic) UIImageView *imageIconView; // @synthesize imageIconView=_imageIconView;
- (id)accessibilityLabel;
- (void)layoutSmallCoverSytle;
- (void)layoutBigCoverStyleCoverAndNum;
- (void)layoutBigCoverStyle;
- (void)layoutSingleBigCoverSytle;
- (void)layoutSubviews;
- (void)updateTitleAndDescTextColor;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) BrandProfileItemImageViewModel *viewModel; // @dynamic viewModel;

@end

