//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveMilestoneLotteryViewModel, MMFinderLiveSpringCardContainerView, MMUIButton, MMWebImageView, NSString, UIImageView;

@interface MMFinderLiveMilestoneLotteryDetailBaseView : UIView
{
    double _cardViewWidthPortrait;
    double _cardViewWidthLandScape;
    double _cardViewHeightPortrait;
    double _cardViewHeightLandScape;
    UIView *_bgTapView;
    UIImageView *_backgroundImageView;
    UIImageView *_backgroundTopRightDecorationImageView;
    UIImageView *_backgroundBottomLeftDecorationImageView;
    UIView *_backgroundView;
    MMWebImageView *_bgDecorationImageView;
    MMUIButton *_closeButton;
    MMFinderLiveSpringCardContainerView *_containerView;
    MMFinderLiveMilestoneLotteryViewModel *_vm;
    double _lotteryUIAdaptedPercent;
}

- (void).cxx_destruct;
@property(nonatomic) double lotteryUIAdaptedPercent; // @synthesize lotteryUIAdaptedPercent=_lotteryUIAdaptedPercent;
@property(retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) MMFinderLiveSpringCardContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMWebImageView *bgDecorationImageView; // @synthesize bgDecorationImageView=_bgDecorationImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *backgroundBottomLeftDecorationImageView; // @synthesize backgroundBottomLeftDecorationImageView=_backgroundBottomLeftDecorationImageView;
@property(retain, nonatomic) UIImageView *backgroundTopRightDecorationImageView; // @synthesize backgroundTopRightDecorationImageView=_backgroundTopRightDecorationImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *bgTapView; // @synthesize bgTapView=_bgTapView;
@property(nonatomic) double cardViewHeightLandScape; // @synthesize cardViewHeightLandScape=_cardViewHeightLandScape;
@property(nonatomic) double cardViewHeightPortrait; // @synthesize cardViewHeightPortrait=_cardViewHeightPortrait;
@property(nonatomic) double cardViewWidthLandScape; // @synthesize cardViewWidthLandScape=_cardViewWidthLandScape;
@property(nonatomic) double cardViewWidthPortrait; // @synthesize cardViewWidthPortrait=_cardViewWidthPortrait;
- (void)onLoadImageOK:(id)arg1;
- (double)getLotteryUIAdaptedPercent;
- (double)liveAdaptedValue:(double)arg1;
- (double)getCardViewHeightLandscapeRatioForIPhone;
- (double)getCurrentSizeRatio;
@property(readonly, nonatomic) double cardViewHeightIpad;
@property(readonly, nonatomic) double cardViewWidthIpad;
@property(readonly, nonatomic) double cardViewHeight;
@property(readonly, nonatomic) double cardViewWidth;
- (void)cardContainerViewRequestDismissCurrentCard:(id)arg1;
- (void)onBgTapViewTapped:(id)arg1;
- (void)closeView;
- (void)reloadBGColorForSpringFestival;
- (void)updateTopDecorationImageUrl:(id)arg1;
- (void)hideAniamted:(_Bool)arg1;
- (void)showInView:(id)arg1 aniamted:(_Bool)arg2;
- (id)closeButtonColor;
- (_Bool)updateLotteryAdaptedPercentIfNeeded;
- (void)layoutSubviews;
- (void)initCommonUI;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

