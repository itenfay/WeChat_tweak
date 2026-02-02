//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TenpaySecureCtrl, UIButton, UILabel, UIPickerView, WCPayNavigationView, WCPaySelectDateItemData;

@interface WCPaySelectDateItem
{
    UIPickerView *m_pickerView;
    long long m_iStartYear;
    long long m_iBeginYear;
    long long m_iEndYear;
    NSString *m_value;
    TenpaySecureCtrl *m_secureCtrlItem;
    _Bool _canBeLongTerm;
    long long _startMonth;
    long long _startDay;
    long long _endMonth;
    long long _endDay;
    UILabel *_label;
    WCPayNavigationView *_backgroundView;
    WCPayNavigationView *_contentView;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UILabel *_pickerTitleView;
    NSString *_title;
    WCPaySelectDateItemData *_currentSelectedData;
}

+ (id)dataFromDate:(id)arg1;
+ (id)dateFromData:(id)arg1;
+ (long long)dayOfDate:(id)arg1;
+ (long long)monthOfDate:(id)arg1;
+ (long long)yearOfDate:(id)arg1;
- (void).cxx_destruct;
@property(retain) WCPaySelectDateItemData *currentSelectedData; // @synthesize currentSelectedData=_currentSelectedData;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) UILabel *pickerTitleView; // @synthesize pickerTitleView=_pickerTitleView;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) WCPayNavigationView *contentView; // @synthesize contentView=_contentView;
@property(retain) WCPayNavigationView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) UILabel *label; // @synthesize label=_label;
@property long long endDay; // @synthesize endDay=_endDay;
@property long long endMonth; // @synthesize endMonth=_endMonth;
@property long long startDay; // @synthesize startDay=_startDay;
@property long long startMonth; // @synthesize startMonth=_startMonth;
@property _Bool canBeLongTerm; // @synthesize canBeLongTerm=_canBeLongTerm;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (id)endData;
- (id)startData;
- (id)endDate;
- (id)startDate;
- (void)setStartYear:(long long)arg1 endYear:(long long)arg2 beginYear:(long long)arg3;
- (id)getPickerData;
- (id)getOriginData;
- (void)setOrignData:(id)arg1 labelColor:(id)arg2;
- (void)setOrignData:(id)arg1;
- (void)UIPickerViewDidFinish;
- (long long)selectedYear;
- (void)UIPickerViewDidCancel;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)firstYearRow;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (_Bool)isLeapYear:(long long)arg1;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)daysOfMonth:(long long)arg1 inYear:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)yearCount;
- (long long)selectedDayRow;
- (long long)selectedMonthRow;
- (long long)selectedYearRow;
- (void)onTapLabel;
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
- (void)updateView;
- (void)initView:(struct CGRect)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)getValue;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)updateTips:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

