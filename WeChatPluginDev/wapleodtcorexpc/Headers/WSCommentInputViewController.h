//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGrowTextView, MMUIButton, MMUILabel, NSString, UIScrollView, UIView;
@protocol WSCommentInputDelegate;

@interface WSCommentInputViewController
{
    _Bool _forbidSubmitBlank;
    _Bool _forbidSubmitOverLength;
    _Bool _initShowKeyboard;
    id <WSCommentInputDelegate> _delegate;
    UIScrollView *_bgView;
    NSString *_placeHolder;
    UIView *_inputPad;
    MMUIButton *_cancelButton;
    MMUIButton *_submitButton;
    MMGrowTextView *_imputField;
    MMUILabel *_countLabel;
    long long _maxInputLength;
    NSString *_oriInputText;
    unsigned long long _orientationMask;
}

+ (void)showInputWithPlaceHolder:(id)arg1 inputText:(id)arg2 initShowKeyboard:(_Bool)arg3 maxInputLength:(long long)arg4 orientation:(long long)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
@property(retain, nonatomic) NSString *oriInputText; // @synthesize oriInputText=_oriInputText;
@property(nonatomic) long long maxInputLength; // @synthesize maxInputLength=_maxInputLength;
@property(nonatomic) _Bool initShowKeyboard; // @synthesize initShowKeyboard=_initShowKeyboard;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MMGrowTextView *imputField; // @synthesize imputField=_imputField;
@property(retain, nonatomic) MMUIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *inputPad; // @synthesize inputPad=_inputPad;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) UIScrollView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool forbidSubmitOverLength; // @synthesize forbidSubmitOverLength=_forbidSubmitOverLength;
@property(nonatomic) _Bool forbidSubmitBlank; // @synthesize forbidSubmitBlank=_forbidSubmitBlank;
@property(nonatomic) __weak id <WSCommentInputDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (_Bool)isShow;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (_Bool)checkStringTrimmingWithString:(id)arg1;
- (void)configSupportOrietation:(unsigned long long)arg1;
- (void)configOrietation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateCountLabelFrame;
- (void)updatePadViewFrame:(_Bool)arg1 keyBoardHeight:(double)arg2;
- (void)hideSelf;
- (void)clickSubmit:(id)arg1;
- (void)clickCancel:(id)arg1;
- (void)clickEmptyBgView:(id)arg1;
- (void)clickPadView:(id)arg1;
- (void)initSubviews;
- (void)viewDidLoad;
- (id)initWithPlaceHoler:(id)arg1 inputText:(id)arg2 initShowKeyboard:(_Bool)arg3 maxInputLength:(long long)arg4 orientation:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

