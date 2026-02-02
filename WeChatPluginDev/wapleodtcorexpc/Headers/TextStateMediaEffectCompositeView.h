//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIViewPropertyAnimator, UIVisualEffectView;

@interface TextStateMediaEffectCompositeView : UIView
{
    unsigned int _effects;
    double _transitionProgress;
    UIView *_darkenView;
    UIView *_blurContainerView;
    UIVisualEffectView *_blurView;
    UIViewPropertyAnimator *_blurAnimator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewPropertyAnimator *blurAnimator; // @synthesize blurAnimator=_blurAnimator;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *blurContainerView; // @synthesize blurContainerView=_blurContainerView;
@property(retain, nonatomic) UIView *darkenView; // @synthesize darkenView=_darkenView;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(nonatomic) unsigned int effects; // @synthesize effects=_effects;
- (void)willEnterForeground;
- (void)didMoveToWindow;
- (void)removeBlurViewEffect;
- (void)addBlurViewEffect;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)initNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

