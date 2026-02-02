//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMFinderLiveMusicDataItem, MMMusicHorizontalScrollingView, MMUIButton, MMUILabel, MMWebImageView, NSString, UIImageView, UIPanGestureRecognizer, UIView;

@interface WCFinderLiveMusicInfoHalfViewController
{
    CDUnknownBlockType _loadedBlock;
    CDUnknownBlockType _closedBlock;
    CDUnknownBlockType _tappedAppLabelBlock;
    UIPanGestureRecognizer *_panGesture;
    UIView *_containerView;
    UIView *_closedView;
    MMWebImageView *_musicCoverHDBackgroundImageView;
    MMWebImageView *_musicCoverHDImageView;
    UIView *_musicCoverHDMaskView;
    UIView *_musicCoverHDMaskGradiantView;
    CAGradientLayer *_musicCoverHDMaskGradiantMaskLayer;
    CAGradientLayer *_musicCoverTopMaskLayer;
    MMWebImageView *_musicLogoImageView;
    MMMusicHorizontalScrollingView *_songNameLabel;
    MMMusicHorizontalScrollingView *_singerNameLabel;
    UIView *_musicInfoContainerBackgroundView;
    UIView *_musicInfoContainerView;
    UIImageView *_musicIconView;
    MMMusicHorizontalScrollingView *_genreTimeLabel;
    MMMusicHorizontalScrollingView *_albumLabel;
    MMUILabel *_musicSourceLabel;
    UIImageView *_musicSourceArrowView;
    MMFinderLiveMusicDataItem *_musicDataItem;
    UIView *_footerCloseBtnContainerView;
    MMUIButton *_footerCloseBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *footerCloseBtn; // @synthesize footerCloseBtn=_footerCloseBtn;
@property(retain, nonatomic) UIView *footerCloseBtnContainerView; // @synthesize footerCloseBtnContainerView=_footerCloseBtnContainerView;
@property(retain, nonatomic) MMFinderLiveMusicDataItem *musicDataItem; // @synthesize musicDataItem=_musicDataItem;
@property(retain, nonatomic) UIImageView *musicSourceArrowView; // @synthesize musicSourceArrowView=_musicSourceArrowView;
@property(retain, nonatomic) MMUILabel *musicSourceLabel; // @synthesize musicSourceLabel=_musicSourceLabel;
@property(retain, nonatomic) MMMusicHorizontalScrollingView *albumLabel; // @synthesize albumLabel=_albumLabel;
@property(retain, nonatomic) MMMusicHorizontalScrollingView *genreTimeLabel; // @synthesize genreTimeLabel=_genreTimeLabel;
@property(retain, nonatomic) UIImageView *musicIconView; // @synthesize musicIconView=_musicIconView;
@property(retain, nonatomic) UIView *musicInfoContainerView; // @synthesize musicInfoContainerView=_musicInfoContainerView;
@property(retain, nonatomic) UIView *musicInfoContainerBackgroundView; // @synthesize musicInfoContainerBackgroundView=_musicInfoContainerBackgroundView;
@property(retain, nonatomic) MMMusicHorizontalScrollingView *singerNameLabel; // @synthesize singerNameLabel=_singerNameLabel;
@property(retain, nonatomic) MMMusicHorizontalScrollingView *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) MMWebImageView *musicLogoImageView; // @synthesize musicLogoImageView=_musicLogoImageView;
@property(retain, nonatomic) CAGradientLayer *musicCoverTopMaskLayer; // @synthesize musicCoverTopMaskLayer=_musicCoverTopMaskLayer;
@property(retain, nonatomic) CAGradientLayer *musicCoverHDMaskGradiantMaskLayer; // @synthesize musicCoverHDMaskGradiantMaskLayer=_musicCoverHDMaskGradiantMaskLayer;
@property(retain, nonatomic) UIView *musicCoverHDMaskGradiantView; // @synthesize musicCoverHDMaskGradiantView=_musicCoverHDMaskGradiantView;
@property(retain, nonatomic) UIView *musicCoverHDMaskView; // @synthesize musicCoverHDMaskView=_musicCoverHDMaskView;
@property(retain, nonatomic) MMWebImageView *musicCoverHDImageView; // @synthesize musicCoverHDImageView=_musicCoverHDImageView;
@property(retain, nonatomic) MMWebImageView *musicCoverHDBackgroundImageView; // @synthesize musicCoverHDBackgroundImageView=_musicCoverHDBackgroundImageView;
@property(retain, nonatomic) UIView *closedView; // @synthesize closedView=_closedView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(copy, nonatomic) CDUnknownBlockType tappedAppLabelBlock; // @synthesize tappedAppLabelBlock=_tappedAppLabelBlock;
@property(copy, nonatomic) CDUnknownBlockType closedBlock; // @synthesize closedBlock=_closedBlock;
@property(copy, nonatomic) CDUnknownBlockType loadedBlock; // @synthesize loadedBlock=_loadedBlock;
- (void)handlePanGesture:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)close;
- (void)closeAnimated:(_Bool)arg1;
- (void)onClose;
- (void)handleMusicSourceLabelTap;
- (void)reloadMusicItem:(id)arg1;
- (void)_layoutSubviews;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMusicDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

