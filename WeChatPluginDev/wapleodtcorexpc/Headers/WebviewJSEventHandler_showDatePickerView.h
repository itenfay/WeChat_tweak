//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, MMPageSheetAdapter, NSMutableArray, NSString, UIPickerView, UIToolbar, UIView, WADateTimePickerView;

@interface WebviewJSEventHandler_showDatePickerView
{
    struct MMDates m_minDate;
    struct MMDates m_maxDate;
    struct MMDates m_currentDate;
    struct MMDates m_selectedDate;
    long long componentsOfPickerView;
    JSEvent *_jsEvent;
    NSMutableArray *_m_yearData;
    NSMutableArray *_m_monthData;
    NSMutableArray *_m_dayData;
    UIToolbar *_m_toolBar;
    UIPickerView *_m_pickerView;
    UIView *_m_blackView;
    UIView *_m_containView;
    UIView *_m_blackLine;
    WADateTimePickerView *_datePicker;
    MMPageSheetAdapter *_pageSheetAdapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) WADateTimePickerView *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UIView *m_blackLine; // @synthesize m_blackLine=_m_blackLine;
@property(retain, nonatomic) UIView *m_containView; // @synthesize m_containView=_m_containView;
@property(retain, nonatomic) UIView *m_blackView; // @synthesize m_blackView=_m_blackView;
@property(retain, nonatomic) UIPickerView *m_pickerView; // @synthesize m_pickerView=_m_pickerView;
@property(retain, nonatomic) UIToolbar *m_toolBar; // @synthesize m_toolBar=_m_toolBar;
@property(retain, nonatomic) NSMutableArray *m_dayData; // @synthesize m_dayData=_m_dayData;
@property(retain, nonatomic) NSMutableArray *m_monthData; // @synthesize m_monthData=_m_monthData;
@property(retain, nonatomic) NSMutableArray *m_yearData; // @synthesize m_yearData=_m_yearData;
- (void)onDateTimeConfirm:(id)arg1;
- (void)onCancel;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)showNewDatePickerWithParamDict:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)resignPickerView;
- (void)cancelBtnClicked;
- (void)doneBtnClicked;
- (void)reloadDatePickerView;
- (void)onMainWindowFrameChanged;
- (void)accessibilityFocusPickerView;
- (void)initDatePickerView;
- (void)enableSwipePop;
- (void)disableSwipePop;
- (id)printDate:(struct MMDates)arg1;
- (long long)checkValidOfDay:(long long)arg1 AndMonth:(long long)arg2 AndDay:(long long)arg3;
- (void)jumpToCurrentDate:(_Bool)arg1;
- (void)initDate;
- (void)initData:(id)arg1;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

