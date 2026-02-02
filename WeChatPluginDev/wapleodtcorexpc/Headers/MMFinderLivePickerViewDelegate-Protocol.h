//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePickerView, NSString;

@protocol MMFinderLivePickerViewDelegate <NSObject>

@optional
- (void)pickerViewWillDissmiss:(MMFinderLivePickerView *)arg1;
- (void)pickerView:(MMFinderLivePickerView *)arg1 didSelectRowTitle:(NSString *)arg2;
- (void)pickerView:(MMFinderLivePickerView *)arg1 didSelectRow:(unsigned long long)arg2;
@end

