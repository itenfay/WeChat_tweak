//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMCommonActionSheetPicker, MMCommonPickerItem, NSArray;

@protocol MMCommonActionSheetPickerDelegate <NSObject>

@optional
- (void)commonActionSheetPicker:(MMCommonActionSheetPicker *)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(MMCommonPickerItem *)arg4;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(MMCommonPickerItem *)arg3;
- (void)commonPickerConfirm:(MMCommonActionSheetPicker *)arg1 selectedRows:(NSArray *)arg2;
- (void)commonPickerConfirm:(MMCommonActionSheetPicker *)arg1;
- (void)commonPickerCancel:(MMCommonActionSheetPicker *)arg1;
- (void)commonPickerDismissed:(MMCommonActionSheetPicker *)arg1;
@end

