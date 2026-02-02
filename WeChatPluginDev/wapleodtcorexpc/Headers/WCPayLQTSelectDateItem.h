//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, UILabel, WCPayLQTPickerView, WCPayNavigationView;
@protocol WCPayLQTSelectDateItemDelegate;

@interface WCPayLQTSelectDateItem
{
    id <WCPayLQTSelectDateItemDelegate> _pickerDelegate;
    WCPayNavigationView *_navigationView;
    WCPayLQTPickerView *_picker;
    UILabel *_label;
    MMUIViewController *_currentVc;
}

- (void).cxx_destruct;
@property __weak MMUIViewController *currentVc; // @synthesize currentVc=_currentVc;
@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) WCPayLQTPickerView *picker; // @synthesize picker=_picker;
@property(retain) WCPayNavigationView *navigationView; // @synthesize navigationView=_navigationView;
@property __weak id <WCPayLQTSelectDateItemDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (void)setCurrentViewController:(id)arg1;
- (double)onWCPayLQTPickerViewSafeBottom;
- (void)onWCPayLQTPickerViewConfirm:(long long)arg1;
- (void)onWCPayLQTPickerViewCancel;
- (void)onSpaceTap;
- (void)hide;
- (void)becomeFirstResponder;
- (void)setStartDate:(long long)arg1 endDate:(long long)arg2 nowDate:(long long)arg3;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (void)onTapLabel;
- (void)updateView;
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

