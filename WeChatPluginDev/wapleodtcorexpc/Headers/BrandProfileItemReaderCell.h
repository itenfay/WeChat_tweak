//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileItemReaderViewModel, CAGradientLayer;

@interface BrandProfileItemReaderCell
{
    CAGradientLayer *_coverMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *coverMaskLayer; // @synthesize coverMaskLayer=_coverMaskLayer;
- (id)accessibilityLabel;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)layoutSubviews;
- (id)getDescLabelColor:(_Bool)arg1;
- (id)getTitleViewColor:(_Bool)arg1;
- (void)updateDescLabel;
- (void)updateTitleView;
- (void)updateCoverImageView;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) BrandProfileItemReaderViewModel *viewModel; // @dynamic viewModel;

@end

