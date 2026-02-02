//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMUILabel, NSString, SightIconView, UIView;

@interface VideoReaderItemView
{
    UIView *m_playIconTimeContainerView;
    SightIconView *m_playIconView;
    MMUILabel *m_timeLabel;
    CAGradientLayer *m_titleShadowLayer;
    _Bool m_bIsCoverImgViewFinishLoad;
    unsigned int _playLength;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int playLength; // @synthesize playLength=_playLength;
- (id)accessibilityLabel;
- (void)onLoadImageOK:(id)arg1;
- (id)getLabelTextColor;
- (void)updateSubviewsWhenCoverImgViewFinishLoad;
- (void)setupPlayIconView:(_Bool)arg1;
- (void)setupPlayIconTimeContainerView;
- (void)setupTitleView;
- (void)initCoverImageView;
- (void)normalView;
- (void)topView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

