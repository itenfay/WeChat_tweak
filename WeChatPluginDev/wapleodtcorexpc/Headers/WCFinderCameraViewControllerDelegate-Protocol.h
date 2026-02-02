//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderCameraViewController, WCFinderDataItem;

@protocol WCFinderCameraViewControllerDelegate <NSObject>

@optional
- (_Bool)isFrontCamera;
- (void)finderCameraViewController:(WCFinderCameraViewController *)arg1 didSelectedFinderDataItem:(WCFinderDataItem *)arg2;
@end

