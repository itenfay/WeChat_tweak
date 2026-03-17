//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAMediaCastingRoutePickerDeviceItem, WAMediaCastingRoutePickerView;

@protocol WAMediaCastingRoutePickerViewDelegate <NSObject>
- (void)didSelectGuideButtonPickerView:(WAMediaCastingRoutePickerView *)arg1;
- (void)didSelectDeviceItem:(WAMediaCastingRoutePickerDeviceItem *)arg1 pickerView:(WAMediaCastingRoutePickerView *)arg2;
@end

