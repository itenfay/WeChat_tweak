//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, TipsViewAccessibilityElement, UIButton, UIColor, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer;
@protocol TipsViewDelegate;

@interface TipsView : UIView
{
    id <TipsViewDelegate> _delegate;
    id _oUsrData;
    _Bool _showCornerRadiusStyle;
    _Bool _showArrow;
    _Bool _isClickable;
    _Bool _hideAllRightButton;
    _Bool _isHighlight;
    _Bool _showingExpandView;
    _Bool _isWaitingForConfirm;
    _Bool _isVoicePlaying;
    _Bool _isAnimating;
    _Bool _hasShown;
    unsigned int _voiceMsgClientId;
    id _usrData;
    UIColor *_contentBackgroundColor;
    NSString *_tipsTitle;
    NSString *_tipText;
    UIImage *_iconImage;
    NSArray *_animationImages;
    double _animationDuration;
    long long _numberOfLines;
    UIView *_expandCardView;
    NSString *_customMenuItemTitle;
    long long _style;
    UIView *_bgContainerView;
    UIView *_hlColorBgView;
    UIButton *_backgroundButton;
    UIButton *_tipRightButton;
    UIButton *_tipRightTailButton;
    UILabel *_rightDescLabel;
    UILabel *_tipsLabel;
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    UIView *_iconImageView;
    UIImageView *_arrowImageView;
    UIButton *_actionButton;
    NSString *_tipsRightButtonTitle;
    NSString *_tipsRightButtonConfirmTitle;
    NSString *_rightDescText;
    UIImageView *_playingImageView;
    UILongPressGestureRecognizer *_longPressGesture;
    TipsViewAccessibilityElement *_tipsViewAccessibilityElement;
}

+ (id)showAbandonQRCodeTipsWithDelegate:(id)arg1 parentViewController:(id)arg2 wording:(id)arg3;
+ (void)showHelloMsgTipsWithDelegate:(id)arg1 parentViewController:(id)arg2 contacts:(id)arg3 forceLightMode:(_Bool)arg4;
+ (void)showEditImageTips:(id)arg1;
+ (id)showWCDeviceTipsWithDelegate:(id)arg1 ParentView:(id)arg2 TextContent:(id)arg3 isError:(_Bool)arg4;
+ (id)showWebviewDangerousTips:(id)arg1 withTop:(double)arg2;
+ (void)showAutoSaveTips:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TipsViewAccessibilityElement *tipsViewAccessibilityElement; // @synthesize tipsViewAccessibilityElement=_tipsViewAccessibilityElement;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) _Bool hasShown; // @synthesize hasShown=_hasShown;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isVoicePlaying; // @synthesize isVoicePlaying=_isVoicePlaying;
@property(retain, nonatomic) UIImageView *playingImageView; // @synthesize playingImageView=_playingImageView;
@property(nonatomic) _Bool isWaitingForConfirm; // @synthesize isWaitingForConfirm=_isWaitingForConfirm;
@property(retain, nonatomic) NSString *rightDescText; // @synthesize rightDescText=_rightDescText;
@property(retain, nonatomic) NSString *tipsRightButtonConfirmTitle; // @synthesize tipsRightButtonConfirmTitle=_tipsRightButtonConfirmTitle;
@property(retain, nonatomic) NSString *tipsRightButtonTitle; // @synthesize tipsRightButtonTitle=_tipsRightButtonTitle;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *rightDescLabel; // @synthesize rightDescLabel=_rightDescLabel;
@property(retain, nonatomic) UIButton *tipRightTailButton; // @synthesize tipRightTailButton=_tipRightTailButton;
@property(retain, nonatomic) UIButton *tipRightButton; // @synthesize tipRightButton=_tipRightButton;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UIView *hlColorBgView; // @synthesize hlColorBgView=_hlColorBgView;
@property(retain, nonatomic) UIView *bgContainerView; // @synthesize bgContainerView=_bgContainerView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool showingExpandView; // @synthesize showingExpandView=_showingExpandView;
@property(retain, nonatomic) NSString *customMenuItemTitle; // @synthesize customMenuItemTitle=_customMenuItemTitle;
@property(nonatomic) unsigned int voiceMsgClientId; // @synthesize voiceMsgClientId=_voiceMsgClientId;
@property(retain, nonatomic) UIView *expandCardView; // @synthesize expandCardView=_expandCardView;
@property(nonatomic) _Bool isHighlight; // @synthesize isHighlight=_isHighlight;
@property(nonatomic) _Bool hideAllRightButton; // @synthesize hideAllRightButton=_hideAllRightButton;
@property(nonatomic) _Bool isClickable; // @synthesize isClickable=_isClickable;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) _Bool showArrow; // @synthesize showArrow=_showArrow;
@property(nonatomic) _Bool showCornerRadiusStyle; // @synthesize showCornerRadiusStyle=_showCornerRadiusStyle;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSArray *animationImages; // @synthesize animationImages=_animationImages;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) NSString *tipsTitle; // @synthesize tipsTitle=_tipsTitle;
@property(retain, nonatomic) UIColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property(retain, nonatomic) id usrData; // @synthesize usrData=_usrData;
@property(nonatomic) __weak id <TipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTipsViewDoCustomMenuItem;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onLongPress:(id)arg1;
- (_Bool)accessibilityActivate;
- (void)onPerformRightButtonAccessibilityAction;
- (void)onPerformRightTailButtonAccessibilityAction;
- (id)accessibilityElements;
- (id)customActionsForAccessibilityElement;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onMessageStopPlaying;
- (void)onMessageStartPlaying;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)didMoveToWindow;
- (void)performExposeAction;
- (void)performIconAction;
- (void)performActionWithoutHideTipsView;
- (void)performAction;
- (void)performBgAction;
- (void)hideTipsView;
- (void)closeTipsView;
- (void)showTipsView:(double)arg1 withAnimationTimes:(id)arg2 AnimationValues:(id)arg3;
- (_Bool)isShowingTip;
- (void)showTipsViewForever;
- (void)showTipsView:(double)arg1;
- (void)didMoveToSuperview;
@property(readonly, copy) NSString *description;
- (id)getIconImageView;
- (void)layoutSubviews;
- (void)resetWaitingForConfirm;
- (void)setRightTrailButtonConfirmTitle:(id)arg1;
- (void)setRightTrailButtonTitle:(id)arg1;
- (void)setRightButtonTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTipsLayout:(double)arg1;
- (void)setTipsAccessibilityLabel:(id)arg1;
- (void)firstTapRightButton;
- (void)updateRightButtonAnimated:(_Bool)arg1;
- (void)updateRightButton;
- (void)setupLayout;
- (void)showOrHideExpandView;
- (void)showOrHideExpandViewAnimated:(_Bool)arg1;
- (void)hideExpandViewWithAnimated:(_Bool)arg1;
- (void)hideExpandView;
- (void)showExpandView;
- (void)initUIWithStyle:(long long)arg1 username:(id)arg2;
- (id)initWithStyle:(long long)arg1 username:(id)arg2 delegate:(id)arg3;
- (id)initWithUsername:(id)arg1 delegate:(id)arg2;
- (id)initWithStyle:(long long)arg1 delegate:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

