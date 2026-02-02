//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, MMUITextField, MMWebImageView, NSString, TextStateIcon, UIImageView, UIImpactFeedbackGenerator, UITapGestureRecognizer, UIViewPropertyAnimator;
@protocol TextStatePublishCustomIconViewDelegate;

@interface TextStatePublishCustomIconView : UIView
{
    _Bool _enableSwitchIcon;
    _Bool _enableAutoReplaceIcon;
    _Bool _expanded;
    id <TextStatePublishCustomIconViewDelegate> _delegate;
    UIView *_backgroundView;
    MMWebImageView *_iconImageView;
    MMUIButton *_switchIconButton;
    UIImageView *_arrowImageView;
    MMUITextField *_descriptionTextField;
    MMUILabel *_titleLabel;
    UIView *_textBackgroundView;
    UIView *_footerView;
    MMUIButton *_cancelButton;
    MMUIButton *_doneButton;
    UIView *_verticalSeparator;
    MMUILabel *_tipsLabel;
    UIViewPropertyAnimator *_animator;
    UITapGestureRecognizer *_tapGesture;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    double _expandHeight;
    TextStateIcon *_autoReplacedIcon;
    TextStateIcon *_selectedIcon;
}

+ (id)generateActionButton;
+ (double)standardHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) TextStateIcon *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) TextStateIcon *autoReplacedIcon; // @synthesize autoReplacedIcon=_autoReplacedIcon;
@property(nonatomic) double expandHeight; // @synthesize expandHeight=_expandHeight;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *verticalSeparator; // @synthesize verticalSeparator=_verticalSeparator;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *textBackgroundView; // @synthesize textBackgroundView=_textBackgroundView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUITextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUIButton *switchIconButton; // @synthesize switchIconButton=_switchIconButton;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool enableAutoReplaceIcon; // @synthesize enableAutoReplaceIcon=_enableAutoReplaceIcon;
@property(nonatomic) _Bool enableSwitchIcon; // @synthesize enableSwitchIcon=_enableSwitchIcon;
@property(nonatomic) __weak id <TextStatePublishCustomIconViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mmTextFieldDidExceedMaxLen:(id)arg1;
- (void)mmTextFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onTapDoneButton;
- (void)onTapCancelButton;
- (void)onTapSwitchIconButton;
- (void)onEndEditDescription;
- (void)handleTapGesture:(id)arg1;
- (id)customIconDescription;
- (id)icon;
- (void)updateIcon;
- (void)setSwitchButtonSelected:(_Bool)arg1;
- (void)setSelectedIcon:(id)arg1 animated:(_Bool)arg2;
- (void)hideTips;
- (void)animateExpand;
- (void)resetToStandard;
- (_Bool)isAnimatorRunning;
- (_Bool)shrinkToStandardHeightWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)expandToHeight:(double)arg1 alongsideAnimation:(CDUnknownBlockType)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)initState;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)initGestures;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

