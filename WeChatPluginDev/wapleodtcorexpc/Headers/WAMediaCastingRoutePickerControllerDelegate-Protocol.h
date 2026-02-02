//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UINavigationController, WAMediaCastingRoutePickerController, WAMediaCastingRoutePickerDeviceItem;

@protocol WAMediaCastingRoutePickerControllerDelegate <NSObject>
- (UINavigationController *)navigationControllerToShowGuideWebViewWithMediaCastingRoutePickerController:(WAMediaCastingRoutePickerController *)arg1;
- (void)onMediaCastingRoutePickerController:(WAMediaCastingRoutePickerController *)arg1 upnpVideoPlayerPositionInfoChanged:(double)arg2 duration:(double)arg3;
- (void)onMediaCastingRoutePickerController:(WAMediaCastingRoutePickerController *)arg1 upnpVideoPlayerStateChanged:(unsigned long long)arg2;
- (void)onMediaCastingRoutePickerController:(WAMediaCastingRoutePickerController *)arg1 upnpVideoDidCast:(_Bool)arg2;
- (void)onMediaCastingRoutePickerController:(WAMediaCastingRoutePickerController *)arg1 userSelected:(WAMediaCastingRoutePickerDeviceItem *)arg2;
@end

