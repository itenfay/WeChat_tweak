//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FixTitleColorButton, MMFinderLiveGenericPickerViewConfig, NSString, UILabel, UIPickerView;
@protocol MMFinderLiveGenericPickerViewDelegate;

@interface MMFinderLiveGenericPickerView : UIView
{
    id <MMFinderLiveGenericPickerViewDelegate> _delegate;
    id _userInfo;
    UIView *_bgView;
    UIView *_pickerContainerView;
    UILabel *_titleLabel;
    UIView *_lineView;
    FixTitleColorButton *_cancelButton;
    FixTitleColorButton *_confirmButton;
    UIPickerView *_pickerView;
    MMFinderLiveGenericPickerViewConfig *_config;
    long long _selectedRow;
}

- (void).cxx_destruct;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) MMFinderLiveGenericPickerViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) FixTitleColorButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) FixTitleColorButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *pickerContainerView; // @synthesize pickerContainerView=_pickerContainerView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <MMFinderLiveGenericPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onConfirmButtonClick;
- (void)onCancelButtonClick;
- (void)onBGTap:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

