//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIPickerView.h>

@class NSDate, NSMutableArray, NSString;

@interface MMScheduleDatePickerView : UIPickerView
{
    NSDate *_currentDate;
    NSDate *_preferredDate;
    NSMutableArray *_dayComponents;
    NSMutableArray *_hourComponents;
    NSMutableArray *_minuteComponents;
    NSMutableArray *_firstDayHourComponents;
    NSMutableArray *_firstHourMinuteComponents;
    NSMutableArray *_normalHourComponents;
    NSMutableArray *_normalMinuteComponents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *normalMinuteComponents; // @synthesize normalMinuteComponents=_normalMinuteComponents;
@property(retain, nonatomic) NSMutableArray *normalHourComponents; // @synthesize normalHourComponents=_normalHourComponents;
@property(retain, nonatomic) NSMutableArray *firstHourMinuteComponents; // @synthesize firstHourMinuteComponents=_firstHourMinuteComponents;
@property(retain, nonatomic) NSMutableArray *firstDayHourComponents; // @synthesize firstDayHourComponents=_firstDayHourComponents;
@property(retain, nonatomic) NSMutableArray *minuteComponents; // @synthesize minuteComponents=_minuteComponents;
@property(retain, nonatomic) NSMutableArray *hourComponents; // @synthesize hourComponents=_hourComponents;
@property(retain, nonatomic) NSMutableArray *dayComponents; // @synthesize dayComponents=_dayComponents;
@property(retain, nonatomic) NSDate *preferredDate; // @synthesize preferredDate=_preferredDate;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
- (id)selectedDate;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)getDayStringAfterDay:(unsigned int)arg1;
- (void)initData;
- (void)didAddSubview:(id)arg1;
- (id)initWithPreferredDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

