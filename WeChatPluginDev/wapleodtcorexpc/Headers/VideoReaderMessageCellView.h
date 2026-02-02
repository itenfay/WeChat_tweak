//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, NSString, SightIconView, UILabel, UIView, VideoReaderMessageViewModel;

@interface VideoReaderMessageCellView
{
    UIView *m_playIconTimeContainerView;
    SightIconView *m_playIconView;
    UILabel *m_timeLabel;
    CAGradientLayer *m_titleShadowLayer;
    _Bool m_bIsCoverImgViewFinishLoad;
}

- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (id)getLabelTextColor;
- (void)updateSubviewsWhenCoverImgViewFinishLoad;
- (void)setupPlayIconTimeContainerView;
- (void)setupTitleView;
- (void)setupCoverImageView;
- (void)setupContentView;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VideoReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

