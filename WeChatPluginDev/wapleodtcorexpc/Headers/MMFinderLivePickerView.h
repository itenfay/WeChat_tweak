//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePickerViewConfig, MMUIButton, MMUILabel, NSArray, NSString, UIPickerView;
@protocol MMFinderLivePickerViewDelegate;

@interface MMFinderLivePickerView : UIView
{
    _Bool _isDismissed;
    id <MMFinderLivePickerViewDelegate> _delegate;
    MMFinderLivePickerViewConfig *_config;
    UIView *_backgroundView;
    UIView *_contentView;
    NSArray *_rows;
    MMUILabel *_titleLabel;
    MMUIButton *_cancelButton;
    MMUIButton *_confirmButton;
    UIPickerView *_pickerView;
    long long _selectedRow;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) _Bool isDismissed; // @synthesize isDismissed=_isDismissed;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMFinderLivePickerViewConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <MMFinderLivePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)getComponentColor;
- (id)getConfirmTitle;
- (id)getCancelTitle;
- (id)getConfirmColor;
- (id)getCancelColor;
- (id)getTitleColor;
- (id)getContentBGColor;
- (id)getBGColor;
- (id)genNavButton;
- (void)initUI;
- (void)onConfirm;
- (void)onCancel;
- (void)onBGTap:(id)arg1;
- (void)layoutSubviews;
- (void)selectRowWithTitle:(id)arg1;
- (void)selectRow:(unsigned long long)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (id)initWithTitleRows:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

