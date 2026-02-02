//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUIImageView, UILabel;
@protocol WCFinderTemplateMusicSelectEntranceViewDelegate;

@interface WCFinderTemplateMusicSelectEntranceView : UIView
{
    id <WCFinderTemplateMusicSelectEntranceViewDelegate> _delegate;
    MMUIImageView *_musicIconView;
    UILabel *_musicTitleLabel;
    MMUIImageView *_arrowView;
    UIView *_gradientMaskView;
    CAGradientLayer *_gradientLayer;
}

+ (double)viewHeight;
+ (double)viewMargin;
+ (struct CGSize)viewSuggestSizeWithMaxW:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
@property(retain, nonatomic) MMUIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *musicTitleLabel; // @synthesize musicTitleLabel=_musicTitleLabel;
@property(retain, nonatomic) MMUIImageView *musicIconView; // @synthesize musicIconView=_musicIconView;
@property(nonatomic) __weak id <WCFinderTemplateMusicSelectEntranceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopAnimationAndCenterDisplay;
- (void)stopAnimation;
- (void)startAnimation;
- (void)onTap:(id)arg1;
- (void)updateWithTitle:(id)arg1;
- (void)commonLayoutSubViews;
- (void)setupGesture;
- (void)setupViews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

