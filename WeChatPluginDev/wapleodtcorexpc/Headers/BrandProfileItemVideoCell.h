//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileItemVideoViewModel, CAGradientLayer, MMUILabel, SightIconView;

@interface BrandProfileItemVideoCell
{
    SightIconView *_playIconView;
    MMUILabel *_timeLabel;
    CAGradientLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
- (id)accessibilityLabel;
- (void)layoutMultiBigStyle;
- (void)layoutSingleBigStyle;
- (void)layoutSmallStyle;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) BrandProfileItemVideoViewModel *viewModel; // @dynamic viewModel;

@end

