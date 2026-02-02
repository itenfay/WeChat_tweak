//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAMediaCastingRoutePickerViewModel;

@protocol WAMediaCastingRoutePickerViewModelDelegate <NSObject>
- (void)onMediaCastingRoutePickerViewModelCurrentDeviceStatusChanged:(WAMediaCastingRoutePickerViewModel *)arg1;
- (void)onMediaCastingRoutePickerViewModelSearchingStatusChanged:(WAMediaCastingRoutePickerViewModel *)arg1;
- (void)onMediaCastingRoutePickerViewModelDeviceListChanged:(WAMediaCastingRoutePickerViewModel *)arg1;
@end

