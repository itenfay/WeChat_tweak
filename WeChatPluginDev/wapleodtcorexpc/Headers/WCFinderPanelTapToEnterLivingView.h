//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAAnimationGroup, UILabel;
@protocol WCFinderPanelTapToEnterLivingViewDelegate;

@interface WCFinderPanelTapToEnterLivingView : UIView
{
    id <WCFinderPanelTapToEnterLivingViewDelegate> _delegate;
    UIView *_contentView;
    UILabel *_tapToEnterLabel;
    UIView *_blurBackgroundView;
    UIView *_lineContainerView;
    unsigned long long _style;
    UIView *_breatheContainerView;
    CAAnimationGroup *_breatheAnimationGroup;
    double _loopDuration;
    double _loopInterval;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(nonatomic) double loopInterval; // @synthesize loopInterval=_loopInterval;
@property(nonatomic) double loopDuration; // @synthesize loopDuration=_loopDuration;
@property(retain, nonatomic) CAAnimationGroup *breatheAnimationGroup; // @synthesize breatheAnimationGroup=_breatheAnimationGroup;
@property(retain, nonatomic) UIView *breatheContainerView; // @synthesize breatheContainerView=_breatheContainerView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *lineContainerView; // @synthesize lineContainerView=_lineContainerView;
@property(retain, nonatomic) UIView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) UILabel *tapToEnterLabel; // @synthesize tapToEnterLabel=_tapToEnterLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCFinderPanelTapToEnterLivingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addLineContainerView;
- (void)addBlurBackgroundView;
- (void)addContentView;
- (void)addViews;
- (void)updateTapToEnterLabel:(id)arg1;
- (void)updateStyle:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)loopResumeAnimation;
- (void)loopPauseAnimation;
- (void)stopBreatheAnimation;
- (void)startBreatheAnimation:(double)arg1 loopInterval:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

