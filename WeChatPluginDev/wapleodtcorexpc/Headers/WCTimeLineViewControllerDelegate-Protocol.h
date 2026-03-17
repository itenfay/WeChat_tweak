//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDataItem, WCFinderPostSessionModel;

@protocol WCTimeLineViewControllerDelegate <NSObject>
- (void)onWCTimeLineViewControllerLeaveForFinderPersonalCenter;
- (void)onWCTimeLineViewControllerLeaveForFinderEntranceWithPostSession:(WCFinderPostSessionModel *)arg1;
- (void)onTimeLineViewReturn;
- (void)onMarkWCObjectAsRead:(WCDataItem *)arg1;
@end

