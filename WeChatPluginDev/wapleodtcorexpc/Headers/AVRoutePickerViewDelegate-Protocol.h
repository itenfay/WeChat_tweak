//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVRoutePickerView;

@protocol AVRoutePickerViewDelegate <NSObject>

@optional
- (void)routePickerViewDidEndPresentingRoutes:(AVRoutePickerView *)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(AVRoutePickerView *)arg1;
@end

