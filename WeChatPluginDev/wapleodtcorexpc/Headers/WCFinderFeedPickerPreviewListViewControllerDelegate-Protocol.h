//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderDataItem, WCFinderFeedPickerPreviewListViewController;

@protocol WCFinderFeedPickerPreviewListViewControllerDelegate <NSObject>
- (void)finderFeedPickerPreviewViewController:(WCFinderFeedPickerPreviewListViewController *)arg1 didClickCancelWithDataItem:(WCFinderDataItem *)arg2;
- (void)finderFeedPickerPreviewListViewController:(WCFinderFeedPickerPreviewListViewController *)arg1 didSelectDataItem:(WCFinderDataItem *)arg2;
@end

