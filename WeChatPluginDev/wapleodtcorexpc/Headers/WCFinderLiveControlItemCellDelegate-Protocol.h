//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveControlItem, WCFinderLiveControlItemCell;

@protocol WCFinderLiveControlItemCellDelegate <NSObject>

@optional
- (void)onWCFinderLiveStarterControlItemCellClicked:(WCFinderLiveControlItemCell *)arg1 item:(MMLiveControlItem *)arg2;
@end

