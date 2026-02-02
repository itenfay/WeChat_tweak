//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UITextField, UIView;

@interface MMFinderLiveAnchorCustomizeRewardTextOptionContentView
{
    _Bool _keyboardShowing;
    CDUnknownBlockType _isInputTextInvalid;
    CDUnknownBlockType _onInputTextChanged;
    CDUnknownBlockType _onInputTextConfirm;
    CDUnknownBlockType _onInputTextCancel;
    UIView *_textFieldContainer;
    UITextField *_textField;
    MMUIButton *_textFieldConfirmButton;
    MMUILabel *_alertMessageLabel;
    long long _maxTextLength;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool keyboardShowing; // @synthesize keyboardShowing=_keyboardShowing;
@property(nonatomic) long long maxTextLength; // @synthesize maxTextLength=_maxTextLength;
@property(retain, nonatomic) MMUILabel *alertMessageLabel; // @synthesize alertMessageLabel=_alertMessageLabel;
@property(retain, nonatomic) MMUIButton *textFieldConfirmButton; // @synthesize textFieldConfirmButton=_textFieldConfirmButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *textFieldContainer; // @synthesize textFieldContainer=_textFieldContainer;
@property(copy, nonatomic) CDUnknownBlockType onInputTextCancel; // @synthesize onInputTextCancel=_onInputTextCancel;
@property(copy, nonatomic) CDUnknownBlockType onInputTextConfirm; // @synthesize onInputTextConfirm=_onInputTextConfirm;
@property(copy, nonatomic) CDUnknownBlockType onInputTextChanged; // @synthesize onInputTextChanged=_onInputTextChanged;
@property(copy, nonatomic) CDUnknownBlockType isInputTextInvalid; // @synthesize isInputTextInvalid=_isInputTextInvalid;
- (double)contentPerferHeight;
- (id)clipString:(id)arg1 byAsciiLengthLimit:(long long)arg2;
- (void)textFieldDidChangeContent:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (void)onConfirmButtonClicked;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setAlertMessageWithString:(id)arg1;
- (void)setTextFeildInputText:(id)arg1;
- (void)layoutSubviews;
- (void)setupNotifications;
- (void)initAlertMessageLabel;
- (void)initTextFieldConfirmButton;
- (void)initTextField;
- (void)initTextFieldContainer;
- (id)initWithMaxTextLength:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

