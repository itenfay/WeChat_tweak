//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class DiscoverEntranceSettingSheetView, NSMutableArray, UISwitch;

@protocol DiscoverEntranceSettingSheetViewDelegate <NSObject>
- (void)onSheetDisppearWithSwitchChanged:(NSMutableArray *)arg1;
- (void)onSwitchChanged:(UISwitch *)arg1 switchType:(unsigned long long)arg2 sheetView:(DiscoverEntranceSettingSheetView *)arg3;
@end

