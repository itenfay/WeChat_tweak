//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedContentVM, WCFinderLandScapeBidCardTableViewCell;

@protocol WCFinderLandScapeBidCardTableViewCellDelegate <NSObject>

@optional
- (void)landscapeCellDidClickSeeLater:(WCFinderLandScapeBidCardTableViewCell *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 seeLaterState:(_Bool)arg3;
@end

