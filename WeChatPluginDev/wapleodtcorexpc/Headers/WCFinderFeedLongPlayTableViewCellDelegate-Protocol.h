//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedContentVM, WCFinderFeedLongPlayTableViewCell;

@protocol WCFinderFeedLongPlayTableViewCellDelegate <NSObject>
- (void)playCellShowComment:(WCFinderFeedLongPlayTableViewCell *)arg1 forContentVM:(WCFinderFeedContentVM *)arg2 fromComment:(_Bool)arg3;
- (void)playCellOnPlayEnd:(WCFinderFeedLongPlayTableViewCell *)arg1;
- (void)playCellBulletTooLong:(WCFinderFeedLongPlayTableViewCell *)arg1;
- (void)playCellInPicture:(WCFinderFeedLongPlayTableViewCell *)arg1;
- (void)playCellMinimize:(WCFinderFeedLongPlayTableViewCell *)arg1;
- (void)playCellProtrait:(WCFinderFeedLongPlayTableViewCell *)arg1;
- (void)playCellLandScape:(WCFinderFeedLongPlayTableViewCell *)arg1;
- (void)playCellDismiss:(WCFinderFeedLongPlayTableViewCell *)arg1;
@end

