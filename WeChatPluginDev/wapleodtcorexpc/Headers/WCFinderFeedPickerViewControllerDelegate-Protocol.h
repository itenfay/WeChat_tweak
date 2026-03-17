//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderDataItem, WCFinderFeedPickerViewController;

@protocol WCFinderFeedPickerViewControllerDelegate <NSObject>

@optional
- (void)finderFeedPickerViewControllerDidClickCancel:(WCFinderFeedPickerViewController *)arg1;
- (void)finderFeedPickerViewController:(WCFinderFeedPickerViewController *)arg1 didSelectDataItem:(WCFinderDataItem *)arg2;
@end

