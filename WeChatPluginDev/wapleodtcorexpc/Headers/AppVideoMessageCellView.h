//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppVideoMessageViewModel, CAGradientLayer, MMUILabel, SightIconView;

@interface AppVideoMessageCellView
{
    SightIconView *_playIconImgView;
    MMUILabel *_timeLabel;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) SightIconView *playIconImgView; // @synthesize playIconImgView=_playIconImgView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)addTimeLabel;
- (void)addCoverImageView;
- (void)addTitleLabel;
- (id)coverImageView;
- (id)coverImage;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) AppVideoMessageViewModel *viewModel; // @dynamic viewModel;

@end

