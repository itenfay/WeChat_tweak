//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView;

@interface BrandFinderLiveMpStyleCardView
{
    MMWebImageView *_backgroundCoverImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *backgroundCoverImageView; // @synthesize backgroundCoverImageView=_backgroundCoverImageView;
- (double)titleMaxWidth;
- (void)updateLiveStatusViewDisplay;
- (void)loadData;
- (void)updateRecommendReasonLabelDisplay;
- (void)updateRecommendReason:(id)arg1;
- (void)updateLiveStatus:(_Bool)arg1 statusWording:(id)arg2;
- (void)updateViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)configShadowStyle:(id)arg1;
- (void)configLiveOverView;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

