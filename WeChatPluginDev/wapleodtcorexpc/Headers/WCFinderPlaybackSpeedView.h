//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView, UILabel;

@interface WCFinderPlaybackSpeedView : UIView
{
    CAGradientLayer *_topGradientLayer;
    UIView *_containerView;
    UILabel *_playbackSpeedLabel;
    UIImageView *_firstPlayIcon;
    UIImageView *_secondPlayIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *secondPlayIcon; // @synthesize secondPlayIcon=_secondPlayIcon;
@property(retain, nonatomic) UIImageView *firstPlayIcon; // @synthesize firstPlayIcon=_firstPlayIcon;
@property(retain, nonatomic) UILabel *playbackSpeedLabel; // @synthesize playbackSpeedLabel=_playbackSpeedLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
- (void)stopAnimation;
- (void)startAnimation;
- (void)animationUpdateWithTitle:(id)arg1 hideIconView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)genUIImageView;
- (void)resetEnhanceAnimation;
- (void)resetEnhance;
- (void)doEnhanceAnimation;
- (void)_animatedLayoutViewWithType:(unsigned long long)arg1;
- (void)layoutViewWithLandscape:(_Bool)arg1;
- (double)_getIconContentWidth;
- (void)updateWithTitle:(id)arg1 hideIconView:(_Bool)arg2;
- (void)updateWithTitle:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

