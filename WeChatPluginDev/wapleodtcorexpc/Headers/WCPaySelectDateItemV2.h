//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPanelView, NSString, TenpaySecureCtrl, UILabel, UIPickerView, WCPaySelectDateItemData;

@interface WCPaySelectDateItemV2
{
    UIPickerView *m_pickerView;
    long long m_iStartYear;
    long long m_iEndYear;
    NSString *m_value;
    TenpaySecureCtrl *m_secureCtrlItem;
    _Bool _canBeLongTerm;
    UILabel *_label;
    MMPanelView *_panelView;
    long long _startMonth;
    long long _startDay;
    long long _endMonth;
    long long _endDay;
    NSString *_title;
    double _contentMaxWidth;
    WCPaySelectDateItemData *_currentSelectedData;
}

+ (id)dataFromDate:(id)arg1;
+ (id)dateFromData:(id)arg1;
+ (long long)dayOfDate:(id)arg1;
+ (long long)monthOfDate:(id)arg1;
+ (long long)yearOfDate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPaySelectDateItemData *currentSelectedData; // @synthesize currentSelectedData=_currentSelectedData;
@property(nonatomic) double contentMaxWidth; // @synthesize contentMaxWidth=_contentMaxWidth;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long endDay; // @synthesize endDay=_endDay;
@property(nonatomic) long long endMonth; // @synthesize endMonth=_endMonth;
@property(nonatomic) long long startDay; // @synthesize startDay=_startDay;
@property(nonatomic) long long startMonth; // @synthesize startMonth=_startMonth;
@property(retain, nonatomic) MMPanelView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool canBeLongTerm; // @synthesize canBeLongTerm=_canBeLongTerm;
- (id)currentAccessibilityDesc;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
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
- (id)monthWordingInEngligh:(long long)arg1;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)firstYearRow;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (_Bool)isLeapYear:(long long)arg1;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)reloadPickerViewContentAfterSelectYear;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)daysOfMonth:(long long)arg1 inYear:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)yearCount;
- (long long)selectedDayRow;
- (long long)selectedMonthRow;
- (long long)selectedYearRow;
- (void)onTapLabel;
- (void)updateLabel;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)updateContentMaxWidth:(double)arg1;
- (id)getValue;
- (void)updateTips:(id)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

