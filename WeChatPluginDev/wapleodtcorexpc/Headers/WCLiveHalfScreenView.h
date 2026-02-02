//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, RichTextView, UIButton, UIColor;

@interface WCLiveHalfScreenView
{
    _Bool _hasCancelButton;
    _Bool _isShorterHalfVC;
    _Bool _useBoldTitle;
    _Bool _isShown;
    MMUILabel *_infoTitle;
    RichTextView *_infoDesc;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    NSString *_desc;
    CDUnknownBlockType _confirmCallback;
    CDUnknownBlockType _cancelCallback;
    NSString *_confirmButtonLabel;
    NSString *_cancelButtonLabel;
    UIColor *_singleConfirmButtonBgColor;
    UIColor *_singleConfirmButtonFgColor;
    UIColor *_confirmButtonBgColor;
    UIColor *_confirmButtonFgColor;
    UIColor *_cancelButtonBgColor;
    UIColor *_cancelButtonFgColor;
    UIColor *_titleColor;
    UIColor *_descColor;
    double _descTextSize;
    long long _titleAlignment;
    long long _descAlignment;
    double _buttonBottomMargin;
    double _configHalfScreenHeight;
    double _titleTopMargin;
    double _titleDescGap;
    double _viewLeftRightMargin;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(nonatomic) _Bool useBoldTitle; // @synthesize useBoldTitle=_useBoldTitle;
@property(nonatomic) double viewLeftRightMargin; // @synthesize viewLeftRightMargin=_viewLeftRightMargin;
@property(nonatomic) double titleDescGap; // @synthesize titleDescGap=_titleDescGap;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(nonatomic) double configHalfScreenHeight; // @synthesize configHalfScreenHeight=_configHalfScreenHeight;
@property(nonatomic) double buttonBottomMargin; // @synthesize buttonBottomMargin=_buttonBottomMargin;
@property(nonatomic) long long descAlignment; // @synthesize descAlignment=_descAlignment;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) double descTextSize; // @synthesize descTextSize=_descTextSize;
@property(retain, nonatomic) UIColor *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *cancelButtonFgColor; // @synthesize cancelButtonFgColor=_cancelButtonFgColor;
@property(retain, nonatomic) UIColor *cancelButtonBgColor; // @synthesize cancelButtonBgColor=_cancelButtonBgColor;
@property(retain, nonatomic) UIColor *confirmButtonFgColor; // @synthesize confirmButtonFgColor=_confirmButtonFgColor;
@property(retain, nonatomic) UIColor *confirmButtonBgColor; // @synthesize confirmButtonBgColor=_confirmButtonBgColor;
@property(retain, nonatomic) UIColor *singleConfirmButtonFgColor; // @synthesize singleConfirmButtonFgColor=_singleConfirmButtonFgColor;
@property(retain, nonatomic) UIColor *singleConfirmButtonBgColor; // @synthesize singleConfirmButtonBgColor=_singleConfirmButtonBgColor;
@property(nonatomic) _Bool isShorterHalfVC; // @synthesize isShorterHalfVC=_isShorterHalfVC;
@property(nonatomic) _Bool hasCancelButton; // @synthesize hasCancelButton=_hasCancelButton;
@property(retain, nonatomic) NSString *cancelButtonLabel; // @synthesize cancelButtonLabel=_cancelButtonLabel;
@property(retain, nonatomic) NSString *confirmButtonLabel; // @synthesize confirmButtonLabel=_confirmButtonLabel;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType confirmCallback; // @synthesize confirmCallback=_confirmCallback;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) RichTextView *infoDesc; // @synthesize infoDesc=_infoDesc;
@property(retain, nonatomic) MMUILabel *infoTitle; // @synthesize infoTitle=_infoTitle;
- (void)notifySelfPopedOrDismissed;
- (void)popOrDismissSelfWithCompletion:(CDUnknownBlockType)arg1;
- (void)popOrDismissSelf;
- (void)onArrowButtonClicked;
- (void)onCancelButtonClicked;
- (void)onConfirmButtonClicked;
- (void)layoutConfrimAndCancelButtons;
- (void)updateConfirmButtonLayout;
- (void)layoutLiveConfirmButton;
- (void)layoutUI;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 andDesc:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

