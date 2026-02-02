//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTMissedSubsVideoItemViewModel, MMUILabel, MMWebImageView, SightIconView;

@interface BTMissedSubsVideoItemCell
{
    MMWebImageView *_coverImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_timeLabel;
    SightIconView *_playIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (unsigned long long)contentViewRaddiCorners;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)setViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BTMissedSubsVideoItemViewModel *viewModel; // @dynamic viewModel;

@end

