//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIButton, UIColor, UIImageView, UITextView, UIView, WABackgroundRootButton;
@protocol WAAlertDialogDelegate;

@interface WAAlertDialog
{
    WABackgroundRootButton *_backgroundRoot;
    UIView *_contentView;
    UIImageView *_contentBg;
    MMUILabel *_tipsTitleLabel;
    UITextView *_tipsContentLabel;
    UITextView *_tipsPlaceHolderLabel;
    _Bool _editable;
    _Bool _isUpper;
    id <WAAlertDialogDelegate> _delegate;
    NSString *_curInputText;
    long long _dialogId;
    NSString *_contentText;
    NSString *_titleText;
    NSString *_placeHolderText;
    NSString *_confirmText;
    NSString *_cancelText;
    UIColor *_confirmColor;
    UIColor *_cancelColor;
    UIView *_view;
    UIView *_alignView;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) __weak UIView *alignView; // @synthesize alignView=_alignView;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIColor *cancelColor; // @synthesize cancelColor=_cancelColor;
@property(retain, nonatomic) UIColor *confirmColor; // @synthesize confirmColor=_confirmColor;
@property(nonatomic) _Bool isUpper; // @synthesize isUpper=_isUpper;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) NSString *cancelText; // @synthesize cancelText=_cancelText;
@property(retain, nonatomic) NSString *confirmText; // @synthesize confirmText=_confirmText;
@property(retain, nonatomic) NSString *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(nonatomic) long long dialogId; // @synthesize dialogId=_dialogId;
@property(retain, nonatomic) NSString *curInputText; // @synthesize curInputText=_curInputText;
@property(readonly, nonatomic) WABackgroundRootButton *backgroundRoot; // @synthesize backgroundRoot=_backgroundRoot;
@property(nonatomic) __weak id <WAAlertDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)getContentText;
- (id)getTitleText;
- (id)getInputText;
- (void)bringToFront;
- (void)fadeIn:(double)arg1;
- (void)hide;
- (void)onClickBtn:(id)arg1;
- (void)onTapBackground;
- (void)orientationDidChange;
- (void)updateSubViewsFrame;
- (id)bulidNSAttributedStringText:(id)arg1 onlyTitle:(_Bool)arg2 onlyContent:(_Bool)arg3;
- (void)buildDialog;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 alignView:(id)arg2;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

