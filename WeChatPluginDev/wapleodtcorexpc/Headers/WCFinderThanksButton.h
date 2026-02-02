//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, WCFinderThanksButtonConfig;
@protocol WCFinderThanksButtonDelegate;

@interface WCFinderThanksButton : UIView
{
    _Bool _iconPagAnimating;
    _Bool _buttonBgAnimating;
    _Bool _thankState;
    id <WCFinderThanksButtonDelegate> _delegate;
    WCFinderThanksButtonConfig *_config;
    UIView *_btnContainer;
    UIImageView *_iconView;
    UILabel *_titleLabel;
}

+ (id)titleTextWithConfig:(id)arg1 thanksState:(_Bool)arg2;
+ (id)thanksIconImageWithConfig:(id)arg1 thankState:(_Bool)arg2;
+ (double)buttonWidthWithConfig:(id)arg1 thankState:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool thankState; // @synthesize thankState=_thankState;
@property(nonatomic) _Bool buttonBgAnimating; // @synthesize buttonBgAnimating=_buttonBgAnimating;
@property(nonatomic) _Bool iconPagAnimating; // @synthesize iconPagAnimating=_iconPagAnimating;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *btnContainer; // @synthesize btnContainer=_btnContainer;
@property(retain, nonatomic) WCFinderThanksButtonConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WCFinderThanksButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAnimationEnd:(id)arg1;
- (id)thanksAnimationPagFileName;
- (id)createThanksAnimationPag;
- (void)tryPlayThanksAnimation;
- (void)tryPlayButtonFadeAnimationWithStayDuration:(double)arg1;
- (unsigned long long)magicAnimationStyle;
- (_Bool)isAnimating;
- (void)tryPlayMagicAnimation;
- (void)onTapGes:(id)arg1;
- (void)flushUIState;
- (void)updateThankState:(_Bool)arg1;
- (struct CGRect)iconFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutUI;
- (void)sizeToFit;
- (void)updateConfig;
- (void)setupUI;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

