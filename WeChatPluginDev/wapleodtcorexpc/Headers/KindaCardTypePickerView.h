//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKCardTypePickerViewOnSelectCallback, MMKViewOnClickCallback, NSArray, NSString, WCBizPickerView, WCUITextField;

@interface KindaCardTypePickerView
{
    WCBizPickerView *m_pickerView;
    WCUITextField *m_textField;
    NSArray *m_options;
    MMKCardTypePickerViewOnSelectCallback *m_callback;
    MMKViewOnClickCallback *m_onClickCallback;
}

- (void).cxx_destruct;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)select:(int)arg1;
- (void)setOnSelectCallback:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setOnClickCallback:(id)arg1;
- (id)getView;
- (void)setHint:(id)arg1;
- (void)setTextSize:(float)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

