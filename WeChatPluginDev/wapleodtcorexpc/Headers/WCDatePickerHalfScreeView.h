//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSDate, UIDatePicker;

@interface WCDatePickerHalfScreeView : NSObject
{
    CDUnknownBlockType _confirmCallBack;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSDate *_selectedDate;
    UIDatePicker *_curDatePicker;
}

@property(retain, nonatomic) UIDatePicker *curDatePicker; // @synthesize curDatePicker=_curDatePicker;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(copy, nonatomic) CDUnknownBlockType confirmCallBack; // @synthesize confirmCallBack=_confirmCallBack;
- (void)onDone;
- (void)setupDetailView;
- (id)navigationRightButton;
- (id)initWithTitle:(id)arg1 minTime:(id)arg2 maxTime:(id)arg3 selectTime:(id)arg4;

@end
