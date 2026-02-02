//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMCommonPickerItem;

@protocol MMCommonPickerDelegate <NSObject>
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(MMCommonPickerItem *)arg3;
@end

