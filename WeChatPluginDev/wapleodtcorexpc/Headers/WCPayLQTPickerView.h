//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIPickerView;
@protocol WCPayLQTPickerViewDelegate;

@interface WCPayLQTPickerView
{
    id <WCPayLQTPickerViewDelegate> _m_delegate;
    UIPickerView *_pickerView;
    long long _startDate;
    long long _endDate;
    long long _nowDate;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(retain) UIButton *button; // @synthesize button=_button;
@property long long nowDate; // @synthesize nowDate=_nowDate;
@property long long endDate; // @synthesize endDate=_endDate;
@property long long startDate; // @synthesize startDate=_startDate;
@property(retain) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property __weak id <WCPayLQTPickerViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)getValue;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)onTapButton;
- (void)onTapClose;
- (id)cancelButtonViewWithPushDirection:(unsigned long long)arg1;
- (void)updateButton;
- (void)updatePickerView;
- (void)updateView;
- (void)layoutSubviews;
- (void)setStartDate:(long long)arg1 endDate:(long long)arg2 nowDate:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

