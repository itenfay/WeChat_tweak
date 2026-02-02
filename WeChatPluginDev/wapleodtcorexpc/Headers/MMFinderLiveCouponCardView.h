//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveCouponCardViewModel, MMFinderLiveCouponItem, PAGView, UIButton, UILabel;
@protocol MMFinderLiveCouponCardViewDelegate;

@interface MMFinderLiveCouponCardView : UICollectionViewCell
{
    id <MMFinderLiveCouponCardViewDelegate> _delegate;
    MMFinderLiveCouponCardViewModel *_viewModel;
    UIButton *_button;
    UILabel *_anchorDescriptionLabel;
    MMFinderLiveCouponItem *_coupon;
    PAGView *_pagBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *pagBackgroundView; // @synthesize pagBackgroundView=_pagBackgroundView;
@property(retain, nonatomic) MMFinderLiveCouponItem *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) UILabel *anchorDescriptionLabel; // @synthesize anchorDescriptionLabel=_anchorDescriptionLabel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) MMFinderLiveCouponCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MMFinderLiveCouponCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSatisfied;
- (void)onReceived;
- (void)onButtonClicked;
- (void)updateWithViewModel:(id)arg1 setPAG:(_Bool)arg2;
- (void)updateWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

