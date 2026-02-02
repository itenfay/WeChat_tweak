//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveDetailCardView, MMFinderLiveDropGiftDetailCardViewModel, MMUIButton;

@interface MMFinderLiveDetailCardBaseView : UIView
{
    _Bool _closeAnimated;
    MMUIButton *_closeButton;
    UIView *_containerView;
    MMFinderLiveDetailCardView *_cardView;
    double _cardViewWidthPortrait;
    double _cardViewWidthLandScape;
    double _cardViewHeightPortrait;
    double _cardViewHeightLandScape;
    MMFinderLiveDropGiftDetailCardViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool closeAnimated; // @synthesize closeAnimated=_closeAnimated;
@property(retain, nonatomic) MMFinderLiveDropGiftDetailCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double cardViewHeightLandScape; // @synthesize cardViewHeightLandScape=_cardViewHeightLandScape;
@property(nonatomic) double cardViewHeightPortrait; // @synthesize cardViewHeightPortrait=_cardViewHeightPortrait;
@property(nonatomic) double cardViewWidthLandScape; // @synthesize cardViewWidthLandScape=_cardViewWidthLandScape;
@property(nonatomic) double cardViewWidthPortrait; // @synthesize cardViewWidthPortrait=_cardViewWidthPortrait;
@property(retain, nonatomic) MMFinderLiveDetailCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) double cardViewHeight;
@property(readonly, nonatomic) double cardViewWidth;
- (void)onClickCloseButton:(id)arg1;
- (void)removeView;
- (void)hideWithAnimation;
- (void)showWithAnimation;
- (void)updateViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

