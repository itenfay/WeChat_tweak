//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSDictionary, NSMutableDictionary;

@interface MJDatePickerViewModel : NSObject
{
    NSDate *_date;
    NSDictionary *_components;
    NSDictionary *_dataSource;
    NSMutableDictionary *_selectedDatas;
    unsigned long long _calendarUnit;
    NSCalendar *_calendar;
}

+ (id)descriptionForCalendarUnit:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) unsigned long long calendarUnit; // @synthesize calendarUnit=_calendarUnit;
@property(retain, nonatomic) NSMutableDictionary *selectedDatas; // @synthesize selectedDatas=_selectedDatas;
@property(retain, nonatomic) NSDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDictionary *components; // @synthesize components=_components;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)selectedIndexs;
- (id)selectedDate;
- (void)selectRow:(long long)arg1 inComponnet:(long long)arg2 reloadIfNeeded:(CDUnknownBlockType)arg3;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (long long)numberOfComponents;
- (long long)daysInThisYear:(long long)arg1 withMonth:(long long)arg2;
- (void)setupData;
- (id)initWithDate:(id)arg1 calendarUnit:(unsigned long long)arg2;

@end

