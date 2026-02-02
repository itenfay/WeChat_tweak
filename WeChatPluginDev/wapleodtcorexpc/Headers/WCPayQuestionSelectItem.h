//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, WCBizPickerView;

@interface WCPayQuestionSelectItem
{
    UILabel *m_textLabel;
    WCBizPickerView *m_pickerView;
    NSString *m_status;
}

- (void).cxx_destruct;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void)WCBizPickerViewDidCancel;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)setText:(id)arg1;
- (id)getValue;
- (void)becomeFirstResponder;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

