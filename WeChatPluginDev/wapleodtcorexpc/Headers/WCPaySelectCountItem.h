//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UIPickerView, WCPayNavigationView;

@interface WCPaySelectCountItem
{
    UIPickerView *m_pickerView;
    long long m_iStartCount;
    long long m_iEndCount;
    NSString *m_value;
    long long _m_count;
    UILabel *_label;
    WCPayNavigationView *_backgroundView;
    WCPayNavigationView *_contentView;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UILabel *_pickerTitleView;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) UILabel *pickerTitleView; // @synthesize pickerTitleView=_pickerTitleView;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) WCPayNavigationView *contentView; // @synthesize contentView=_contentView;
@property(retain) WCPayNavigationView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) UILabel *label; // @synthesize label=_label;
@property long long m_count; // @synthesize m_count=_m_count;
- (long long)getCount;
- (void)setDefaultCount:(long long)arg1;
- (void)setStartCount:(long long)arg1 endCount:(long long)arg2;
- (void)UIPickerViewDidFinish;
- (void)UIPickerViewDidCancel;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)updatePickerView;
- (void)onClickConfirm;
- (void)onClickCancel;
- (void)updateConfirmButton;
- (void)updatePickerTitleView;
- (void)updateCancelButton;
- (void)updateContentView;
- (void)onTapBackgroundView;
- (void)updateBackgroudView;
- (void)updateLabel;
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

