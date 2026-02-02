//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMLiveViewController, MMUIButton, NSString, UIColor, UIImage, UIImageView, UILabel, UIView, WCLiveBlurButtonAnimationHandler, WCLiveBlurButtonBackView;

@interface WCLiveBlurButton
{
    _Bool _removeBlurBacked;
    _Bool _isExposed;
    _Bool _isEnabledInTrialLive;
    _Bool _hasBlurEffect;
    _Bool _isBtnVisible;
    _Bool _hideBySpacingControl;
    _Bool _isRoundCorner;
    _Bool _lowPowerModeSwitch;
    _Bool _enableStartLowPowerMode;
    _Bool _isStartLowPowerMode;
    _Bool _hiddenValue;
    UIView *_customBackgroundView;
    CAGradientLayer *_customBackgroundViewLayer;
    WCLiveBlurButtonBackView *_backView;
    NSString *_buttonId;
    UIColor *_blurEffectColor;
    CDUnknownBlockType _btnFrameChangeCallback;
    UIImage *_customBackgroundImage;
    UIColor *_customBackgroundColor;
    WCLiveBlurButtonAnimationHandler *_animationHandler;
    UILabel *_badgeLabel;
    NSString *_badgeValue;
    UIView *_redDotView;
    UIImageView *_customBgImageView;
    UIImageView *_blurBackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *blurBackView; // @synthesize blurBackView=_blurBackView;
@property(nonatomic) _Bool hiddenValue; // @synthesize hiddenValue=_hiddenValue;
@property(retain, nonatomic) UIImageView *customBgImageView; // @synthesize customBgImageView=_customBgImageView;
@property(nonatomic) _Bool isStartLowPowerMode; // @synthesize isStartLowPowerMode=_isStartLowPowerMode;
@property(nonatomic) _Bool enableStartLowPowerMode; // @synthesize enableStartLowPowerMode=_enableStartLowPowerMode;
@property(nonatomic) _Bool lowPowerModeSwitch; // @synthesize lowPowerModeSwitch=_lowPowerModeSwitch;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) WCLiveBlurButtonAnimationHandler *animationHandler; // @synthesize animationHandler=_animationHandler;
@property(nonatomic) _Bool isRoundCorner; // @synthesize isRoundCorner=_isRoundCorner;
@property(nonatomic) _Bool hideBySpacingControl; // @synthesize hideBySpacingControl=_hideBySpacingControl;
@property(nonatomic) _Bool isBtnVisible; // @synthesize isBtnVisible=_isBtnVisible;
@property(nonatomic) _Bool hasBlurEffect; // @synthesize hasBlurEffect=_hasBlurEffect;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(retain, nonatomic) UIImage *customBackgroundImage; // @synthesize customBackgroundImage=_customBackgroundImage;
@property(copy, nonatomic) CDUnknownBlockType btnFrameChangeCallback; // @synthesize btnFrameChangeCallback=_btnFrameChangeCallback;
@property(nonatomic) _Bool isEnabledInTrialLive; // @synthesize isEnabledInTrialLive=_isEnabledInTrialLive;
@property(nonatomic) _Bool isExposed; // @synthesize isExposed=_isExposed;
@property(retain, nonatomic) UIColor *blurEffectColor; // @synthesize blurEffectColor=_blurEffectColor;
@property(retain, nonatomic) NSString *buttonId; // @synthesize buttonId=_buttonId;
@property(retain, nonatomic) WCLiveBlurButtonBackView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) CAGradientLayer *customBackgroundViewLayer; // @synthesize customBackgroundViewLayer=_customBackgroundViewLayer;
@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
- (void)onWCLiveBlurButtonPowerModeSwitchChange:(_Bool)arg1;
@property(readonly, nonatomic) MMLiveViewController *rootLiveVC;
- (void)stopLowPowerModeBlurIfNeeded;
- (void)startLowPowerModeBlurIfNeeded;
- (void)checkNeedUpdateLowPowerMode;
@property(readonly, nonatomic) _Bool isCurrentSupportLowPowerMode;
- (void)onBlurBtnVisible:(_Bool)arg1;
- (void)checkBtnVisible;
- (_Bool)canHaveBackgroundBlur;
- (void)clearAllBlurEffect;
- (void)recoverBlurEffectIfNeeded;
- (void)addBlurEffectSnapShot:(id)arg1;
- (void)addBlurEffect;
- (void)didMoveToWindow;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)updateLowPowerModeAbility:(_Bool)arg1;
- (void)updateRedDotPosition;
- (void)updateRedDotAppearance:(_Bool)arg1;
- (void)updateBadgePosition;
- (void)updateBadgeValue:(id)arg1 isNum:(_Bool)arg2;
- (void)updateBadgeNum:(unsigned long long)arg1;
- (void)updateBadgeValue:(id)arg1;
@property(readonly, nonatomic) MMUIButton *topButton;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateBlurEffect;
- (id)getBlurButtonBackView;
- (void)layoutBackView;
- (id)getCustomBackgroundView;
- (void)layoutCustomBackgroundView;
- (void)layoutCustomBackgroundImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)createCustomBackgroundImageViewIfNeeded;
- (void)setAccessibilityLabel:(id)arg1;
- (void)updateBgViewMasksToBounds:(_Bool)arg1;
@property(nonatomic) _Bool removeBlurBacked; // @synthesize removeBlurBacked=_removeBlurBacked;
- (void)startEnlargeReduceAnimation;
- (void)onBlurBtnHasBlurEffect:(_Bool)arg1;
- (void)updateHasBlurEffect:(_Bool)arg1;
- (void)onBlurEffectRemove;
- (void)onBlurEffectAdd;
- (void)setFrame:(struct CGRect)arg1;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectColor:(id)arg2 roundCorner:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 roundCorner:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

