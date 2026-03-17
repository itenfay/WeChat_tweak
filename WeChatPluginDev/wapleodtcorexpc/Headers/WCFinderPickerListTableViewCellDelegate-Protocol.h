//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedContentVM, WCFinderPickerListTableViewCell;

@protocol WCFinderPickerListTableViewCellDelegate <NSObject>

@optional
- (void)finderPickerListTableViewCellTriggerAntiAddictCheckLogic;
- (void)finderPickerListTableViewCellDidClickDesctiption:(WCFinderPickerListTableViewCell *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
@end

