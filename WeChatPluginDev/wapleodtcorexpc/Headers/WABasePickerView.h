//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FixTitleColorButton, NSString, UIPickerView, WABasePickerViewModel;
@protocol WAPickerViewDelegate;

@interface WABasePickerView : UIView
{
    _Bool _supportDark;
    _Bool _didAdjustSelectedRowToSeparatorStyle;
    _Bool _bOnlyShowPickerAndButton;
    WABasePickerViewModel *_model;
    id <WAPickerViewDelegate> _delegate;
    UIPickerView *_customPicker;
    UIView *_contentView;
    FixTitleColorButton *_cancelButton;
    FixTitleColorButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FixTitleColorButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) FixTitleColorButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIPickerView *customPicker; // @synthesize customPicker=_customPicker;
@property(nonatomic) _Bool bOnlyShowPickerAndButton; // @synthesize bOnlyShowPickerAndButton=_bOnlyShowPickerAndButton;
@property(nonatomic) __weak id <WAPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WABasePickerViewModel *model; // @synthesize model=_model;
- (double)contentHeight;
- (unsigned long long)itemStrLengthForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (void)hidePickerWithCompletion:(CDUnknownBlockType)arg1;
- (void)touchMask:(id)arg1;
- (void)showPickerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updatePickerView:(id)arg1 current:(long long)arg2 column:(long long)arg3;
- (void)updatePickerViewSelectedRow;
- (void)setViewModel:(id)arg1;
- (id)customPickerView;
- (void)setupUI;
- (void)initPickerWithViewModel:(id)arg1 supportDark:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

