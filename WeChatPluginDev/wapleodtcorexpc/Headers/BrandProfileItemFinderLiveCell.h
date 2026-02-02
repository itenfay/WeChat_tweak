//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandFinderLiveBaseCardView, BrandProfileItemFinderLiveViewModel;

@interface BrandProfileItemFinderLiveCell
{
    BrandFinderLiveBaseCardView *_cardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandFinderLiveBaseCardView *cardView; // @synthesize cardView=_cardView;
- (id)accessibilityLabel;
- (void)onRecommendReasonAvailableChanged;
- (void)onRecommendReasonChanged;
- (void)onReplayStatusChanged;
- (void)onLiveStatusChanged;
- (void)layoutFinderLiveStyleSmall;
- (void)layoutFinderLiveStyleBig;
- (void)layoutSubviews;
- (void)updateTitleView;
- (void)updateCardView;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) BrandProfileItemFinderLiveViewModel *viewModel; // @dynamic viewModel;

@end

