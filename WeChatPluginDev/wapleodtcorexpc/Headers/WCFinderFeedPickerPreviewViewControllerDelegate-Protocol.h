//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderDataItem, WCFinderFeedPickerPreviewViewController;

@protocol WCFinderFeedPickerPreviewViewControllerDelegate <NSObject>

@optional
- (void)finderFeedPickerPreviewViewController:(WCFinderFeedPickerPreviewViewController *)arg1 didClicReturnWithDataItem:(WCFinderDataItem *)arg2;
- (void)finderFeedPickerPreviewViewController:(WCFinderFeedPickerPreviewViewController *)arg1 didClickDoneWithDataItem:(WCFinderDataItem *)arg2;
@end

