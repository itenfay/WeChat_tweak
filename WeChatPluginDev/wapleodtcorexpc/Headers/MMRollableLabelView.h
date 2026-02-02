//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMRollableLabelViewConfig, NSString, PAGView, UIImageView, UILabel, UIScrollView;

@interface MMRollableLabelView : UIView
{
    _Bool _hasStartAnimation;
    UILabel *_textLabel;
    PAGView *_pagAnimationView;
    MMRollableLabelViewConfig *_config;
    UIImageView *_iconImageView;
    UIScrollView *_scrollView;
    UIView *_scrollContainerView;
    CAGradientLayer *_maskGradientLayer;
    UILabel *_secondaryLabel;
    struct CGSize _lastLayoutScrollViewSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasStartAnimation; // @synthesize hasStartAnimation=_hasStartAnimation;
@property(nonatomic) struct CGSize lastLayoutScrollViewSize; // @synthesize lastLayoutScrollViewSize=_lastLayoutScrollViewSize;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) CAGradientLayer *maskGradientLayer; // @synthesize maskGradientLayer=_maskGradientLayer;
@property(retain, nonatomic) UIView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMRollableLabelViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) PAGView *pagAnimationView; // @synthesize pagAnimationView=_pagAnimationView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)sizeToFit;
- (struct CGSize)getLabelSize;
- (double)getIconTextPadding;
- (struct CGSize)getPagViewSize;
- (struct CGSize)getImageViewSize;
- (void)layoutSubviews;
- (void)createPAGViewIfNeeded;
- (id)buildGradientLayer;
- (void)setupUI;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)scheduleBackAndForthAnimation;
- (_Bool)scheduleScrollingAnimation;
- (_Bool)rescheduleRollAnimation;
- (void)resetRollAnimation;
- (void)resetAnimation;
- (_Bool)startAnimation;
- (void)updateConfig:(id)arg1;
- (void)stopPAGAnimation;
- (void)playPAGAnimation;
- (void)updatePAGAnimationPath:(id)arg1;
- (void)updateIconImage:(id)arg1;
- (void)updateLabelTextColor:(id)arg1;
- (void)updateLabelAttributedText:(id)arg1;
- (void)updateLabelText:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

