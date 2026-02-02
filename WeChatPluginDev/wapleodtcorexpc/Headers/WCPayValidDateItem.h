//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, UIButton, UIPickerView;

@interface WCPayValidDateItem
{
    UIPickerView *m_pickerView;
    int m_iStartYear;
    NSString *m_value;
    UIButton *m_tipBtn;
    MMUIViewController *m_viewController;
    NSString *m_nsTipTitle;
    NSString *m_nsTipContent;
}

- (void).cxx_destruct;
- (void)setTipContent:(id)arg1 Title:(id)arg2;
- (void)setTipBtnShowed:(_Bool)arg1;
- (void)showValidTip;
- (void)setViewController:(id)arg1;
- (void)addTipBtnTarget:(id)arg1 sel:(SEL)arg2;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)initView:(struct CGRect)arg1;
- (id)getValue;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

