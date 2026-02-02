//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIPickerView;
@protocol WACustomPickerDelegate;

@interface WACommonPickerView : UIView
{
    _Bool _didAdjustSelectedRowToSeparatorStyle;
    id <WACustomPickerDelegate> _delegate;
    long long _selected;
    UIPickerView *_customPicker;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIPickerView *customPicker; // @synthesize customPicker=_customPicker;
@property(nonatomic) long long selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <WACustomPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)adjustPickerSelectedRowToSeparatorStyle:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (long long)getItemNum;
- (id)getValue;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)initWithItems:(id)arg1 supportDark:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

