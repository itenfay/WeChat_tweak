//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTagTextField, MMUILabel, NSString, UIBarButtonItem, UIButton, UIColor, UIImage, UIImageView, UILabel, UIStackView, WCSearchViewController, _TtC6WeChat36SearchInteractiveVoiceInputViewModel, _TtC6WeChat39SearchVoiceInputAccessoryViewController;

@interface WCSearchBar : UIView
{
    _Bool _enableVoiceInput;
    _Bool _isFTS;
    MMTagTextField *_textField;
    UIView *_searchBoxContainer;
    UIBarButtonItem *_leftBarButtonItem;
    UIBarButtonItem *_rightBarButtonItem;
    unsigned long long _clearButtonMode;
    WCSearchViewController *_presentingViewController;
    UIColor *_voiceButtonBackgroundColor;
    UIView *_clearButtonSpaceView;
    MMUILabel *_titleLabel;
    UIColor *_searchBoxContainerColor;
    UIView *_bottomLineView;
    UIView *_leftBoxSpacer;
    UIView *_rightBoxSpacer;
    _TtC6WeChat39SearchVoiceInputAccessoryViewController *_inputAccessoryViewController;
    UIView *_voiceInputView;
    _TtC6WeChat36SearchInteractiveVoiceInputViewModel *_voiceInputViewModel;
    UIButton *_clearButton;
    UIStackView *_rootStackView;
    UIStackView *_searchBox;
    UIImageView *_leftIconView;
    UILabel *_placeHolderLabel;
    CDUnknownBlockType _tapHandler;
    CDUnknownBlockType _voiceInputRightOpHandler;
    CDUnknownBlockType _voiceInputBottomHandler;
    CDUnknownBlockType _voiceInputResultHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType voiceInputResultHandler; // @synthesize voiceInputResultHandler=_voiceInputResultHandler;
@property(copy, nonatomic) CDUnknownBlockType voiceInputBottomHandler; // @synthesize voiceInputBottomHandler=_voiceInputBottomHandler;
@property(copy, nonatomic) CDUnknownBlockType voiceInputRightOpHandler; // @synthesize voiceInputRightOpHandler=_voiceInputRightOpHandler;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) UIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
@property(retain, nonatomic) UIStackView *searchBox; // @synthesize searchBox=_searchBox;
@property(retain, nonatomic) UIStackView *rootStackView; // @synthesize rootStackView=_rootStackView;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) _TtC6WeChat36SearchInteractiveVoiceInputViewModel *voiceInputViewModel; // @synthesize voiceInputViewModel=_voiceInputViewModel;
@property(retain, nonatomic) UIView *voiceInputView; // @synthesize voiceInputView=_voiceInputView;
@property(retain, nonatomic) _TtC6WeChat39SearchVoiceInputAccessoryViewController *inputAccessoryViewController; // @synthesize inputAccessoryViewController=_inputAccessoryViewController;
@property(retain, nonatomic) UIView *rightBoxSpacer; // @synthesize rightBoxSpacer=_rightBoxSpacer;
@property(retain, nonatomic) UIView *leftBoxSpacer; // @synthesize leftBoxSpacer=_leftBoxSpacer;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIColor *searchBoxContainerColor; // @synthesize searchBoxContainerColor=_searchBoxContainerColor;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *clearButtonSpaceView; // @synthesize clearButtonSpaceView=_clearButtonSpaceView;
@property(retain, nonatomic) UIColor *voiceButtonBackgroundColor; // @synthesize voiceButtonBackgroundColor=_voiceButtonBackgroundColor;
@property(nonatomic) _Bool isFTS; // @synthesize isFTS=_isFTS;
@property(nonatomic) __weak WCSearchViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) unsigned long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(nonatomic) _Bool enableVoiceInput; // @synthesize enableVoiceInput=_enableVoiceInput;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem; // @synthesize leftBarButtonItem=_leftBarButtonItem;
@property(retain, nonatomic) UIView *searchBoxContainer; // @synthesize searchBoxContainer=_searchBoxContainer;
@property(retain, nonatomic) MMTagTextField *textField; // @synthesize textField=_textField;
- (_Bool)isUseInteractiveVoiceInput;
- (double)voiceInputButtonHeight;
- (void)showEmptyResultToast;
- (void)onVoiceInputReleaseTooFast;
- (void)onVoiceInputWithResult:(id)arg1;
- (void)onVoiceInputTapBackgroud;
- (void)onVoiceInputEnd;
- (void)onVoiceInputStart;
- (void)applicationResignActive;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addVoiceSearchInputResultAction:(CDUnknownBlockType)arg1;
- (void)addVoiceSearchBottomAction:(CDUnknownBlockType)arg1;
- (void)addVoiceSearchRightOpAction:(CDUnknownBlockType)arg1;
- (void)setPresentSearchActive:(_Bool)arg1;
- (void)addTapSearchAction:(CDUnknownBlockType)arg1;
- (void)makeConstraintsForBarButton:(id)arg1;
- (void)showsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *leftIconImage;
@property(nonatomic) _Bool isShowSearchBoxBorder;
@property(copy, nonatomic) NSString *placeholder;
- (void)showTextField;
- (void)showTitle:(id)arg1;
- (void)onTextFieldEditingDidEnd:(id)arg1;
- (void)onTextFieldEditingDidBegin:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)showClearButtonSpace:(_Bool)arg1;
@property(nonatomic) _Bool showBottomLine;
- (id)newTextField;
- (void)arrangeBaseUIElements;
- (void)initContanerView;
- (void)setUnactiveStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

