//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTReaderStyleRecommendVideoCellViewModel, BTVideoItemCellAutoPlayerView, CAGradientLayer, MMUILabel, SightIconView, UIView;

@interface BTReaderStyleRecommendVideoCellView
{
    UIView *m_playerBtnContainerView;
    SightIconView *m_playIconView;
    MMUILabel *m_timeLabel;
    MMUILabel *m_autoPlayVideoTimeLabel;
    CAGradientLayer *m_autoPlayVideoTitleMaskLayer;
    BTVideoItemCellAutoPlayerView *m_lastAddedPlayerView;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)getTimeLabelAccessibilityLabel;
- (void)resetLastAddedPlayerView;
- (void)onVideoPlayerPrepareToPlay;
- (void)onVideoPlayerPlay;
- (void)onVideoPlayerBeginBuffering;
- (void)doAnimationFromCoverImageToVideoPlayerView;
- (void)updateViewWhenStatusIsDestory;
- (void)updateViewWhenStatusIsPlay;
- (void)removeVideoPlayTitleCoverMaskLayer;
- (void)setVideoPlayTitleCoverMaskLayer;
- (void)updateVideoTimeLabel;
- (void)initVideoPlayTitleCoverMaskLayer;
- (void)initVideoTimeLabel;
- (void)initVideoPlayerView;
- (void)updateViewByVideoAutoPlayStatus;
- (void)layoutNormalCoverItem;
- (void)layoutLargeCoverItem;
- (void)updateTitleView:(_Bool)arg1;
- (void)initTimeLabel;
- (void)initPlayIconView;
- (void)onUpdateViewModel;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) BTReaderStyleRecommendVideoCellViewModel *viewModel;

@end

