//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGrowTextView, MMUIButton, MMUILabel, NSArray, NSString, UIColor, UIView, WCInputController;

@interface MMFinderLiveLinkPromoteEditPanel
{
    _Bool _resignFirstResponderOnTap;
    _Bool _isKeyboardShow;
    _Bool _hasClickInputTipLabel;
    _Bool _isPageWillClose;
    unsigned long long _keyboardAdjustBehavior;
    MMUIButton *_rightButton;
    UIView *_contentView;
    UIView *_inputContentBackView;
    MMGrowTextView *_growTextView;
    WCInputController *_inputController;
    MMUILabel *_inputTipLabel;
    MMUILabel *_errorTipLabel;
    double _keyboardHeight;
    NSArray *_extensionLinkAllowedList;
    NSString *_copiedArticleLink;
    UIColor *_tipLabelColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *tipLabelColor; // @synthesize tipLabelColor=_tipLabelColor;
@property(nonatomic) _Bool isPageWillClose; // @synthesize isPageWillClose=_isPageWillClose;
@property(nonatomic) _Bool hasClickInputTipLabel; // @synthesize hasClickInputTipLabel=_hasClickInputTipLabel;
@property(retain, nonatomic) NSString *copiedArticleLink; // @synthesize copiedArticleLink=_copiedArticleLink;
@property(retain, nonatomic) NSArray *extensionLinkAllowedList; // @synthesize extensionLinkAllowedList=_extensionLinkAllowedList;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isKeyboardShow; // @synthesize isKeyboardShow=_isKeyboardShow;
@property(retain, nonatomic) MMUILabel *errorTipLabel; // @synthesize errorTipLabel=_errorTipLabel;
@property(retain, nonatomic) MMUILabel *inputTipLabel; // @synthesize inputTipLabel=_inputTipLabel;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIView *inputContentBackView; // @synthesize inputContentBackView=_inputContentBackView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) _Bool resignFirstResponderOnTap; // @synthesize resignFirstResponderOnTap=_resignFirstResponderOnTap;
@property(nonatomic) unsigned long long keyboardAdjustBehavior; // @synthesize keyboardAdjustBehavior=_keyboardAdjustBehavior;
@property(readonly, nonatomic) NSString *validUriPrefixes;
- (id)placeholderText;
@property(readonly, nonatomic) NSString *titleText;
- (_Bool)checkLinkTextValid:(id)arg1;
- (void)updateCopiedArticleLink:(id)arg1;
- (void)detectCopyArticleLink;
@property(readonly, nonatomic) _Bool hasCopyArticleLink;
- (void)getExtensionLinkAllowedList;
- (void)animateAdjustTextViewWithDuration:(double)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showErrorTips:(id)arg1;
- (void)makeInputBecomeFirstResponder;
- (double)getVisibleHeight;
- (void)textViewTextDidChange;
- (void)didCommitText:(id)arg1;
- (void)onInputTipLabelTap:(id)arg1;
- (void)onLinkConfirmed:(id)arg1;
- (void)onRightButtonAction;
- (void)onLeftButtonAction;
- (void)updateInputTipLabelHidden;
- (void)updateNavRightButtonEnable;
- (void)initInputController;
- (void)layoutErrorTipLabel;
- (void)layoutInputTipLabel;
- (void)updateInputTipLabel:(id)arg1;
- (double)getGrowTextViewHeight;
- (void)layoutGrowTextView;
- (void)layoutInputContentBackView;
- (void)updateDetailViewFrameAnimated:(_Bool)arg1;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutContentView;
- (void)layoutOtherUI;
- (void)layoutUI;
- (id)getCurrentRightButton;
- (id)getCurrentLeftButton;
- (void)onPageSheetContainerBgTapped;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetWillAppear;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)initNotifications;
- (id)getGrowTextView;
- (void)innerInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

