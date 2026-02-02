//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMPickerView, NSString;

@protocol MMPickerViewDelegate <NSObject>

@optional
- (void)MMPickerView:(MMPickerView *)arg1 didChooseRow:(long long)arg2 atSession:(long long)arg3;
- (void)MMPickerViewDidChooseRowTitle:(NSString *)arg1 atSessionTitle:(NSString *)arg2;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)MMPickerViewDidCancel;
@end

