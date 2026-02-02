//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMActionSheetDatePicker, NSDate;

@protocol MMActionSheetDatePickerDelegate <NSObject>

@optional
- (_Bool)datePicker:(MMActionSheetDatePicker *)arg1 shouldSelectDate:(NSDate *)arg2;
- (void)datePickerConfirm:(MMActionSheetDatePicker *)arg1;
- (void)datePickerCancel:(MMActionSheetDatePicker *)arg1;
@end

