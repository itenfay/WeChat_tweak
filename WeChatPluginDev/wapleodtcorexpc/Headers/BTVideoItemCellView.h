//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTVideoItemCellAutoPlayerView, BTVideoItemCellViewModel, CAGradientLayer, MMUILabel, SightIconView, UIView;

@interface BTVideoItemCellView
{
    CAGradientLayer *m_maskLayer;
    UIView *m_playerBtnContainerView;
    SightIconView *m_playIconView;
    MMUILabel *m_timeLabel;
    MMUILabel *m_autoPlayVideoTimeLabel;
    CAGradientLayer *m_autoPlayVideoTitleMaskLayer;
    BTVideoItemCellAutoPlayerView *m_lastAddedPlayerView;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
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
- (void)updateTitleView:(_Bool)arg1;
- (void)updateTimeLabel;
- (void)initTimeLabel;
- (void)initPlayIconView;
- (void)onUpdateViewModel;
- (id)getTitleViewColor:(_Bool)arg1;
- (void)initCoverMaskLayer;
- (void)initCoverView;
- (void)initNormalReaderItem;
- (void)initTopReaderItem;

// Remaining properties
@property(readonly, nonatomic) BTVideoItemCellViewModel *viewModel; // @dynamic viewModel;

@end

