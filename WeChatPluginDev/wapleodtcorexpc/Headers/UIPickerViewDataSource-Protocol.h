//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIPickerView;

@protocol UIPickerViewDataSource <NSObject>
- (long long)pickerView:(UIPickerView *)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(UIPickerView *)arg1;
@end

