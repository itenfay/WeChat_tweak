//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIDatePicker, UIPickerView;
@protocol WADateTimePickerDelegate;

@interface WADateTimePickerView
{
    UIDatePicker *_picker;
    UIPickerView *_customPicker;
    NSString *_format;
    long long _pickerMode;
    int _customMode;
    int _curYear;
    int _curMonth;
    int _minYear;
    int _maxYear;
    int _minMonth;
    int _maxMonth;
    int _minCurrentMonth;
    int _maxCurrentMonth;
    _Bool _didAdjustSelectedRowToSeparatorStyle;
}

- (void).cxx_destruct;
- (void)adjustPickerSelectedRowToSeparatorStyle:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (id)getValue;
- (void)setRangeFrom:(id)arg1 toEnd:(id)arg2;
- (void)setCurrent:(int)arg1 month:(int)arg2;
- (void)setValue:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)resetMonth;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)layoutSubviews;
- (id)customPickerView;
- (void)initPicker:(long long)arg1 field:(id)arg2 supportDark:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <WADateTimePickerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

