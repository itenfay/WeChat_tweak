//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class QIndoorPicker;

@protocol QIndoorPickerDelegate <NSObject>

@optional
- (void)indoorPicker:(QIndoorPicker *)arg1 didSelectLevelIndex:(unsigned long long)arg2;
@end

