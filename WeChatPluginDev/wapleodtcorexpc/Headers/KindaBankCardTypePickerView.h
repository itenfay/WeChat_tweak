//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBankCardType, MMKBankCardTypePickerViewOnSelectCallback, MMKViewOnClickCallback, NSArray, NSMutableArray, NSMutableDictionary, NSString, WCBizPickerView, WCUITextField;

@interface KindaBankCardTypePickerView
{
    WCBizPickerView *m_pickerView;
    WCUITextField *m_textField;
    NSArray *m_bankCardTypeArray;
    MMBankCardType *m_selectedBankType;
    MMKBankCardTypePickerViewOnSelectCallback *m_onSelectCallback;
    MMKViewOnClickCallback *m_onClickCallback;
    NSMutableArray *m_arrBankName;
    NSMutableDictionary *m_dicRows;
    long long m_iCurrentSectoin;
}

- (void).cxx_destruct;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)getView;
- (id)getStringFrom:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setOnClickCallback:(id)arg1;
- (void)setOnSelectCallback:(id)arg1;
- (id)getValue;
- (void)setValue:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)setSelectedBankCardType:(id)arg1;
- (void)setBankCardType:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

