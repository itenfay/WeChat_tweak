//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKValidDatePickerViewOnSelectCallback, NSString, UIButton, UIPickerView, UIView, WCUITextField;

@interface KindaValidDatePickerView
{
    UIPickerView *m_pickerView;
    WCUITextField *m_textField;
    NSString *validDate;
    MMKValidDatePickerViewOnSelectCallback *m_callback;
    int m_iStartYear;
    UIView *_m_textFieldInputView;
    UIView *_m_contentView;
    UIButton *_m_cancelButton;
    UIButton *_m_confirmButton;
    UIView *_m_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *m_backgroundView; // @synthesize m_backgroundView=_m_backgroundView;
@property(retain, nonatomic) UIButton *m_confirmButton; // @synthesize m_confirmButton=_m_confirmButton;
@property(retain, nonatomic) UIButton *m_cancelButton; // @synthesize m_cancelButton=_m_cancelButton;
@property(retain, nonatomic) UIView *m_contentView; // @synthesize m_contentView=_m_contentView;
@property(retain, nonatomic) UIView *m_textFieldInputView; // @synthesize m_textFieldInputView=_m_textFieldInputView;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)getText;
- (void)setOnSelectCallback:(id)arg1;
- (id)getView;
- (_Bool)getFocus;
- (void)accessibilityFocusPickerView;
- (void)setFocus:(_Bool)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

