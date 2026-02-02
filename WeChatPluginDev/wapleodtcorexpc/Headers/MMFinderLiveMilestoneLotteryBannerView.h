//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, LOTAnimationView, NSString, PAGView, UIImageView, UILabel;

@interface MMFinderLiveMilestoneLotteryBannerView : UIView
{
    UIImageView *_bannerImageView;
    UILabel *_textLabel;
    UIView *_bannerContainerView;
    UILabel *_pagCountdownLabel;
    LOTAnimationView *_lotPacketView;
    PAGView *_pagPacketView;
    CAGradientLayer *_pagCountdownGradientBGLayer;
}

+ (double)widthWithoutText;
+ (struct CGSize)packetAnimationSize;
+ (struct CGSize)sizeWithText:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *pagCountdownGradientBGLayer; // @synthesize pagCountdownGradientBGLayer=_pagCountdownGradientBGLayer;
@property(retain, nonatomic) PAGView *pagPacketView; // @synthesize pagPacketView=_pagPacketView;
@property(retain, nonatomic) LOTAnimationView *lotPacketView; // @synthesize lotPacketView=_lotPacketView;
@property(retain, nonatomic) UILabel *pagCountdownLabel; // @synthesize pagCountdownLabel=_pagCountdownLabel;
@property(retain, nonatomic) UIView *bannerContainerView; // @synthesize bannerContainerView=_bannerContainerView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
- (_Bool)isUsePAG;
- (void)onAppBecomeActive;
- (void)updateCountdownLabelWithSeconds:(unsigned int)arg1;
- (void)switchToPacketStyle;
- (void)switchToBannerStyle;
- (void)showLotteryPacketViewWithCurrentSeconds:(unsigned int)arg1;
- (void)setText:(id)arg1;
- (void)onOngoingLotteryCountdown:(id)arg1 remainingSeconds:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)resizeComponentsIfNeeded;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

